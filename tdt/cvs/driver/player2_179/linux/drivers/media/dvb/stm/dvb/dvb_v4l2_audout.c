/***********************************************************************
 *
 * File: dvb_v4l2_audout.c
 * 
 * Copyright (c) 2009 STMicroelectronics Limited.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file COPYING in the main directory of this archive for
 * more details.
 *
 * V4L2 audio output device driver for ST SoC display subsystems.
 *
\***********************************************************************/

#include <linux/poll.h>
#include "stm_v4l2.h"

#include "dvb_module.h"
#include "dvb_v4l2_export.h"

/* 
 * AUDIO OUTPUT Devices:
 */
struct staout_description {
    char name[32];
    int audioId; // id associated with audio description
    int  deviceId;
    int  virtualId;
};

//< Describes the audio output surfaces to user
static struct staout_description g_aoutDevice[] = {
	{ "MIXER0_PRIMARY",    0, 0, 0},  //<! "MIXER0_PRIMARY" audio, primary audio mixer input
	{ "MIXER0_SECONDARY",  0, 0, 0},  //<! "MIXER0_SECONDARY" audio, secondary audio mixer input
	{ "MIXER1_PRIMARY",    0, 0, 0},  //<! "MIXER1_PRIMARY", audio, physically independent audio device used for second room audio output
};


static int dvb_v4l2_audout_ioctl(struct stm_v4l2_handles *handle, struct stm_v4l2_driver *driver,
		     int device, enum _stm_v4l2_driver_type type, struct file *file, unsigned int cmd, void *arg)
{
    switch(cmd)
    {
	case VIDIOC_ENUMAUDOUT:
	{
	    struct v4l2_audioout * const audioout = arg;
	    int index = audioout->index - driver->index_offset[device];

	    if (index < 0 || index >= ARRAY_SIZE (g_aoutDevice)) {
		DVB_ERROR("VIDIOC_ENUMAUDOUT: Output number out of range %d\n", index);
		return -EINVAL;
	    }

	    strcpy(audioout->name, g_aoutDevice[index].name);

	    break;
	}

	case VIDIOC_S_AUDOUT:
	{
	    const struct v4l2_audioout * const audioout = arg;
	    int index = audioout->index - driver->index_offset[device];

	    if (index < 0 || index >= ARRAY_SIZE (g_aoutDevice)) {
		DVB_ERROR("VIDIOC_S_AUDOUT: Output number out of range %d\n", index);
		return -EINVAL;
	    }

	    // allocate handle for driver registration

	    handle->v4l2type[STM_V4L2_AUDIO_OUTPUT].handle = kmalloc(sizeof(struct v4l2_audioout),GFP_KERNEL);
	    if (handle->v4l2type[STM_V4L2_AUDIO_OUTPUT].handle == NULL) {
		DVB_ERROR("VIDIOC_S_AUDOUT: kmalloc failed\n" );
		return -EINVAL;
	    }

	    g_aoutDevice[index].audioId = index;

	    break;
	}

	default:
	{
	    return -ENOTTY;
	}
    }

    return 0;
}

/* NOTE: Platform procedures to be added if necessary */

static int dvb_v4l2_audout_close(struct stm_v4l2_handles *handle, enum _stm_v4l2_driver_type type, struct file  *file)
{
    if (handle->v4l2type[STM_V4L2_AUDIO_OUTPUT].handle)
	kfree(handle->v4l2type[STM_V4L2_AUDIO_OUTPUT].handle);

    handle->v4l2type[STM_V4L2_AUDIO_OUTPUT].handle = NULL;

    return 0;
}

static struct stm_v4l2_driver dvb_v4l2_audout_driver = {
	.name           = "dvb_v4l2_audout",
	.type           = STM_V4L2_AUDIO_OUTPUT,
	.control_range  = {{ V4L2_CID_STM_AUDIO_O_FIRST, V4L2_CID_STM_AUDIO_O_LAST },
			   { V4L2_CID_STM_AUDIO_O_FIRST, V4L2_CID_STM_AUDIO_O_LAST },
			   { V4L2_CID_STM_AUDIO_O_FIRST, V4L2_CID_STM_AUDIO_O_LAST } },
	.n_indexes      = { ARRAY_SIZE (g_aoutDevice), ARRAY_SIZE (g_aoutDevice), ARRAY_SIZE (g_aoutDevice) },
	.ioctl          = dvb_v4l2_audout_ioctl,
	.close          = dvb_v4l2_audout_close,
	.poll           = NULL,
	.mmap           = NULL,
};

static int __init dvb_v4l2_audout_init(void)
{
    return stm_v4l2_register_driver(&dvb_v4l2_audout_driver);
}

static void __exit dvb_v4l2_audout_exit (void)
{
    stm_v4l2_unregister_driver (&dvb_v4l2_audout_driver);
}

//module_init (dvb_v4l2_audout_init);
//module_exit (dvb_v4l2_audout_exit);

//MODULE_LICENSE ("GPL");


/************************************************************************
COPYRIGHT (C) STMicroelectronics 2006

Source file name : collator_pes_video_avs.h
Author :           Julian

Definition of the base collator pes class implementation for player 2.


Date        Modification                                    Name
----        ------------                                    --------
12-Jun-07   Created from existing collator_pes_video.h      Julian

************************************************************************/

#ifndef H_COLLATOR_PES_VIDEO_AVS
#define H_COLLATOR_PES_VIDEO_AVS

// /////////////////////////////////////////////////////////////////////
//
//      Include any component headers

#include "collator_pes_video.h"

// /////////////////////////////////////////////////////////////////////////
//
// Locally defined structures
//

// /////////////////////////////////////////////////////////////////////////
//
// The class definition
//

class Collator_PesVideoAvs_c : public Collator_PesVideo_c
{
protected:

public:

    Collator_PesVideoAvs_c();

    CollatorStatus_t   Reset(                   void );
};

#endif // H_COLLATOR_PES_VIDEO_AVS


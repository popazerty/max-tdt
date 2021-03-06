#ifndef __VFD_TRANSLATE_H
#define __VFD_TRANSLATE_H
static int unicode_vfd[][2] = {  // 286 + 1 posledni zarazka konce
// file:///c:/!downloads/Unicode%20Map%20-%20Browsing%20Range%20%27Cyrillic%27.htm
  {0x0400,'E'},
  {0x0401,0xc0},
  {0x0402,0xc1},
  {0x0403,0xc2},
  {0x0404,0xc3},
  {0x0405,'S'},
  {0x0406,'I'},
  {0x0407,0xc4},
  {0x0408,'J'},
  {0x0409,0xc5},

  {0x040a,0xc6},
  {0x040b,0xc7},
  {0x040c,0xc8},
  {0x040d,0xd0},  // bez akcentu, obrazene 'N' s carkou
  {0x040e,0xc9},
  {0x040f,0xca},
  {0x0410,'A'},
  {0x04d0,'A'}, // 'A' s kulatym hackem
  {0x0411,0xcb},
  {0x0412,'B'},
  {0x0413,0xcc},

  {0x0414,0xcd},
  {0x0415,'E'},
  {0x04d6,'E'}, // 'E' s kulatym hackem
  {0x0416,0xce},
  {0x0417,0xcf},
  {0x0418,0xd0},
  {0x0419,0xd1},
  {0x041a,'K'},
  {0x041b,0xd2},
  {0x041c,'M'},
  {0x041d,'H'},

  {0x041e,'O'},
  {0x041f,0xd3},
  {0x0420,'P'},
  {0x0421,'C'},
  {0x0422,'T'},
  {0x0423,'Y'},
  {0x0424,0xd4},
  {0x0425,'X'},
  {0x0426,0xd5},
  {0x0427,0xd6},


  {0x0428,0xd7},
  {0x0429,0xd8},
  {0x042a,0xd9},
  {0x042b,0xda},
  {0x042c,0xdb},
  {0x042d,0xdc},
  {0x042e,0xdd},
  {0x042f,0xde},
  {0x0430,'A' }, // 0xdf prazdny znak ??
  {0x04d1,'a'}, // 'a' s kulatym hackem
  {0x04d3,0x84}, // 'a' s dvema teckama
  {0x04d2,'A'}, // 'A' s dvema teckama

  {0x0431,0xcb},
  {0x0432,'B'},
  {0x0433,0xcc},
  {0x0434,0xcd},
  {0x0435,'E'},
  {0x04d7,'e'}, // 'e' s kulatym hackem
  {0x0436,0xce},
  {0x0437,0xcf},
  {0x0438,0xd0},
  {0x0439,0xd1},
  {0x043a,'K'},
  {0x043b,0xd2},

  {0x043c,'M'},
  {0x043d,'H'},
  {0x043e,'O'},
  {0x043f,0xd3},
  {0x0440,'P'},
  {0x0441,'C'},
  {0x0442,'T'},
  {0x0443,'Y'},
  {0x0444,0xd4},
  {0x0445,'X'},

  {0x0446,0xd5},
  {0x0447,0xd6},
  {0x0448,0xd7},
  {0x0449,0xd8},
  {0x044a,0xd9},
  {0x044b,0xda},
  {0x044c,0xdb},
  {0x044d,0xdc},
  {0x044e,0xdd},
  {0x044f,0xde},

  {0x0450,0x83 },// male e s carkou
  {0x0451,0x93},
  {0x0452,0xf5},
  {0x0453,0xf6},
  {0x0454,0xf7},
  {0x0455,'s'},
  {0x0456,'i'},
  {0x0457,0xf8 },// 0x8b i s dvema teckama
  {0x0458,'j'},
  {0x0459,0xf9},

  {0x045a,0xfa},
  {0x045b,0xfb},
  {0x045c,0xfc},
  {0x045d,0xe5}, // bez akcentu, male obracene 'n' s carkou
  {0x045e,0xfe},
  {0x045f,0xff},
//0x0460
//0x0461
//0x0462
//0x0463

// file:///c:/!downloads/Unicode%20Map%20-%20Browsing%20Range%20%27Latin%20Extended-A%27.htm
  {0x0100,'A'},
  {0x0101,'a'},
  {0x0102,'A'},
  {0x0103,'a'},
  {0x0104,'A'},
  {0x0105,'a'},
  {0x0106,'C'},
  {0x0107,'c'},
  {0x0108,'C'},
  {0x0109,'c'},

  {0x010a,'C'},
  {0x010b,'c'},
  {0x010c,'C'},
  {0x010d,'c'},
  {0x010e,'D'},
  {0x010f,'d'},
  {0x0110,'D'},
  {0x0111,'d'},
  {0x0112,'E'},
  {0x0113,'e'},

  {0x0114,'E'},
  {0x0115,'e'},
  {0x0116,'E'},
  {0x0117,'e'},
  {0x0118,'E'},
  {0x0119,'e'},
  {0x011a,'E'},
  {0x011b,0xa5},
  {0x011c,'G'},
  {0x011d,'g'},

  {0x011e,'G'},
  {0x011f,'g'},
  {0x0120,'G'},
  {0x0121,'g'},
  {0x0122,'G'},
  {0x0123,'g'},
  {0x0124,'H'},
  {0x0125,'h'},
//0x0126 
//0x0127

  {0x0128,'I'},
  {0x0129,'i'},
  {0x012a,'I'},
  {0x012b,'i'},
  {0x012c,'I'},
  {0x012d,'i'},
  {0x012e,'I'},
  {0x012f,'i'},
  {0x0130,'I'},
  {0x0131,'i'},

  {0x0132,0xa8 },// 'IJ'
  {0x0133,0xa9 },// 'ij'
  {0x0134,'J'},
  {0x0135,'j'},
  {0x0136,'K'},
  {0x0137,'k'},
  {0x0138,'k'},
  {0x0139,'L'},
  {0x013a,'I'},
  {0x013b,'L'},

  {0x013c,'I'},
  {0x013d,'L'},
  {0x013e,'I'},
  {0x013f,'L'},
  {0x0140,'I'},
  {0x0141,'L'},
  {0x0142,'I'},
  {0x0143,'N'},
  {0x0144,'n'},
  {0x0145,'N'},

  {0x0146,'n'},
  {0x0147,'N'},
  {0x0148,0xa6},
  {0x0149,'n'},
  {0x014a,'N'},
  {0x014b,'n'},
  {0x014c,'O'},
  {0x014d,'o'},
  {0x014e,'O'},
  {0x014f,'o'},

  {0x0150,'O'},
  {0x0151,'o'},
//0x0152 // nejake 'OE'
//0x0153 // nejake 'oe'
  {0x0154,'R'},
  {0x0155,'r'},
  {0x0156,'R'},
  {0x0157,'r'},
  {0x0158,'R'},
  {0x0159,'r'},

  {0x015a,'S'},
  {0x015b,'s'},
  {0x015c,'S'},
  {0x015d,'s'},
  {0x015e,'S'},
  {0x015f,'s'},
  {0x0160,'S'},
  {0x0161,'s'},
  {0x0162,'T'},
  {0x0163,'t'},

  {0x0164,'T'},
  {0x0165,'t'},
  {0x0166,'T'},
  {0x0167,'t'},
  {0x0168,'U'},
  {0x0169,'u'},
  {0x016a,'U'},
  {0x016b,'u'},
  {0x016c,'U'},
  {0x016d,'u'},

  {0x016e,'U'},
  {0x016f,'u'},
  {0x0170,'U'},
  {0x0171,'u'},
  {0x0172,'U'},
  {0x0173,'u'},
  {0x0174,'W'},
  {0x0175,'w'},
  {0x0176,'Y'},
  {0x0177,'y'},

  {0x0178,'Y'},
  {0x0179,'Z'},
  {0x017a,'z'},
  {0x017b,'Z'},
  {0x017c,'z'},
  {0x017d,'Z'},
  {0x017e,'z'},
//0x017f

// "Unicode Map - Browsing Range 'Latin-1 Supplement'.htm" 

  {0x00a3,0x9c},
  {0x00c0,0xb7},
  {0x00c1,0xb5},
  {0x00c2,0xb6},
  {0x00c3,'A'},
  {0x00c4,0x8e},
  {0x00c5,0x8f},

  {0x00c6,0x92}, // nejake 'AE'
  {0x04d4,0x92}, // 'AE'
  {0x00c7,'C'},
  {0x00c8,'E'},
  {0x00c9,0x90},
  {0x00ca,'E'},
  {0x00cb,0xc0},
  {0x00cc,'I'},
  {0x00cd,'I'},
  {0x00ce,'I'},
  {0x00cf,'I'},

  {0x00d0,'D'},
  {0x00d1,0xa5 },// velke 'N' s vlnkou
  {0x00d2,'O'},
  {0x00d3,'O'},
  {0x00d4,'O'},
  {0x00d5,'O'},
  {0x00d6,'O'},
  {0x00d7,0x9e},
  {0x00d8,0x9d},
  {0x00d9,'U'},

  {0x00da,'U'},
  {0x00db,'U'},
  {0x00dc,'U'},
  {0x00dd,'Y'},
//0x00de
//0x00df
  {0x00e0,0x85},
  {0x00e1,0x80},
  {0x00e2,'a'},
  {0x00e3,'a'},

  {0x00e4,0x84}, // 'a' s dvema teckama
  {0x00e5,0x86},
  {0x00e6,0x91}, // 'ae'
  {0x04d5,0x91}, // 'ae'
  {0x00e7,0x80},
  {0x00e8,0x8a},
  {0x00e9,0x82},
  {0x00ea,0x88},
  {0x00eb,0x89},
  {0x00ec,0x8d},
  {0x00ed,0x84},

  {0x00ee,0x8c},
  {0x00ef,0xeb},
//0x00f0 
  {0x00f1,0xa4 },// male 'n' s vlnkou
  {0x00f2,0x95},
  {0x00f3,0x86},
  {0x00f4,0x93},
  {0x00f5,'o'},
  {0x00f6,0x94},
// 0x00f7 // deleno

  {0x00f8,0x9b}, // prumer
  {0x00f9,0x97},
  {0x00fa,0xa3}, // 'u' s carkou
  {0x00fb,0x96},
  {0x00fc,0x9a},
  {0x00fd,'y' },// 'y' s carkou
//0x00fe 
  {0x00ff,0x98},

  {0x0000,0x00} // zarazka
};

#endif

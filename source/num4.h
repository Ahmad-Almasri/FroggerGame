/* GIMP RGBA C-Source image dump (num4.c) */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */ 
  unsigned char	 pixel_data[29 * 29 * 2 + 1];
} N4 = {
  29, 29, 2,
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000A\010$!\246\061"
  "Mk\246\061$!A\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\206\061\222\224y\316\232\326\333\336]\357\333\336\232"
  "\326\272\326\262\224\246\061\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\004!\222\224\373\336Y\316\256s\212R\004!\004!\343\030\212R\014"
  "c\030\306<\347Q\214$!\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\246\061Y\316\034\347,c\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\313Z\373\336Y"
  "\316\246\061\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\246\061<\347\327\275"
  "e)\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000E)\226\265\236\367\246\061\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\004!\070\306\367\275a\010\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000A\010u\255\232\326$!\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000q\214\333\336e)\000\000\000\000\000\000\000\000\000\000\000\000\000\000\202\020\343\030\343"
  "\030\000\000\000\000\000\000\000\000\000\000E)\034\347\323\234\000\000\000\000\000\000\000\000\000\000\000\000\000\000\206"
  "\061\373\336\216s\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\353Z\034\347\246\061\000\000\000"
  "\000\000\000\000\000\000\000\000\000\313Z]\357\246\061\000\000\000\000\000\000\000\000\000\000\000\000Q\214Y\316\040"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\206\061\373\336\236\367\246\061\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\327\275\020\204\000\000\000\000\000\000\000\000\000\000A\010\232\326mk\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\222\224\232\326\373\336\246\061\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\014c\272\326A\010\000\000\000\000\000\000\000\000$!\272\326\252R\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000IJ\272\326,c\373\336\246\061\000\000\000\000\000\000\000\000\000\000\000\000\000\000\212R"
  "\034\347$!\000\000\000\000\000\000\000\000\206\061\333\336\004!\000\000\000\000\000\000\000\000\000\000\000\000$!Y\316"
  "q\214E)\373\336\246\061\000\000\000\000\000\000\000\000\000\000\000\000\000\000\343\030\034\347\246\061\000"
  "\000\000\000\000\000\000\000\347\071\034\347$!\000\000\000\000\000\000\000\000\000\000a\010\070\306\030\306a\010"
  "E)\373\336\246\061\000\000\000\000\000\000\000\000\000\000\000\000\000\000\004!<\347\307\071\000\000\000\000\000\000"
  "\000\000\206\061\272\326\004!\000\000\000\000\000\000\000\000\000\000\064\245\333\336\252R\246\061\313"
  "Z\373\336\014c\246\061\000\000\000\000\000\000\000\000\000\000\000\000\343\030\272\326\246\061\000\000\000"
  "\000\000\000\000\000$!\034\347\252R\000\000\000\000\000\000\000\000a\010\333\336\034\347\333\336\333\336"
  "\333\336\337\377\333\336U\255\000\000\000\000\000\000\000\000\000\000\000\000\212R\333\336$!\000\000"
  "\000\000\000\000\000\000A\010\272\326mk\000\000\000\000\000\000\000\000a\010\343\030\343\030\343\030\343\030"
  "\010B\373\336IJ\343\030\000\000\000\000\000\000\000\000\000\000\000\000\014c\272\326A\010\000\000\000\000\000\000"
  "\000\000\000\000\256s\030\306\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000E)\034\347\246\061"
  "\000\000\000\000\000\000\000\000\000\000\000\000\040\000\367\275\363\234\000\000\000\000\000\000\000\000\000\000\000\000\206"
  "\061<\347Mk\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000E)\020\204\246\061\000\000\000\000\000\000\000"
  "\000\000\000\000\000\313Z\272\326\206\061\000\000\000\000\000\000\000\000\000\000\000\000\000\000\060\204]\357e)"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000E)\272\326\222"
  "\224\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\004!\333\336u\255\202\020\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000a\010u\255\232\326\004!\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\246\061<\347\266\265e)\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000e)\064\245]\357\010B\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\246\061\232\326\373\336\353Z\040\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\040\000"
  "\353Zy\316\232\326\010B\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\004!\060\204]\357\030\306\014c\252R\004!$!\004!\252R\014c\367\275\333\336\323\234"
  "\004!\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\206\061"
  "\323\234\232\326\333\336\272\326\034\347\034\347\333\336\232\326Q\214\347\071"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000A\010$!\206\061\347\071\206\061$!A\010\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000",
};

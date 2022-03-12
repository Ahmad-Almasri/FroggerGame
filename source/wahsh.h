/* GIMP RGBA C-Source image dump (wahsh.c) */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */ 
  unsigned char	 pixel_data[51 * 46 * 2 + 1];
} w = {
  51, 46, 2,
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\040\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\000\200\000\330\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\030\000\320\000\230\040\000\040"
  "\000\040\000\040\000\040\000\040\000\000\030\000\040\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\040\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\000\230\000\370\000\230\040\000\040\000\040\000\000\030\000X\000\250\000\340\000\230"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\000\330\000\310\000\250\000P\040\000\040\000\040\000\000\030\000\340\000\370\000\270"
  "\040\000\040\000\000\070\000\310\000\360\000\360\000\240\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\300\000"
  "\370\000\370\000\320\000X\040\000\000@\000\360\000\370\000\320\040\000\000\070\000\320\000\370\000\370"
  "\000\230\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\240\000\370\000\370\000\360\000\250\000"
  "\210\000\370\000\370\000\360\000\230\000\320\000\370\000\370\000\320\000\030\000\030\000\060\000@\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\000\310\000\370\000\370\000\370\000\360\000\370\000\370\000\370\000"
  "\350\000\370\000\370\000\370\000\340\000\310\000\340\000\360\000\370\000\320\000\300\000\260\000"
  "`\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\000X\000\350\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\360\000\330\000\270\000\250\000x\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\070\000\310\000\360\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\340\000\210\000\030\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\000h\000\320\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\350\000\310"
  "\000\300\000\060\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\000h\000\340\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\340\000\220"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000(\000\330\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\320\000\320\000\370\000\310\000\030\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\300\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\330\000\000\000\060\000\230\000\070\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\000X\000\360\000\370\000\370\000\370\000\370\000\370\000\370\000"
  "\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000"
  "\370\000\370\000\370\000\370\000p\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\000\260\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000"
  "\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000"
  "\370\000\370\000\330\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\030\000\220"
  "\000\320\000\370\000\370\000\370\000\370\000\320\000\260\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\360\000\270\000\320\000\370\000\370\000\370\000\370"
  "\000\360\000\260\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\030\000\230\000\340\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\300\000\000\000\240\000\370\000\370\000\370\000\370\000\370\000"
  "\370\000\370\000\370\000\360\000\240\000\000\000\310\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\330\000\260\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\000\030\000\260\000\370\000\370\000\370\000\370\000\370\000"
  "\370\000\370\000\370\000\300\000\000\000\000\000\240\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\360\000\240\000\020\000\000\000\250\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\310\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\000\030\000\260\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000"
  "\370\000\330\000\000\000\000\000\000\000\230\000\370\000\370\000\370\000\370\000\360\000\230\000\020\000\000"
  "\000\020\000\260\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\310\000"
  "\030\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\000\220\000\370\000\370\000\370\000\370\000\350\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\320\000\220\000H\000H\000\320\000\370\000\370\000\370\000\310\000X\000H\000X\000\270\000\360\000\370"
  "\000\370\000\370\000\370\000\370\000\360\000\370\000\370\000\370\000\370\000\270\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\040\000\330\000\370\000\370"
  "\000\370\000\320\000\310\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\260\000\320\000\370\000\370\000\370\000\350\000\040\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\240\000\370\000\370\000"
  "\370\000\340\000\070\000\230\000\340\000\340\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\330\000\340\000\250\000\020\000\320\000\370\000\370\000\370\000\250\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\300\000\370\000\370\000"
  "\370\000\300\000\000\000H\000`\000\310\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\320\000H\000X\000\000\000\240\000\370\000\370\000\370\000\320\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\320\000\370\000\370\000\370\000`\000\000\000"
  "\000\000\000\000\310\000\370\000\370\000\370\000\370\000\360\000\330\000\300\000\230\000\210\000p\000X"
  "\000p\000x\000\240\000\250\000\330\000\370\000\370\000\370\000\370\000\370\000\320\000\000\000\000\000\000"
  "\000X\000\370\000\370\000\370\000\330\000\030\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\000\030\000\340\000\370\000\370\000\360\000\060\000\000\000\000\000\000\000\310\000\370\000\370"
  "\000\370\000\370\000\270\000\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\270\000\370"
  "\000\370\000\370\000\370\000\320\000\000\000\000\000\000\000\040\000\350\000\370\000\370\000\350\000\040\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\330\000\370\000\370\000"
  "\370\000p\000\000\000\000\000\000\000\310\000\370\000\370\000\370\000\370\000\310\000\000\000`\000\060\000x\000"
  "\270\000\020\000\320\000\270\000\040\000X\000\000\000\240\000\370\000\370\000\370\000\370\000\320\000\000"
  "\000\000\000\000\000X\000\370\000\370\000\370\000\340\000\040\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\000\340\000\370\000\370\000\370\000\330\000\040\000\000\000\000\000\310\000"
  "\370\000\370\000\370\000\370\000\360\000\060\000\320\000\340\000\330\000\370\000\340\000\370\000\360"
  "\000\310\000\350\000\060\000\330\000\370\000\370\000\370\000\370\000\320\000\000\000\000\000H\000\270\000"
  "\370\000\370\000\370\000\270\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\000h\000\370\000\370\000\370\000\370\000\340\000\260\000\000\000\320\000\370\000\370\000"
  "\370\000\370\000\370\000\330\000\360\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000"
  "\370\000\340\000\370\000\370\000\370\000\370\000\370\000\320\000\020\000\240\000\340\000\370\000\370"
  "\000\370\000\370\000\220\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\000\030\000\320\000\370\000\370\000\370\000\370\000\370\000p\000\340\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\330\000p\000\360\000\370\000\370\000\370\000\370"
  "\000\310\000\030\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\000X\000\360\000\370\000\370\000\370\000\370\000\240\000\350\000\370\000\370\000\370\000\370\000"
  "\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000"
  "\370\000\370\000\370\000\370\000\370\000\350\000x\000\370\000\370\000\370\000\370\000\360\000X\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\000\230\000\370\000\370\000\360\000\250\000@\000\350\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\360\000@\000\300\000\370\000\370\000\360\000\240\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000"
  "P\000x\000X\000\030\000@\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000@\040\000\000P\000x\000\070\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000p\000\370\000"
  "\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000"
  "\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000h\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\210\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\210\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\000\230\000\370\000\370\000\370\000\370\000\370\000\270"
  "\000\260\000\340\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\320\000\300\000\260"
  "\000\370\000\370\000\370\000\370\000\370\000\230\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\000\250\000\370\000\370\000\370\000\370\000\350\000\060\040\000\040\000\000"
  "P\000p\000\240\000\230\000x\000x\000H\000\030\040\000\000@\000\370\000\370\000\370\000\370\000\370\000\270"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\260\000\370\000\370"
  "\000\370\000\370\000\340\000\040\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\000\040\000\360\000\370\000\370\000\370\000\370\000\260\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\000\300\000\370\000\370\000\370\000\370\000\330\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\030\000\340\000\370\000\370"
  "\000\370\000\370\000\270\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000"
  "\030\000\310\000\370\000\370\000\370\000\370\000\320\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\000\330\000\370\000\370\000\370\000\370\000\330\000\040"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000`\000\320\000\370\000\370\000\370\000\370"
  "\000\370\000\350\000@\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000"
  "h\000\350\000\370\000\370\000\370\000\370\000\370\000\340\000X\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\000\260\000\370\000\370\000\370\000\370\000\370\000\370\000\370\000\310\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\300\000\370\000\370\000\370\000"
  "\370\000\370\000\370\000\370\000\310\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\030\000\320\000"
  "\370\000\370\000\370\000\370\000\370\000\370\000\370\000\300\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\000\320\000\370\000\370\000\370\000\370\000\370\000\370\000\370"
  "\000\320\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\000\060\000\250\000\300\000\320\000\320\000"
  "\320\000\310\000\240\000\070\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\000\040\000\240\000\260\000\310\000\320\000\310\000\300\000\220\000(\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000"
  "\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000\040"
  "\000\040\000\040\000\040\000\040\000\040\000\040\000\040\000",
};

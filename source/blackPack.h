/* GIMP RGBA C-Source image dump (blackPack.c) */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */ 
  unsigned char	 pixel_data[40 * 40 * 2 + 1];
} BLACKP = {
  40, 40, 2,
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\377\377"
  "\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377"
  "\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377"
  "\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000"
  "\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000"
  "\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377"
  "\377\377\377\377\377\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377"
  "\377\000\000\000\000\000\000\000\320\000\320\000\320\000\320\000\320\000\320\377\377\377\377\377"
  "\377\377\377\377\377\377\377\000\000\000\000\000\000\000\320\000\320\000\320\000\320\000\320\000"
  "\320\000\320\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000"
  "\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\320\000\320\000\320\000\320\000"
  "\320\000\320\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000"
  "\320\000\320\000\320\000\320\000\320\000\320\000\320\377\377\377\377\377\377\377\377"
  "\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000"
  "\000\000\000\320\000\320\000\320\000\320\000\320\000\320\377\377\377\377\377\377\377\377"
  "\377\377\377\377\000\000\000\000\000\000\000\320\000\320\000\320\000\320\000\320\000\320\000\320\377"
  "\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377"
  "\377\377\377\377\377\000\000\000\000\000\000\000\320\000\320\000\320\000\320\000\320\000\320\377"
  "\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\320\000\320\000\320"
  "\000\320\000\320\000\320\000\320\377\377\377\377\377\377\377\377\377\377\377\377"
  "\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\320\000\320"
  "\000\320\000\320\000\320\000\320\377\377\377\377\377\377\377\377\377\377\377\377"
  "\000\000\000\000\000\000\000\320\000\320\000\320\000\320\000\320\000\320\000\320\377\377\377\377\377"
  "\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377"
  "\377\000\000\000\000\000\000\000\320\000\320\000\320\000\320\000\320\000\320\377\377\377\377\377"
  "\377\377\377\377\377\377\377\000\000\000\000\000\000\000\320\000\320\000\320\000\320\000\320\000"
  "\320\000\320\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000"
  "\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377"
  "\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377"
  "\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377"
  "\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377"
  "\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377"
  "\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\377\377"
  "\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377"
  "\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000"
  "\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377"
  "\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\000"
  "\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\000\000"
  "\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377"
  "\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000"
  "\000\000\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000"
  "\000\000\000\000\000\000\000\000\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377"
  "\377\377\377\377\377\377\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377"
  "\000\000\000\000\000\000\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377"
  "\377\377\377\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377\000\000"
  "\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\000\000\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377\000\000"
  "\000\000\000\000\377\377\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000"
  "\000\000\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000"
  "\000\000\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\377\377\377"
  "\377\377\377\377\377\377\377\377\377\000\000\000\000\000\000\377\377",
};


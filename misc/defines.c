// Text mode
#define txtCharWidth = 8
#define txtCharHeight = 16
#define txtWidth = txtCharWidth * 80
#define txtHeight = txtCharHeight * 25

// 320x200@256c (Mode 13h)
#ifdef mode
    #if mode == 13
        #define width = 320
        #define height = 200
        #define colours = 256
        #define colors = 256    /*Americans*/
    #endif
#endif //mode
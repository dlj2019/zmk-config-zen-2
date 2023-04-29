// LAYERS
#define __MOUSE__    &mo MOUSE

// MOUSE
//#define __TEST1__    &kp A

#define MOUSESPEED 1200
#define __M__UP__    &mmv MOVE_VERT(-MOUSESPEED) 
#define _M_UP_R__    &mmv MOVE(MOUSESPEED, -MOUSESPEED)
#define _M_RIGHT_    &mmv MOVE_HOR(MOUSESPEED) 
#define _M__DN_R_    &mmv MOVE(MOUSESPEED, MOUSESPEED)
#define _M__DOWN_    &mmv MOVE_VERT(MOUSESPEED) 
#define _M__DN_L_    &mmv MOVE(-MOUSESPEED, MOUSESPEED)
#define _M__LEFT_    &mmv MOVE_HOR(-MOUSESPEED)
#define _M__UP_L_    &mmv MOVE(-MOUSESPEED, -MOUSESPEED)

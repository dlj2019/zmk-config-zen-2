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

#define _M_LCLCK_    &mkp LCLK 
#define _M_RCLCK_    &mkp RCLK
#define _M_MCLCK_    &mkp MCLK  
#define _M__BTN4_    &mkp MB4  
#define _M__BTN5_    &mkp MB5  
#define _M__BTN6_    &mkp MB6  
#define _M__BTN7_    &mkp MB7  
#define _M__BTN8_    &mkp MB8

#define _SCRL_UP_    &mwh SCROLL_VERT(10) 
#define _SCRL_DN_    &mwh SCROLL_VERT(-10) 
#define _SCRL_LF_    &mwh SCROLL_HOR(-10) 
#define _SCRL_RT_    &mwh SCROLL_HOR(10) 

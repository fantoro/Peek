#ifndef LANGUAGE_CONSTANTS_H
#define LANGUAGE_CONSTANTS_H

// Language Constants

#define L_MAX_LINES				92
                                     // max number + 1

// How this is gonna work
//
//  L_TYPE_FIRSTWORD_SECONDWORD(if there)
//
//  eg.  L_BMENUITEM_SAVE_AS
//       L_BALERT_INFO
//       etc..
//

// This may not always be the case - in fact, don't count on it.  You shouldn't be editting
// this file anyway unless you're adding stuff.

#define L_BMENU_FILE			0
#define L_BMENUITEM_FIND		1
#define L_BMENUITEM_QUIT		2



#define L_BMENU_HELP					3
#define L_BMENUITEM_ABOUT				4
#define L_BMENUITEM_DOCUMENTATION		5

#define L_BALERT_MISSING_HTML			6
#define L_BALERT_ABOUT					8

#define L_OK							7

#define L_BMENU_OPTIONS					9
#define L_BMENUITEM_SLIDESHOW			10
#define L_BMENUITEM_VIEWING_MODES		11

#define L_BMENU_IMAGE					12
#define L_BMENUITEM_SET_DESKTOP			13
#define L_BMENUITEM_CURRENT				14
#define L_BMENUITEM_TILED				15
#define L_BMENUITEM_CENTERED			16
#define L_BMENUITEM_SCALED				17
#define L_BMENUITEM_MANUAL				18
#define L_BMENUITEM_ALL					19

#define L_BMENUITEM_LOAD_DESKTOP		20

#define L_BMENUITEM_SCREEN_CAPTURE		21
#define L_BMENUITEM_WITH_PEEK			23
#define L_BMENUITEM_WITHOUT_PEEK		22

#define L_BMENUITEM_NORMAL				24
#define L_BMENUITEM_STRETCHED_TO_WINDOW	25
#define L_BMENUITEM_WINDOW_RESIZED		26

#define L_BMENUITEM_DESCENDING			27
#define L_BMENUITEM_ASCENDING			28
#define L_BMENUITEM_RANDOM				29

#define L_YES							30
#define L_NO							31
#define L_YES_TO_ALL					32
#define L_ERROR_COPYING					33
#define L_REPLACE_FILE					34
#define L_BMENUITEM_TRASH				35

#define L_BMENUITEM_THUMBNAIL_VIEW		36
#define L_BMENU_VIEW					37
#define L_BMENUITEM_TOGGLE_FULL_SCREEN	38
#define L_BMENUITEM_TOGGLE_FILE_LIST	39
#define L_BMENUITEM_TOGGLE_SLIDE_SHOW	40

#define L_BMENU_LANGUAGE				41

#define L_BMENUITEM_FILE_LIST			42
#define L_BMENUITEM_TOGGLE_IMAGES_ONLY  43

// mouse stuff

#define L_BMENUITEM_MOUSE				44
#define L_BMENUITEM_MAPPING				45
#define L_BMENUITEM_LEFT_BUTTON			46
#define L_BMENUITEM_RIGHT_BUTTON		47
#define L_BMENUITEM_MIDDLE_BUTTON		48

#define L_BMENUITEM_DRAGGING			49
#define L_BMENUITEM_SCROLLING			50
#define L_BMENUITEM_CLIPPING			51
#define L_BMENUITEM_POPUP_MENU			52
#define L_BMENUITEM_OPEN_NEW			53
#define L_BMENUITEM_FULL_SCREEN			54
#define L_BMENUITEM_HIDE_FILES			55

#define L_BMENUITEM_DELAY				56

#define L_BMENUITEM_MOUSE_DRAGGING		57
#define L_BMENUITEM_MOUSE_COPY			58
#define L_BMENUITEM_MOUSE_MOVE			59
#define L_BMENUITEM_MOUSE_LINK			60
#define L_BMENUITEM_MOUSE_TRASH			61
#define L_BMENUITEM_MOUSE_NONE			62
#define L_BMENUITEM_MOUSE_SWAP			63

#define L_BMENUITEM_MAKE_DEFAULT		64
#define L_BMENUITEM_SAVE_OPTIONS		65

#define L_CHECK_DEFAULT					66
#define L_BMENUITEM_EXEC_NON_IMAGE		67
#define L_BMENUITEM_LOAD_INTO_CENTER	68

#define L_BMENUITEM_MISC				69
#define L_BMENUITEM_THUMB_SIZE			70
#define L_BMENUITEM_SEQUENCE			71

#define L_BMENUITEM_SAVE_AS				72
#define L_BMENU_FOLDER_COMMANDS			73

#define L_BMENUITEM_FOLLOW_FILE			74
#define L_BMENUITEM_SCALED_NICELY		75

#define L_BMENUITEM_ALLOW_FULLSCREEN_ON_START		76
//#define L_REMOVE_EXTENSION				77
//#define L_APPEND_EXTENSION				78

//#define L_BMENUITEM_SLIDESHOW_FILE_LIST	79

//#define L_BUTTON_ADD_ALL				80
//#define L_BUTTON_ADD_ONE				81
//#define L_BUTTON_REMOVE_ALL				82
//#define L_BUTTON_REMOVE_ONE				83
//#define L_BUTTON_PLAY					84

#define L_BMENUITEM_CROP_SELECTION		85

#define L_BMENUITEM_WHEEL_MOUSE			86
#define L_BMENUITEM_WHEEL_MOUSE_SCROLL_FILE			87
#define L_BMENUITEM_WHEEL_MOUSE_SCROLL_IMAGE		88

//#define L_BMENUITEM_BATCH_ICON_ALL		89
//#define L_BMENUITEM_BATCH_DEICON_ALL	90


#define L_BMENUITEM_REMEMBER_PATH		91



#endif
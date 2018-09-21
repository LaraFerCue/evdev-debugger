/*-
 * Copyright (c) 2018 Roberto Fernandez Cueto <roberfern@gmail.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 */

#ifndef KEYS_H
#define KEYS_H

// Key_events
struct code_to_str KEY_EVENTS[] = {
	{ KEY_RESERVED,	"Reserved"			},
	{ KEY_ESC,	"Escape"			},
	{ KEY_1,	"Key 1"				},
	{ KEY_2,	"Key 2"				},
	{ KEY_3,	"Key 3"				},
	{ KEY_4,	"Key 4"				},
	{ KEY_5,	"Key 5"				},
	{ KEY_6,	"Key 6"				},
	{ KEY_7,	"Key 7"				},
	{ KEY_8,	"Key 8"				},
	{ KEY_9,	"Key 9"				},
	{ KEY_0,	"Key 0"				},
	{ KEY_MINUS,	"Key -"				},
	{ KEY_EQUAL,	"Key ="				},
	{ KEY_BACKSPACE,"Key backspace"			},
	{ KEY_TAB,	"Key tab"			},
	{ KEY_Q,	"Key Q"				},
	{ KEY_W,	"Key W"				},
	{ KEY_E,	"Key E"				},
	{ KEY_R,	"Key R"				},
	{ KEY_T,	"Key T"				},
	{ KEY_Y,	"Key Y"				},
	{ KEY_U,	"Key U"				},
	{ KEY_I,	"Key I"				},
	{ KEY_O,	"Key O"				},
	{ KEY_P,	"Key P"				},
	{ KEY_LEFTBRACE,"Key {"				},
	{ KEY_RIGHTBRACE,"Key }"			},
	{ KEY_ENTER,	"Key Enter"			},
	{ KEY_LEFTCTRL,	"Key Left Ctrl"			},
	{ KEY_A,	"KEY A"				},
	{ KEY_S,	"KEY S"				},
	{ KEY_D,	"KEY D"				},
	{ KEY_F,	"KEY F"				},
	{ KEY_G,	"KEY G"				},
	{ KEY_H,	"KEY H"				},
	{ KEY_J,	"KEY J"				},
	{ KEY_K,	"KEY K"				},
	{ KEY_L,	"KEY L"				},
	{ KEY_SEMICOLON,"Key ;"				},
	{ KEY_APOSTROPHE,"Key '"			},
	{ KEY_GRAVE,	"Key ~"				},
	{ KEY_LEFTSHIFT,"Key Left Shift"		},
	{ KEY_BACKSLASH,"Key \\"			},
	{ KEY_Z,	"Key Z"				},
	{ KEY_X,	"Key X"				},
	{ KEY_C,	"Key C"				},
	{ KEY_V,	"Key V"				},
	{ KEY_B,	"Key B"				},
	{ KEY_N,	"Key N"				},
	{ KEY_M,	"Key M"				},
	{ KEY_COMMA,	"Key ,"				},
	{ KEY_DOT,	"Key ."				},
	{ KEY_SLASH,	"Key /"				},
	{ KEY_RIGHTSHIFT,"Key Right Shift"		},
	{ KEY_KPASTERISK,"Key * (Keypad)"		},
	{ KEY_LEFTALT,	"Key Left Alt"			},
	{ KEY_SPACE,	"Key Space"			},
	{ KEY_CAPSLOCK,	"Key Caps Lock"			},
	{ KEY_F1,	"Key <F1>"			},
	{ KEY_F2,	"Key <F2>"			},
	{ KEY_F3,	"Key <F3>"			},
	{ KEY_F4,	"Key <F4>"			},
	{ KEY_F5,	"Key <F5>"			},
	{ KEY_F6,	"Key <F6>"			},
	{ KEY_F7,	"Key <F7>"			},
	{ KEY_F8,	"Key <F8>"			},
	{ KEY_F9,	"Key <F9>"			},
	{ KEY_F10,	"Key <F10>"			},
	{ KEY_NUMLOCK,	"Key Num Lock"			},
	{ KEY_SCROLLLOCK,"Key Scroll Lock"		},
	{ KEY_KP7,	"Key 7 (Keypad)"		},
	{ KEY_KP8,	"Key 8 (Keypad)"		},
	{ KEY_KP9,	"Key 9 (Keypad)"		},
	{ KEY_KPMINUS,	"Key - (Keypad)"		},
	{ KEY_KP4,	"Key 4 (Keypad)"		},
	{ KEY_KP5,	"Key 5 (Keypad)"		},
	{ KEY_KP6,	"Key 6 (Keypad)"		},
	{ KEY_KPPLUS,	"Key + (Keypad)"		},
	{ KEY_KP1,	"Key 1 (Keypad)"		},
	{ KEY_KP2,	"Key 2 (Keypad)"		},
	{ KEY_KP3,	"Key 3 (Keypad)"		},
	{ KEY_KP0,	"Key 0 (Keypad)"		},
	{ KEY_KPDOT,	"Key . {Keypad)"		},
	{ KEY_ZENKAKUHANKAKU,"Key Zenkakuhankaku"	},
	{ KEY_102ND,	"Key 102nd"			},
	{ KEY_F11,	"Key <F11>"			},
	{ KEY_F12,	"Key <F12>"			},
	{ KEY_RO,	"Key RO"			},
	{ KEY_KATAKANA,	"Key Katakana"			},
	{ KEY_HIRAGANA,	"Key Hiragana"			},
	{ KEY_HENKAN,	"Key Henkan"			},
	{ KEY_KATAKANAHIRAGANA,"Key Katakanahiragana"	},
	{ KEY_MUHENKAN,	"Key Muhenkan"			},
	{ KEY_KPJPCOMMA,"Key Jpcomma (Keypad)"		},
	{ KEY_KPENTER,	"Key Enter (Keypad)"		},
	{ KEY_RIGHTCTRL,"Key Right Ctrl"		},
	{ KEY_KPSLASH,	"Key / (Keypad)"		},
	{ KEY_SYSRQ,	"Key Sysrq"			},
	{ KEY_RIGHTALT,	"Key Right Alt"			},
	{ KEY_LINEFEED,	"Key LF"			},
	{ KEY_HOME,	"Key Home"			},
	{ KEY_UP,	"Key Up"			},
	{ KEY_PAGEUP,	"Key PageUp"			},
	{ KEY_LEFT,	"Key Left"			},
	{ KEY_RIGHT,	"Key Right"			},
	{ KEY_END,	"Key End"			},
	{ KEY_DOWN,	"Key Down"			},
	{ KEY_PAGEDOWN,	"Key PageDown"			},
	{ KEY_INSERT,	"Key Insert"			},
	{ KEY_DELETE,	"Key Delete"			},
	{ KEY_MACRO,	"Key Macro"			},
	{ KEY_MUTE,	"Key_Mute"			},
	{ KEY_VOLUMEDOWN,"Key Volume Down"		},
	{ KEY_VOLUMEUP,	"Key Volume Up"			},
	{ KEY_POWER,	"Key Power"			},
	{ KEY_KPEQUAL,	"Key = (Keypad)"		},
	{ KEY_KPPLUSMINUS,"Key PlusMinus (Keypad)"	},
	{ KEY_PAUSE,	"Key Pause"			},
	{ KEY_SCALE,	"key Scale"			},
	{ KEY_KPCOMMA,	"Key , (Keypad)"		},
	{ KEY_HANGEUL,	"Key Hangeul"			},
	{ KEY_HANJA,	"Key Hanja"			},
	{ KEY_YEN,	"Key Yen"			},
	{ KEY_LEFTMETA,	"Key Left Meta"			},
	{ KEY_RIGHTMETA,"Key Right Meta"		},
	{ KEY_COMPOSE,	"Key Compose"			},
	{ KEY_STOP,	"Key Stop"			},
	{ KEY_AGAIN,	"Key Again"			},
	{ KEY_PROPS,	"Key AC Properties"		},
	{ KEY_UNDO,	"Key Undo"			},
	{ KEY_FRONT,	"Key Front"			},
	{ KEY_COPY,	"Key Copy"			},
	{ KEY_OPEN,	"Key Open"			},
	{ KEY_PASTE,	"Key Paste"			},
	{ KEY_FIND,	"Key Find"			},
	{ KEY_CUT,	"Key Cut"			},
	{ KEY_HELP,	"Key Help"			},
	{ KEY_MENU,	"Key Menu"			},
	{ KEY_CALC,	"Key Calc"			},
	{ KEY_SETUP,	"Key Setup"			},
	{ KEY_SLEEP,	"Key Sleep"			},
	{ KEY_WAKEUP,	"Key WakeUp"			},
	{ KEY_FILE,	"Key File"			},
	{ KEY_SENDFILE,	"Key SendFile"			},
	{ KEY_DELETEFILE,"Key DeleteFile"		},
	{ KEY_XFER,	"Key Xfer"			},
	{ KEY_PROG1,	"Key Prog1"			},
	{ KEY_PROG2,	"Key Prog2"			},
	{ KEY_WWW,	"Key WWW"			},
	{ KEY_MSDOS,	"Key MSDOS"			},
	{ KEY_COFFEE,	"Key Lock/Screensaver"		},
	{ KEY_ROTATE_DISPLAY,"Key RotateDisplay"	},
	{ KEY_CYCLEWINDOWS,"Key CycleWindows"		},
	{ KEY_MAIL,	"Key Mail"			},
	{ KEY_BOOKMARKS,"Key Bookmarks"			},
	{ KEY_COMPUTER,	"Key Computer"			},
	{ KEY_BACK,	"Key Back"			},
	{ KEY_FORWARD,	"Key Forward"			},
	{ KEY_CLOSECD,	"Key CloseCD"			},
	{ KEY_EJECTCD,	"Key Eject CD"			},
	{ KEY_EJECTCLOSECD,"Key Eject/CloseCD"		},
	{ KEY_NEXTSONG,	"Key NextSong"			},
	{ KEY_PLAYPAUSE,"Key Play/Pause"		},
	{ KEY_PREVIOUSSONG,"Key PreviousSong"		},
	{ KEY_STOPCD,	"Key StopCD"			},
	{ KEY_RECORD,	"Key Record"			},
	{ KEY_REWIND,	"Key Rewind"			},
	{ KEY_PHONE,	"Key Phone"			},
	{ KEY_ISO,	"Key ISO"			},
	{ KEY_CONFIG,	"Key AL Consumer Ctrl Conf."	},
	{ KEY_HOMEPAGE,	"Key AC Home"			},
	{ KEY_REFRESH,	"Key AC Refresh"		},
	{ KEY_EXIT,	"Key AC Exit"			},
	{ KEY_MOVE,	"Key Move"			},
	{ KEY_EDIT,	"Key Edit"			},
	{ KEY_SCROLLUP,	"Key ScrollUp"			},
	{ KEY_SCROLLDOWN,"Key ScrollDown"		},
	{ KEY_KPLEFTPAREN,"Key Left Paren (Keypad)"	},
	{ KEY_KPRIGHTPAREN,"Key Right Paren (Keypad)"	},
	{ KEY_NEW,	"Key New"			},
	{ KEY_REDO,	"Key Redo"			},
	{ KEY_F13,	"Key <F13>"			},
	{ KEY_F14,	"Key <F14>"			},
	{ KEY_F16,	"Key <F16>"			},
	{ KEY_F17,	"Key <F17>"			},
	{ KEY_F18,	"Key <F18>"			},
	{ KEY_F19,	"Key <F19>"			},
	{ KEY_F20,	"Key <F20>"			},
	{ KEY_F21,	"Key <F21>"			},
	{ KEY_F22,	"Key <F22>"			},
	{ KEY_F23,	"Key <F23>"			},
	{ KEY_F24,	"Key <F24>"			},
	{ KEY_PLAYCD,	"Key Play CD"			},
	{ KEY_PAUSECD,	"Key Pause CD"			},
	{ KEY_PROG3,	"Key Prog3"			},
	{ KEY_PROG4,	"Key Prog4"			},
	{ KEY_DASHBOARD,"Key Dashboard"			},
	{ KEY_SUSPEND,	"Key Suspend"			},
	{ KEY_CLOSE,	"Key Close"			},
	{ KEY_PLAY,	"Key Play"			},
	{ KEY_FASTFORWARD,"Key FastForward"		},
	{ KEY_BASSBOOST,"Key BassBoost"			},
	{ KEY_PRINT,	"Key Print"			},
	{ KEY_HP,	"Key HP"			},
	{ KEY_CAMERA,	"Key Camera"			},
	{ KEY_SOUND,	"Key Sound"			},
	{ KEY_QUESTION,	"Key Question"			},
	{ KEY_EMAIL,	"Key Email"			},
	{ KEY_CHAT,	"Key Chat"			},
	{ KEY_SEARCH,	"Key Search"			},
	{ KEY_CONNECT,	"Key Connect"			},
	{ KEY_FINANCE,	"Key Finance"			},
	{ KEY_SPORT,	"Key Sport"			},
	{ KEY_SHOP,	"Key Shop"			},
	{ KEY_ALTERASE,	"Key Alterase"			},
	{ KEY_CANCEL,	"Key Cancel"			},
	{ KEY_BRIGHTNESSDOWN,"Key Brightness Down"	},
	{ KEY_BRIGHTNESSUP,"Key Brightness Up"		},
	{ KEY_MEDIA,	"Key Media"			},
	{ KEY_SWITCHVIDEOMODE,"Key Switch Video Mode"	},
	{ KEY_KBDILLUMTOGGLE,"Key KB Dillum Toggle"	},
	{ KEY_KBDILLUMDOWN,"Key KB Dillum Down"		},
	{ KEY_KBDILLUMUP,"Key KB Dillum Up"		},
	{ KEY_SEND,	"Key Send"			},
	{ KEY_REPLY,	"Key Reply"			},
	{ KEY_FORWARDMAIL,"Key Forward Mail"		},
	{ KEY_SAVE,	"Key Save"			},
	{ KEY_DOCUMENTS,"Key Documents"			},
	{ KEY_BATTERY,	"Key Battery"			},
	{ KEY_BLUETOOTH,"Key Bluetooth"			},
	{ KEY_WLAN,	"Key WLAN"			},
	{ KEY_UWB,	"Key UWB"			},
	{ KEY_UNKNOWN,	"Key Unknown"			},
	{ KEY_VIDEO_NEXT,"Key Video Next"		},
	{ KEY_VIDEO_PREV,"Key Video Prev"		},
	{ KEY_BRIGHTNESS_CYCLE,"Key Brightness Cycle"	},
	{ KEY_BRIGHTNESS_AUTO,"Key Brightness Auto"	},
	{ KEY_BRIGHTNESS_ZERO,"Key Brightness Zero"	},
	{ KEY_DISPLAY_OFF,"Key Display Off"		},
	{ KEY_WWAN,	"Key Wireless WAN"		},
	{ KEY_RFKILL,	"Key RF"			},
	{ KEY_MICMUTE,	"Key MIC Mute"			}
};

#endif

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

#ifndef BUTTONS_H
#define BUTTONS_H

struct code_to_str BUTTON_EVENTS[] = {
	{ BTN_MISC,		"Button Miscellaneous"		},
	{ BTN_0,		"Button 0"			},
	{ BTN_1,		"Button 1"			},
	{ BTN_2,		"Button 2"			},
	{ BTN_3,		"Button 3"			},
	{ BTN_4,		"Button 4"			},
	{ BTN_5,		"Button 5"			},
	{ BTN_6,		"Button 6"			},
	{ BTN_7,		"Button 7"			},
	{ BTN_8,		"Button 8"			},
	{ BTN_9,		"Button 9"			},
	{ BTN_MOUSE,		"Button Mouse"			},
	{ BTN_LEFT,		"Button Left"			},
	{ BTN_RIGHT,		"Button Right"			},
	{ BTN_MIDDLE,		"Button Middle"			},
	{ BTN_SIDE,		"Button Side"			},
	{ BTN_EXTRA,		"Button Extra"			},
	{ BTN_FORWARD,		"Button Forward"		},
	{ BTN_BACK,		"Button Back"			},
	{ BTN_TASK,		"Button Task"			},
	{ BTN_JOYSTICK,		"Button Joystick"		},
	{ BTN_TRIGGER,		"Button Trigger"		},
	{ BTN_THUMB,		"Button Thumb"			},
	{ BTN_THUMB2,		"Button Thumb 2"		},
	{ BTN_TOP,		"Button Top"			},
	{ BTN_TOP2,		"Button Top 2"			},
	{ BTN_PINKIE,		"Button Pinkie"			},
	{ BTN_BASE,		"Button Base"			},
	{ BTN_BASE2,		"Button Base 2"			},
	{ BTN_BASE3,		"Button Base 3"			},
	{ BTN_BASE4,		"Button Base 4"			},
	{ BTN_BASE5,		"Button Base 5"			},
	{ BTN_BASE6,		"Button Base 6"			},
	{ BTN_DEAD,		"Button Dead"			},
	{ BTN_GAMEPAD,		"Button Gamepad"		},
	{ BTN_SOUTH,		"Button South"			},
	{ BTN_EAST,		"Button East"			},
	{ BTN_NORTH,		"Button North"			},
	{ BTN_WEST,		"Button West"			},
	{ BTN_Z,		"Button Z"			},
	{ BTN_TL,		"Button TL"			},
	{ BTN_TR,		"Button TR"			},
	{ BTN_TL2,		"Button TL 2"			},
	{ BTN_TR2,		"Button TR 2"			},
	{ BTN_SELECT,		"Button Select"			},
	{ BTN_START,		"Button Start"			},
	{ BTN_MODE,		"Button Mode"			},
	{ BTN_THUMBL,		"Button Thumb Left"		},
	{ BTN_THUMBR,		"Button Thumb Right"		},
	{ BTN_DIGI,		"Button Digit"			},
	{ BTN_TOOL_PEN,		"Button Tool Pen"		},
	{ BTN_TOOL_RUBBER,	"Button Tool Rubber"		},
	{ BTN_TOOL_BRUSH,	"Button Tool Brush"		},
	{ BTN_TOOL_PENCIL,	"Button Tool Pencil"		},
	{ BTN_TOOL_AIRBRUSH,	"Button Tool Airbrush"		},
	{ BTN_TOOL_FINGER,	"Button Tool Finger"		},
	{ BTN_TOOL_MOUSE,	"Button Mouse"			},
	{ BTN_TOOL_LENS,	"Button Lens"			},
	{ BTN_TOOL_QUINTTAP,	"Button Tool QuintTap"		},
	{ BTN_STYLUS3,		"Button Stylus 3"		},
	{ BTN_TOUCH,		"Button Touch"			},
	{ BTN_STYLUS,		"Button Stylus"			},
	{ BTN_STYLUS2,		"Button Stylus 2"		},
	{ BTN_TOOL_DOUBLETAP,	"Button Tool DoubleTap"		},
	{ BTN_TOOL_TRIPLETAP,	"Button Tool TripleTap"		},
	{ BTN_TOOL_QUADTAP,	"Button Tool QuadTap"		},
	{ BTN_WHEEL,		"Button Wheel"			},
	{ BTN_GEAR_DOWN,	"Button Gear Down"		},
	{ BTN_GEAR_UP,		"Button Gear Up"		},
	{ BTN_DPAD_UP,		"Button DPad Up"		},
	{ BTN_DPAD_DOWN,	"Button DPad Down"		},
	{ BTN_DPAD_LEFT,	"Button DPad Left"		},
	{ BTN_DPAD_RIGHT,	"Button DPad Right"		},
	{ BTN_TRIGGER_HAPPY,	"Button Trigger Happy"		},
	{ BTN_TRIGGER_HAPPY1,	"Button Trigger Happy 1"	},
	{ BTN_TRIGGER_HAPPY2,	"Button Trigger Happy 2"	},
	{ BTN_TRIGGER_HAPPY3,	"Button Trigger Happy 3"	},
	{ BTN_TRIGGER_HAPPY4,	"Button Trigger Happy 4"	},
	{ BTN_TRIGGER_HAPPY5,	"Button Trigger Happy 5"	},
	{ BTN_TRIGGER_HAPPY6,	"Button Trigger Happy 6"	},
	{ BTN_TRIGGER_HAPPY7,	"Button Trigger Happy 7"	},
	{ BTN_TRIGGER_HAPPY8,	"Button Trigger Happy 8"	},
	{ BTN_TRIGGER_HAPPY9,	"Button Trigger Happy 9"	},
	{ BTN_TRIGGER_HAPPY10,	"Button Trigger Happy 10"	},
	{ BTN_TRIGGER_HAPPY11,	"Button Trigger Happy 11"	},
	{ BTN_TRIGGER_HAPPY12,	"Button Trigger Happy 12"	},
	{ BTN_TRIGGER_HAPPY13,	"Button Trigger Happy 13"	},
	{ BTN_TRIGGER_HAPPY14,	"Button Trigger Happy 14"	},
	{ BTN_TRIGGER_HAPPY15,	"Button Trigger Happy 15"	},
	{ BTN_TRIGGER_HAPPY16,	"Button Trigger Happy 16"	},
	{ BTN_TRIGGER_HAPPY17,	"Button Trigger Happy 17"	},
	{ BTN_TRIGGER_HAPPY18,	"Button Trigger Happy 18"	},
	{ BTN_TRIGGER_HAPPY19,	"Button Trigger Happy 19"	},
	{ BTN_TRIGGER_HAPPY20,	"Button Trigger Happy 20"	},
	{ BTN_TRIGGER_HAPPY21,	"Button Trigger Happy 21"	},
	{ BTN_TRIGGER_HAPPY22,	"Button Trigger Happy 22"	},
	{ BTN_TRIGGER_HAPPY23,	"Button Trigger Happy 23"	},
	{ BTN_TRIGGER_HAPPY24,	"Button Trigger Happy 24"	},
	{ BTN_TRIGGER_HAPPY25,	"Button Trigger Happy 25"	},
	{ BTN_TRIGGER_HAPPY26,	"Button Trigger Happy 26"	},
	{ BTN_TRIGGER_HAPPY27,	"Button Trigger Happy 27"	},
	{ BTN_TRIGGER_HAPPY28,	"Button Trigger Happy 28"	},
	{ BTN_TRIGGER_HAPPY29,	"Button Trigger Happy 29"	},
	{ BTN_TRIGGER_HAPPY30,	"Button Trigger Happy 30"	},
	{ BTN_TRIGGER_HAPPY31,	"Button Trigger Happy 31"	},
	{ BTN_TRIGGER_HAPPY32,	"Button Trigger Happy 32"	},
	{ BTN_TRIGGER_HAPPY33,	"Button Trigger Happy 33"	},
	{ BTN_TRIGGER_HAPPY34,	"Button Trigger Happy 34"	},
	{ BTN_TRIGGER_HAPPY35,	"Button Trigger Happy 35"	},
	{ BTN_TRIGGER_HAPPY36,	"Button Trigger Happy 36"	},
	{ BTN_TRIGGER_HAPPY37,	"Button Trigger Happy 37"	},
	{ BTN_TRIGGER_HAPPY38,	"Button Trigger Happy 38"	},
	{ BTN_TRIGGER_HAPPY39,	"Button Trigger Happy 39"	},
	{ BTN_TRIGGER_HAPPY40,	"Button Trigger Happy 40"	}
};
#endif

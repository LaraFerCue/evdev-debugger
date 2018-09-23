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

#ifndef AXES_H
#define AXES_H

struct code_to_str REL_AXES_EVENTS[] = {
	{ REL_X,	"Relative Axis X"	},
	{ REL_Y,	"Relative Axis Y"	},
	{ REL_Z,	"Relative Axis Z"	},
	{ REL_RX,	"Relative Axis RX"	},
	{ REL_RY,	"Relative Axis RY"	},
	{ REL_RZ,	"Relative Axis RZ"	},
	{ REL_WHEEL,	"Relative Wheel"	},
	{ REL_MISC,	"Relative Miscellaneous"}
};

struct code_to_str ABS_AXES_EVENTS[] = {
	{ ABS_X,		"Absolute Axis X"		},
	{ ABS_Y,		"Absolute Axis Y"		},
	{ ABS_Z,		"Absolute Axis Z"		},
	{ ABS_RX,		"Absolute Axis RX"		},
	{ ABS_RY,		"Absolute Axis RY"		},
	{ ABS_RZ,		"Absolute Axis RZ"		},
	{ ABS_THROTTLE,		"Absolute Throttle"		},
	{ ABS_RUDDER,		"Absolute Rudder"		},
	{ ABS_WHEEL,		"Absolute Wheel"		},
	{ ABS_GAS,		"Absolute Gas"			},
	{ ABS_BRAKE,		"Absolute Brake"		},
	{ ABS_HAT0X,		"Absolute HAT 0X"		},
	{ ABS_HAT0Y,		"Absolute HAT 0Y"		},
	{ ABS_HAT1X,		"Absolute HAT 1X"		},
	{ ABS_HAT1Y,		"Absolute HAT 1Y"		},
	{ ABS_HAT2X,		"Absolute HAT 2X"		},
	{ ABS_HAT2Y,		"Absolute HAT 2Y"		},
	{ ABS_HAT3X,		"Absolute HAT 3X"		},
	{ ABS_HAT3Y,		"Absolute HAT 3Y"		},
	{ ABS_PRESSURE,		"Absolute Pressure"		},
	{ ABS_DISTANCE,		"Absolute Distance"		},
	{ ABS_TILT_X,		"Absolute Tilt X"		},
	{ ABS_TILT_Y,		"Absolute Tilt Y"		},
	{ ABS_TOOL_WIDTH,	"Absolute Tool Width"		},
	{ ABS_VOLUME,		"Absolute Volume"		},
	{ ABS_MISC,		"Absolute Miscellaneous"	},
	{ ABS_MT_SLOT,		"Absolute MT Slot"		},
	{ ABS_MT_TOUCH_MAJOR,	"Absolute MT Touch Major"	},
	{ ABS_MT_TOUCH_MINOR,	"Absolute MT Touch Minor"	},
	{ ABS_MT_WIDTH_MAJOR,	"Absolute MT Width Major"	},
	{ ABS_MT_WIDTH_MINOR,	"Absolute MT Width Minor"	},
	{ ABS_MT_ORIENTATION,	"Absolute MT Orientation"	},
	{ ABS_MT_POSITION_X,	"Absolute MT Position X"	},
	{ ABS_MT_POSITION_Y,	"Absolute MT Position Y"	},
	{ ABS_MT_TOOL_TYPE,	"Absolute MT Tool Type"		},
	{ ABS_MT_BLOB_ID,	"Absolute MT Blob ID"		},
	{ ABS_MT_TRACKING_ID,	"Absolute MT Tracking ID"	},
	{ ABS_MT_PRESSURE,	"Absolute MT Pressure"		},
	{ ABS_MT_DISTANCE,	"Absolute MT Distance"		},
	{ ABS_MT_TOOL_X,	"Absolute MT Tool X"		},
	{ ABS_MT_TOOL_Y,	"Absolute MT Tool Y"		}
};

#endif

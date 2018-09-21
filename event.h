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

#ifndef EVENT_H
#define EVENT_H
#include <dev/evdev/input-event-codes.h>

struct code_to_str {
	uint16_t type;
	const char * descr;
};

// Type codes
struct code_to_str TYPE_STRINGS[] = {
	{ EV_SYN,	"Synchronization"	},
	{ EV_KEY,	"Key Event"		},
	{ EV_REL,	"Relative Axis"		},
	{ EV_ABS,	"Absolute Axis"		},
	{ EV_MSC,	"Miscellaneous"		},
	{ EV_SW,	"Input switch"		},
	{ EV_LED,	"LED input device"	},
	{ EV_SND,	"Sound input"		},
	{ EV_REP,	"Autoreapiting device"	},
	{ EV_FF,	"Force Feedback"	},
	{ EV_PWR,	"Power button"		},
	{ EV_FF_STATUS,	"Receive feedback"	}
};

// Synchronization events
struct code_to_str SYN_EVENTS[] = {
	{ SYN_REPORT,	"Synchronize and separate events"	},
	{ SYN_CONFIG,	"To be defined"				},
	{ SYN_MT_REPORT,"Sync. and separate multi-touch"	},
	{ SYN_DROPPED,	"Buffer overrun"			},
};

#include "keys.h"
#include "buttons.h"
#endif

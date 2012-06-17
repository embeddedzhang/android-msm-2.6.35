/* arch/arm/mach-msm/touch-fuji_hayabusa.c
 *
 * Copyright (C) 2011 Sony Ericsson Mobile Communications AB.
 *
 * Author: Yusuke Yoshimura <Yusuke.Yoshimura@sonyericsson.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2, as
 * published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 */

#include <linux/input.h>
#include <linux/clearpad.h>

struct synaptics_button synaptics_back_key = {
	.code = KEY_BACK,
};

struct synaptics_button synaptics_home_key = {
	.code = KEY_HOME,
};

struct synaptics_button synaptics_menu_key = {
	.code = KEY_MENU,
};

struct synaptics_funcarea clearpad_funcarea_array[] = {
	{
		{ 0, 0, 719, 1279 }, { 0, 0, 719, 1299 },
		SYN_FUNCAREA_POINTER, NULL
	},
	{
		{ 0, 1320, 219, 1336 }, { 0, 1300, 239, 1336 },
		SYN_FUNCAREA_BUTTON, &synaptics_back_key
	},
	{
		{ 260, 1320, 459, 1336 }, { 240, 1300, 479, 1336 },
		SYN_FUNCAREA_BUTTON, &synaptics_home_key
	},
	{
		{ 500, 1320, 719, 1336 }, { 480, 1300, 719, 1336 },
		SYN_FUNCAREA_BUTTON, &synaptics_menu_key
	},
	{ .func = SYN_FUNCAREA_END }
};

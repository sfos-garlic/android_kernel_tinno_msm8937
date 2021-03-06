/*
 * include/linux/screen_off_gestures.h
 *
 * Copyright (c) 2013-15, Aaron Segaert <asegaert@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _LINUX_SCREEN_OFF_GESTURES_H
#define _LINUX_SCREEN_OFF_GESTURES_H

#include <linux/input.h>

extern int gesture_swipe_right;
extern int gesture_swipe_right_temp;
extern bool gesture_swipe_right_changed;
extern int gesture_swipe_left;
extern int gesture_swipe_left_temp;
extern bool gesture_swipe_left_changed;
extern int gesture_swipe_down;
extern int gesture_swipe_down_temp;
extern bool gesture_swipe_down_changed;
extern int gesture_swipe_up;
extern int gesture_swipe_up_temp;
extern bool gesture_swipe_up_changed;
extern int dt2w_switch;
extern int dt2w_switch_temp;
extern bool dt2w_switch_changed;
bool scr_suspended(void);

#endif	/* _LINUX_SCREEN_OFF_GESTURES_H */


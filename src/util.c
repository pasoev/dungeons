/*
  Copyright (C) 2016 Sergi Pasoev.

  This pragram is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or (at
  your option) any later version.

  This program is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program. If not, see <http://www.gnu.org/licenses/>.

  Written by Sergi Pasoev <s.pasoev@gmail.com>

*/

#include "util.h"
#include <math.h>

/* Geometry helper functions */
float get_distance_btwn_points(int x1, int y1, int x2, int y2){
        int dx = x1 - x2;
        int dy = y1 - y2;
        return sqrtf(dx * dx + dy * dy);
}

void each_actor(struct engine *engine, TCOD_list_t lst, void (*action)(struct engine *engine, struct actor *actor))
{
        struct actor **iterator;
        for (iterator = (struct actor **)TCOD_list_begin(engine->actors);
             iterator != (struct actor **)TCOD_list_end(engine->actors);
             iterator++) 
                action(engine, *iterator);
}

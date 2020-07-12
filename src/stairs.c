/*
    Copyright (C) 2016 Sergo Pasoevi.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or (at
    your option) any later version.

    This program is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
    General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.

    Written by Sergo Pasoevi <spasoevi@gmail.com>

*/

#include "stairs.h"
#include "actor.h"

struct actor *create_stairs(int x, int y, int ch)
{
    struct actor *actor = create_actor(x, y, ch, "stairs", TCOD_red);
    if (actor) {
      actor->blocking = false;
      actor->fov_only = false;
    }
    return actor;
}

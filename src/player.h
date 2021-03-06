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

#ifndef INNFIN_PLAYER_H
#define INNFIN_PLAYER_H

#include "actor.h"

struct actor *mkplayer(int x, int y);

bool descend(struct engine *engine, struct actor *actor, struct actor *stairs);

void player_update(struct engine *engine, struct actor *actor);

double regen_hp(struct engine *engine, struct actor *actor);

bool player_move_or_attack(struct engine *engine, struct actor *actor,
                           int target_x, int target_y);

/*
 * Called when the player hit points equal to zero. It first calls the
 * common die function.
 *
 * Also calls the function that creates character memorial file and
 * deletes saved game if present.
 */
void
player_die(struct engine *engine, struct actor *actor, struct actor *killer);

void win(struct engine *engine);

#endif //INNFIN_PLAYER_H

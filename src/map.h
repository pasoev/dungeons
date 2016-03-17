#ifndef MAP_H
#define MAP_H

#include <stdbool.h>
#include "libtcod.h"
#include "engine.h"

static const int ROOM_MAX_SIZE = 12;
static const int ROOM_MIN_SIZE = 6;

struct engine;

struct Tile{
        bool explored;
};

/* 
   TODO: Isn't used at the moment. The same functionality is
   accomplished by the static variables in the function
*/
struct BSPTraverse{
	int room_num;
	int lastx;
	int lasty;
};
		

struct map{
        int w;
        int h;
        void (*render)(struct map *);
        struct Tile tiles[80 * 45];
        TCOD_bsp_t *bsp;
        TCOD_map_t map;
	struct BSPTraverse bsp_traverse;
};

/* void init_map(struct engine *engine, int w, int h); */

/* Draw the map on the screen */
void map_render(struct map *map);

void add_monster(struct engine* engine, int x, int y);
bool is_wall(struct map *map, int x, int y);

/* Check whether the point (x, y) is in the field of view on map. */
bool is_in_fov(struct map *map, int x, int y);
bool can_walk(struct engine *engine, int x, int y);
void set_wall(struct map *map, int x, int y);

#endif

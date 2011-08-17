#ifndef TYPES_H
#define TYPES_H

typedef enum {
	MODE_NORMAL,
	MODE_THUMBS
} appmode_t;

typedef enum {
	DIR_LEFT,
	DIR_RIGHT,
	DIR_UP,
	DIR_DOWN
} direction_t;

typedef enum {
	SCALE_DOWN,
	SCALE_FIT,
	SCALE_ZOOM
} scalemode_t;

typedef enum {
	CURSOR_ARROW,
	CURSOR_NONE,
	CURSOR_HAND,
	CURSOR_WATCH
} cursor_t;

typedef struct {
	const char *name;
	const char *path;
} fileinfo_t;

#endif /* TYPES_H */
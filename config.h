/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

// cores do pywal
#define PYWAL 0

#if PYWAL
#include "/home/pablo951_br/.cache/wal/colors-wal-dmenu.h"
#else
// static const char *colors[SchemeLast][2] = {
//	/*     fg         bg       */
//	[SchemeNorm] = { "#c4c5c6", "#15181c" },
//	[SchemeSel] = { "#c4c5c6", "#1a3773" },
//	[SchemeOut] = { "#c4c5c6", "#8179a9" },
//};

// static const char *colors[SchemeLast][2] = {
//     /*     fg         bg       */
//     [SchemeNorm] = {"#f7f7fb", "#282936"},
//     [SchemeSel] = {"#282936", "#66d9ef"},
//     [SchemeOut] = {"#f7f7fb", "#a1efe4"},
// };
//


// Nord theme
// static const char *colors[SchemeLast][2] = {
// 	/*     fg         bg       */
// 	[SchemeNorm] = { "#e5e9f0", "#2E3440" },
// 	[SchemeSel] = { "#2E3440", "#88C0D0" },
// 	[SchemeOut] = { "#e5e9f0", "#D08770" },
// };

// Dracula theme
// static const char *colors[SchemeLast][2] = {
//     /*     fg         bg       */
//     [SchemeNorm] = {"#F8F8F2", "#282A36"},
//     [SchemeSel] = {"#282A36", "#50FA7B"},
//     [SchemeOut] = {"#F8F8F2", "#a1efe4"},
// };

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#FFFFFF", "#1e1f26" },
	[SchemeSel] = { "#bd93f9", "#1e1f26" },
	[SchemeOut] = { "#1e1f26", "#bd93f9" },
};

#endif

// Fuzzy match patch
static int fuzzy = 1;

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
// static const char *fonts[] = {
//	"monospace:size=10"
//};
static const char *fonts[] = {
    //"terminus:size=12"
    //"envypn:size=9"
    //"GohuFont:size=12"
    "Iosevka:size=9:antialias=false:autohint=false"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 0;

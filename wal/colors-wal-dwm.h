static const char norm_fg[] = "#c7c7c4";
static const char norm_bg[] = "#0A0607";
static const char norm_border[] = "#8b8b89";

static const char sel_fg[] = "#c7c7c4";
static const char sel_bg[] = "#9F8F69";
static const char sel_border[] = "#c7c7c4";

static const char urg_fg[] = "#c7c7c4";
static const char urg_bg[] = "#499E4E";
static const char urg_border[] = "#499E4E";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};

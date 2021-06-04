const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#090302", /* black   */
  [1] = "#5C3E4B", /* red     */
  [2] = "#8F5008", /* green   */
  [3] = "#9F610D", /* yellow  */
  [4] = "#AF670D", /* blue    */
  [5] = "#AD6E08", /* magenta */
  [6] = "#D2991B", /* cyan    */
  [7] = "#e1c890", /* white   */

  /* 8 bright colors */
  [8]  = "#9d8c64",  /* black   */
  [9]  = "#5C3E4B",  /* red     */
  [10] = "#8F5008", /* green   */
  [11] = "#9F610D", /* yellow  */
  [12] = "#AF670D", /* blue    */
  [13] = "#AD6E08", /* magenta */
  [14] = "#D2991B", /* cyan    */
  [15] = "#e1c890", /* white   */

  /* special colors */
  [256] = "#090302", /* background */
  [257] = "#e1c890", /* foreground */
  [258] = "#e1c890",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;

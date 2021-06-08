const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0A0607", /* black   */
  [1] = "#499E4E", /* red     */
  [2] = "#9F8F69", /* green   */
  [3] = "#D79E4B", /* yellow  */
  [4] = "#346A9F", /* blue    */
  [5] = "#CE6590", /* magenta */
  [6] = "#519EB7", /* cyan    */
  [7] = "#c7c7c4", /* white   */

  /* 8 bright colors */
  [8]  = "#8b8b89",  /* black   */
  [9]  = "#499E4E",  /* red     */
  [10] = "#9F8F69", /* green   */
  [11] = "#D79E4B", /* yellow  */
  [12] = "#346A9F", /* blue    */
  [13] = "#CE6590", /* magenta */
  [14] = "#519EB7", /* cyan    */
  [15] = "#c7c7c4", /* white   */

  /* special colors */
  [256] = "#0A0607", /* background */
  [257] = "#c7c7c4", /* foreground */
  [258] = "#c7c7c4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;

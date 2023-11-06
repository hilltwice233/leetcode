#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define cli_color_prefix_start "\033["
#define cli_color_prefix_end "m"
#define cli_color_suffix "\033[0m"

char *color(char *code, char *raw) {
  static int extra_length = strlen(cli_color_prefix_start) +
                            strlen(cli_color_prefix_end) +
                            strlen(cli_color_suffix);

  char *builder = malloc(extra_length + strlen(code) + strlen(raw) + 1);
  strcpy(builder, cli_color_prefix_start);
  strcat(builder, code);
  strcat(builder, cli_color_prefix_end);
  strcat(builder, raw);
  strcat(builder, cli_color_suffix);
  return builder;
}

char *dim(char *raw) { return color("90", raw); }
char *red(char *raw) { return color("91", raw); }
char *yellow(char *raw) { return color("93", raw); }
char *green(char *raw) { return color("92", raw); }
char *cyan(char *raw) { return color("96", raw); }
char *blue(char *raw) { return color("94", raw); }
char *magenta(char *raw) { return color("95", raw); }

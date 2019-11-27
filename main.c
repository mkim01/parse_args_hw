#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char **parse_args(char* line) {
  char **arg = malloc(6 * sizeof(char*));
  char *curr = line;
  int i = 0;
  while (curr != NULL) {
    arg[i++] = strsep(&curr, " ");
  }
  arg[i] = NULL;
  return arg;
}

int main() {
  char line[50] = "ls -a -l";
  char *p = line;
  char **args = parse_args(p);
  execvp(args[0], args);
  return 0;
}

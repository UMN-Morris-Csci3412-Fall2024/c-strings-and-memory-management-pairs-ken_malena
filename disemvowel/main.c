#include <stdio.h>
#include <stdlib.h>
#include "disemvowel.h"

int main(int argc, char *argv[]) {
  char *line = NULL;
  size_t size = 0;

  while (getline(&line, &size, stdin) > 0) {
    char *result = disemvowel(line);
    if (result != NULL) {
      printf("%s\n", result);
      free(result); // Free the memory allocated by disemvowel
    }
  }

  free(line); // Free the memory allocated by getline
  return 0;
}

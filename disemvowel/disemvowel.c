#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include "disemvowel.h"

// Helper function to check if a character is a vowel
bool is_vowel(char c) {
  char lower_c = tolower(c); // Convert to lowercase
  return lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u';
}

char *disemvowel(char *str) {
  int len = strlen(str);
  int count = 0;

  // Count the number of non-vowel characters
  for (int i = 0; i < len; i++) {
    if (!is_vowel(str[i])) {
      count++;
    }
  }

  // Allocate memory for the new string
  char *result = (char *)malloc((count + 1) * sizeof(char));
  if (result == NULL) {
    return NULL; // If allocation failed
  }

  // Copy non-vowel characters to the new string
  int j = 0;
  for (int i = 0; i < len; i++) {
    if (!is_vowel(str[i])) {
      result[j++] = str[i];
    }
  }

  // Add null terminator
  result[j] = '\0';

  return result;
}

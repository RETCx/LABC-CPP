#include <stdio.h>
#include <string.h>
#include <ctype.h>

void roman_to_arabic(char *str) {
  int i, len = strlen(str);
  for (i = 0; i < len; i++) {
    switch (toupper(str[i])) {
      case 'I':
        if (toupper(str[i+1]) == 'V') {
          str[i] = '4';
          str[i+1] = '\0';
        } else if (toupper(str[i+1]) == 'X') {
          str[i] = '9';
          str[i+1] = '\0';
        } else {
          str[i] = '1';
        }
        break;
      case 'V':
        str[i] = '5';
        break;
      case 'X':
        str[i] = '1';
        str[i+1] = '0';
        break;
      default:
        break;
    }
  }
}

int main(void) {
  char str[] = "I have III eggs on the table.";
  roman_to_arabic(str);
  printf("%s\n", str);

  char str2[] = "II + III = V";
  roman_to_arabic(str2);
  printf("%s\n", str2);

  return 0;
}
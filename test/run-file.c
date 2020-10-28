#include <stdio.h>
#include <string.h>

char input[201];

int main(void) {
  scanf("%s", input);
  if (!strcmp(input, "basic")) {
    printf("hello, world\n");
  } else if (!strcmp(input, "to-console")) {
    printf("this is what you see\n");
  } else if (!strcmp(input, "to-console-2")) {
    printf("this you should see\n");
  } else if (!strcmp(input, "WA")) {
    printf("I am stupid, this is wrong.\n");
  } else if (!strcmp(input, "no-compare")) {
    printf("I am in a file!\n");
  } else if (!strcmp(input, "TLE-file")) {
    printf("Long time no see.\n");
    while(1) continue;
  } else if (!strcmp(input, "TLE-console")) {
    printf("First some output in console.\n");
    printf("Then another one.\n");
    while(1) continue;
  } else if (!strcmp(input, "ignore-blanks")) {
    printf("correct\n");
  }
  return 0;
}

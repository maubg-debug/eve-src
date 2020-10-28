#include <stdio.h>
#include <string.h>

char input[201];

int main(void) {
  scanf("%s", input);
  if (!strcmp(input, "basic")) {
    printf("Hola, mundo\n");
  } else if (!strcmp(input, "to-console")) {
    printf("esto es lo que ves\n");
  } else if (!strcmp(input, "to-console-2")) {
    printf("esto deberías ver\n");
  } else if (!strcmp(input, "WA")) {
    printf("Soy estupido esto esta mal.\n");
  } else if (!strcmp(input, "no-compare")) {
    printf("¡Estoy en un archivo!\n");
  } else if (!strcmp(input, "TLE-file")) {
    printf("No hay tiempo para ver.\n");
    while(1) continue;
  } else if (!strcmp(input, "TLE-console")) {
    printf("Primero algo de salida en la consola.\n");
    printf("Luego otra.\n");
    while(1) continue;
  } else if (!strcmp(input, "ignore-blanks")) {
    printf("Correcto\n");
  }
  return 0;
}

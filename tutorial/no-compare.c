/*
Modifique este archivo y ejecute eve. Mira lo que pasó.

Si el primer carácter del archivo .out es '!' entonces eve no comparará sus resultados.
Su salida se guardará en el archivo .user.out. Esto es útil cuando quieres
depure su programa y tendrá una gran salida.

Intente eliminar '!' de los archivos .out y ver qué pasa.

Continúe con to-console.c
*/

#include <stdio.h>

char s1[201], s2[201];

int main(void) {
  scanf("%s%s", s1, s2);
  printf("%s+%s\n", s1, s2);
  return 0;
}

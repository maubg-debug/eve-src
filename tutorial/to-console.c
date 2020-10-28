/*
Modifique este archivo y ejecute eve. Mira lo que pasó.

Si el primer carácter en el archivo .out es '$', eve no comparará sus resultados.
Su salida se le presentará a través de la terminal. Esto es útil cuando
desea depurar su programa.

Intente eliminar '$' de los archivos .out y vea qué sucede.

Continúe con tle.c
*/

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%d\n", a&b);
  return 0;
}

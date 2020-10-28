/*
Modifique este archivo y ejecute ev. Mira lo que pasó.

TLE significa "límite de tiempo excedido". ev informará el estado tle si su programa
está funcionando más de 1 segundo. El tiempo que le toma a su programa ingresar datos es
ignorado.

Elimine el ciclo while en el código y vea qué pasa.

Continuar con colors.txt
*/

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%d\n", a + b);
  while(1) continue;
  return 0;
}

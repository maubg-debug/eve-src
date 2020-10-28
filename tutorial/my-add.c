/*
Modifique este archivo y guárdelo. Puede eliminar la siguiente línea para hacer eso.
------------- BORRAR ESTA LÍNEA -------------

Ejecute ev y vea qué pasó. Tienes esta salida:
 - my-add.c -
* prueba / my-add / my-add.1.in:
ACEPTADO

* prueba / my-add / my-add.2.in:
ACEPTADO

Primero echemos un vistazo a lo que tenemos en los archivos my-add.1.in y my-add.1.out
my-add.1.in:
2 2

my-add.1.out:
4

Como puede ver en nuestro código C a continuación, podemos decir que nuestra tarea fue agregar
dos números que obtuvimos del usuario. ¿Y qué son estos archivos .in y .out?
Bueno, esas son nuestras pruebas. Podemos decir que esas son nuestras REGLAS. Y la regla para
prueba 1 significa:
Si obtiene 2 y 2 como entrada, debe generar 4. Si obtiene 4, su respuesta
será aceptado.

Veamos nuestra segunda regla, es decir, los archivos my-add.2.in y my-add.2.out.
Si obtiene 10 y 40 como entrada, debería generar 50. Si genera 50 su
Se aceptará la respuesta.

Intente modificar nuestro código. Por ejemplo, calcule a * b en lugar de a + b y vea
lo que pasa.

Continúe con el archivo missing-data.c
*/

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%d\n", a + b);
  return 0;
}

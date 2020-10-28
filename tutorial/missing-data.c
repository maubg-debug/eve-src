/*
Ejecute ev y vea qué pasa.
Obtendrá el siguiente resultado:
 - datos-faltantes.c -
* prueba / datos perdidos / datos perdidos.1.in:
ACEPTADO

* prueba / datos perdidos / datos perdidos.2.in:
25

Nuestra tarea consistía en generar la longitud de una cadena determinada. Consulte nuestra entrada / salida
datos para esta tarea.

Como puede ver, nuestro missing-data.2.out está vacío. ¿Qué significa esto? Entonces, primero yo
le explicará lo que sucede con la regla número 1, es decir, datos perdidos.1.en y
datos-faltantes.1.out. Su programa missing-data.c fue compilado y ejecutado y su
El programa obtuvo datos del archivo missing-data.1.in. ev es lo suficientemente inteligente como para saber que
hay algo en missing-data.1.out, por lo que sabe cuál es la correcta
responder. Por eso ev sabe que su respuesta es "ACEPTABLE". Porque sabe
qué respuesta debería dar y cuál es la respuesta que dio. Entonces
compara su respuesta con la "correcta" y ve que coinciden.

Pero, ¿qué pasa con la regla número 2? Bueno, la respuesta a esa pregunta es simple. ev hace
no sé con eso para comparar sus resultados, por lo que solo muestra los resultados a
la pantalla.

Intente llenar los datos faltantes.2.out con algo y vea qué pasa.

Proceda con no-input.c
*/

#include <stdio.h>
#include <string.h>

char s[201];

int main(void) {
  scanf("%s", s);
  printf("%d\n", (int) strlen(s));
  return 0;
}

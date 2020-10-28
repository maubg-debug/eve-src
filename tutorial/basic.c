/*
Déjame mostrarte cómo funciona la búsqueda de hora de última modificación.

Siga estas instrucciones:
1. Eliminar la siguiente línea
------------- BORRAR ESTA LÍNEA -------------
2. Guardar archivo
3. Ejecute eve desde su terminal

La salida de eve que debería obtener se ve así:
 - básico.c -
* test creada/basic/
* creado test/basic/basic.1.in
* creado test/basic/basic.1.out
* creado test/basic/basic.2.in
* creado test/basic/basic.2.out

¿Que pasó aquí? Bueno, eve sabe cuál es el último archivo modificado en su
directorio de trabajo (busca archivos .c, .cpp, .py o .rb). Cuando encuentra uno
busca el directorio test / <nombre de su programa> /. En este caso eso sería
directorio test / basic /. Si no existe, eve lo creará por ti.

Después de todo ese directorio que describí, eve busca en el directorio
test / basic / e intenta encontrar algunos datos de prueba. ¿Qué es testdata? Hay dos
tipos de datos que conoce eve:

Datos de entrada: estos son los datos que obtendrá su programa cuando se inicie.
Cada archivo de datos de entrada tiene la extensión .in
Y cada dato de entrada tiene su nombre <nombre de su programa>. <identificador> .in
Aquí <nombre de su programa> es "básico". Y los identificadores son números.

Datos de salida: estos son los datos que debe generar su programa.
Cada archivo de datos de salida tiene la extensión .out
Y cada dato de salida tiene su nombre <nombre de su programa>. <identificador> .out
Aquí <nombre de su programa> es "básico". Y los identificadores son números.

Entonces, para basic.1.in como entrada, su programa debería generar basic.2.out. Para explicar
te esto te he preparado otro ejemplo. Consulte el archivo my-add.c.

Oh, antes de ir allí (en el archivo my-add.c). Puedes intentar ejecutar eve de nuevo y ver
lo que sucederá. Te lo explicaré más tarde. Si quieres probarlo, asegúrate de que
este es el último archivo modificado en este directorio. La salida de ev será:
 - básico.c -
* test/basic/básico.1.in:
eve: archivo vacío y omitido

* test/basic/basic.2.in:
eve: archivo vacío y omitido

*/

#include <stdio.h>

int main(void) {
  printf("Hola, mundo\n");
  return 0;
}

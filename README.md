ev
==

Herramienta inteligente para pruebas de tareas en programación competitiva.

Idiomas admitidos
-------------------

* C
* C ++
* Java
* Python
* Rubí

Tutorial: ¿cómo se usa?
-------------------------
_ev_ es un script inteligente que puede hacer mucho por usted. Para darte una idea de cómo funciona te preparé un breve tutorial. Realmente te recomiendo que sigas este tutorial.

### Obtén el tutorial

1. Necesita instalar _ev_. Siga las [instrucciones de instalación](https://github.com/maubg-debug/ev#c%C3%B3mo-instalar-y-obtener-actualizaciones).
2. En la carpeta del proyecto _ev_, abra la carpeta `tutorial`.
3. Abra el archivo `start.txt` y siga las instrucciones.

Cómo instalar y obtener actualizaciones
------------------------------

La idea básica de la instalación es poder ejecutar _ev_ en cada directorio desde su terminal.
Así que básicamente necesitas copiar o enlazar el script ev `en algún directorio que esté en tu variable ambiental `$PATH`, por ejemplo/usr/local/bin/`.

### Instalar en pc

Elija cualquier directorio en el que guardará este proyecto. En ese directorio ejecute estos comandos:
```
$ git clone https://github.com/maubg-debug/ev.git
$ cd ev
$ sudo chmod +x ev
$ sudo ln -s $(pwd)/ev /usr/local/bin/ev
```
### Obtener actualizaciones

En el directorio del proyecto _ev_ ejecute este comando:
```
$ git pull origin master
```

### Como correr
----------
Siempre corres _ev_ de la misma manera.
```
$ ev
```
Y esa es la belleza de eso. Disfruta :)

Probando _ev_ en su máquina
----------------------------
Si desea estar 100% seguro de que _ev_ funciona en su máquina, puede ejecutar pruebas para ello. Siga estas instrucciones para probar _ev_:

1. Necesita instalar _ev_. Siga las [instrucciones de instalación](https://github.com/hermanzdosilovic/ev#how-to-install-and-get-updates).
2. En su proyecto _ev_ abra la carpeta `test` en la terminal.
3. Inicie el script `start.sh`:

$ sudo chmod +x start.sh
$ ./start.sh

Si se aprobaron todas las pruebas, debería ver el siguiente resultado:

- ejecutar-archivo -
APROBADO
- wa-leave -
APROBADO
- espacio en el nombre py o rb -
APROBADO
- espacio en c nombre -
APROBADO
- JavaTest -
APROBADO

Si algunas de las pruebas fallaron, comuníquese conmigo para que podamos mejorar _ev_. :)


Contribuyendo
------------
1. Bifurcarlo
2. Cree su rama de características (`git checkout -b my-new-feature`)
3. Confirme sus cambios (`git commit -am 'Add some feature'`)
4. Empuje a la rama (`git push origin my-new-feature`)
5. Cree una nueva solicitud de extracción

Licencia
-------
This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

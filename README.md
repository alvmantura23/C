# Proceso de ejecución de un programa en C
## 1. Utilizar un editor de texto para escribir el programa y grabarlo en un archivo.
### Al grabar el archivo, este constituye el código fuente del programa.

## 2. Compilar el codigo fuente
### Se traduce el código fuente en un código objeto, lenguaje entendible por la computadora.
### Un archivo objeto contiene instrucciones en lenguaje máquina que se pueden ejecutar por una computadora.
### Los archivos estandar en C y los archivos de cabecera (#include) son incluidos en su codigo fuente por el preprocesador.
### Los archivos de cabecera contienen información necesaria para la compilación.
### Por ejemplo la directiva stdio.h contiene informacion de las funciones scanf() y printf()

## 3. Enlazar el codigo objeto con las bibliotecas correspondientes
### Las bibliotecas en C contienen informacion del codigo objeto de cada una de las funciones que se utilizan. 
### Como por ejemplo visualizar información en la pantalla o calcular la potencia de un número.
### El enlace del código objeto del programa con el objeto de las funciones producira un codigo ejecutable.

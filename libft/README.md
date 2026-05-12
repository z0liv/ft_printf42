*Este proyecto ha sido creado como parte del currículo de 42 por omarquez*

# LIBFT

## ¿Que es LIBFT?
LIBFT es el primer proyecto en el trayecto como estudiante en 42, se ha realizado implementaciones propias de fuciones de C para comprender su funcionamiento y poder utilizar esta librería en futuros proyectos del Cursus.

## ¿En que consiste?
Consta de 3 partes: 
1. *Funciones de libc:* Algunas de las funciones estándar de C.
2. *Funciones adicionales:* Funciones que serán útiles para futuros proyectos.
3. *Funciones para Listas enlazadas:* Creacion de la estructura de las listas y funciones para el manejo de las mismas.

## ¿Que es un Makefile y como hacerlo?
Un *Makefile* es un archivo de texto especial utilizado para automatizar tareas, principalmente la compilación y construcción de software. Funcinona junto con la herramienta ```make```,  leyendo reglas que definen las dependencias entre archivos, lo que permite al sistema actualizar solo los archivos modificados, ahorrando tiempo.

### Funciones implementadas:
| Funciones de libc | Funciones adicionales | Funciones de listas |
|:-----------------:|:---------------------:|:-------------------:|
| ft_isalpha        | ft_substr             | ft_lstnew			  |
| ft_isdigit		| ft_strjoin			| ft_lstadd_front	  |
| ft_isalnum		| ft_strtrim			| ft_lstsize		  |
| ft_isascii		| ft_split				| ft_lstlast		  |
| ft_isprint		| ft_itoa				| ft_lstadd_back	  |
| ft_tolower		| ft_strmapi			| ft_lstdelone		  |
| ft_toupper		| ft_putchar_fd			| ft_lstclear		  |
| ft_strlen			| ft_putstr_fd			| ft_lsttiter		  |
| ft_strlcpy		| ft_putendl_fd			| ft_lstmap			  |
| ft_strlcat		| ft_putnbr_fd			|
| ft_strchr			| ft_striteri			|
| ft_strrchr		|
| ft_strncmp		|
| ft_strnstr		|
| ft_strdup			|
| ft_calloc			|
| ft_memset			|
| ft_memcpy			|
| ft_memmove		|
| ft_atoi			|

#### ft_isalpha:
Es una función para verificar si el carácter recibido es parte del alfabeto.
#### ft_isdigit:
Es una función para verificar si el carácter recibido es un dígito.
#### ft_isalnum:
Es una función para verificar si el carácter recibido es alfanumerico.
#### ft_isascii:
Es una función para verificar si el carácter recibido es un carácter ASCII.
#### ft_isprint:
Es una función para verificar si el carácter recibido esta en el rango de los caracteres imprimibles.
#### ft_tolower:
Es una función para transformar el carácter recibido a minúscula.
#### ft_toupper:
Es una función para transformar el carácter recibido a mayúscula.
#### ft_strlen:
Calcula la longitud de una cadena.
#### ft_strlcpy:
Copia una cadena de origen a un destino asegurando siempre dos cosas: No se pasa del tamaño del búfer de destino y garantiza el carácter nulo final (\0), siempre que el tamaño del destino sea mayor a 0.
#### ft_strlcat:
Añade la cadena de origen al final de la cadena de destino, asegurándose de que el resultado final esté terminado en un carácter nulo (\0) y que no exceda el tamaño máximo del búfer especificado.
#### ft_strchr:
Se utiliza para buscar la primera aparición de un carácter específico dentro de una cadena de texto. Si encuentra el carácter devuelve un puntero a la posición exacta de esa primera aparición dentro de la cadena y si no encuentra el carácter devuelve NULL.
#### ft_strrchr:
Se utiliza para buscar la última aparición de un carácter específico dentro de una cadena de texto. Si encuentra el carácter devuelve un puntero a la posición exacta de esa última aparición dentro de la cadena y si no encuentra el carácter devuelve NULL.
#### ft_strncmp:
Se utiliza para comparar dos cadenas de texto carácter por carácter, pero con un límite máximo de caracteres.
#### ft_strnstr:
Se utiliza para localizar una subcadena dentro de otra cadena, pero limitando la búsqueda a un número específico de caracteres.
#### ft_strdup:
Se utiliza para duplicar una cadena existente reservando memoria automáticamente.
#### ft_calloc:
Se utiliza calloc para reservar espacio en memoria para un arreglo de elementos y realiza dos acciones principales: calcula el tamaño total multiplicando el número de elementos por el tamaño de cada uno. Inicializa a cero limpiando toda la memoria reservada, estableciendo cada bit en 0.
#### ft_memset:
Escribe el mismo carácter en cada una de las posiciones de un bloque de memoria durante un número determinado de bytes.
#### ft_memcpy:
Se utiliza para copiar un bloque de memoria de un lugar a otro, sin importar el tipo de datos que contenga.
#### ft_memmove:
Copia un bloque de memoria de un origen a un destino, con la característica crucial de que es segura incluso si ambas áreas de memoria se solapan.
#### ft_atoi:
Se utiliza para convertir una cadena de caracteres que representa un número en un valor de tipo entero.
#### ft_substr:
Reserva memoria y devuelve una subcadena de caracteres de la cadena ‘s’. La subcadena comienza en el índice ‘start ’ y tiene una longitud máxima ‘len ’.
#### ft_strjoin:
Reserva memoria y devuelve una nueva cadena de caracteres, formada por la concatenación de ‘s1’ y ‘s2’.
#### ft_strtrim:
Reserva memoria y devuelve una copia de ‘s1’ con los caracteres de ‘set ’ eliminados al principio y al final.
#### ft_split:
Reserva memoria y devuelve un arreglo de cadenas obtenido al dividir la cadena ‘s’ en subcadenas utilizando el carácter ‘c’ como delimitador. Cada cadena del arreglo devuelto se reserva de manera independiente. El arreglo de punteros también se reserva dinámicamente. El arreglo devuelto debe terminar con un puntero a NULL.
#### ft_itoa:
Reserva memoria y devuelve una cadena que represente el valor del número entero recibido como argumento. Debe ser capaz de manejar números negativos
#### ft_strmapi:
Aplica la función ‘f’ a cada carácter de la cadena ‘s’, pasando su índice como primer argumento y el propio carácter como segundo argumento. Se crea una nueva cadena para almacenar los resultados de las sucesivas aplicaciones de ‘f’.
#### ft_striteri:
Aplica la función ‘f’ a cada carácter de la string ‘s’, pasando como parámetros el índice de cada carácter dentro de ‘s’ y la dirección del propio carácter, que puede modificarse si es necesario.
#### ft_putchar_fd:
Envía el carácter ‘c’ al descriptor de archivo especificado.
#### ft_putstr_fd:
Envía la cadena ‘s’ al descriptor de archivo especificado.
#### ft_putendl_fd:
Envía la cadena ‘s’ al descriptor de archivo dado, seguido de un salto de línea.
#### ft_putnbr_fd:
Escribe el número entero ‘n’ en el descriptor de archivo dado.
#### ft_lstnew:
Reserva memoria y devuelve un nuevo nodo. La variable ‘content’ se inicializa con el contenido del parámetro ‘content’. Mientras que la variable ‘next’ se inicializa con NULL.
#### ft_lstadd_front:
Añade el nodo ‘new’ al principio de la lista ‘lst’.
#### ft_lstsize:
Cuenta el número de nodos de una lista.
#### ft_lstlast:
Devuelve el último nodo de la lista.
#### ft_lstadd_back:
Añade el nodo ‘new’ al fina de la lista ‘lst’.
#### ft_lstdelone:
Recibe como parámetro un nodo ‘lst’ y libera la memoria del contenido utilizando la función ‘del’ dada como parámetro. También libera el nodo en sí mismo, pero no libera el siguiente nodo.
#### ft_lstclear:
Elimina y libera el nodo ‘lst’ dado y todos los consecutivos del mismo, utilizando la función ‘del’ y free. Al final, el puntero a la lista debe ser NULL.
#### ft_lstiter:
Itera la lista ‘lst’ y aplica la función ‘f’ en el contenido de cada nodo.
#### ft_lstmap:
Itera la lista ‘lst’ y aplica la función ‘f’ al contenido de cada nodo. Crea una lista resultante de aplicar sucesivamente la función ‘f’ a cada nodo. La función ‘del’ se utiliza para eliminar el contenido de un nodo si es necesario.

## Instruciones
Primero deberas clonar este repositorio, usando el siguiente comando en tu terminal:
```bash
git clone git@vogsphere.42urduliz.com:vogsphere/intra-uuid-45ef1abf-9711-4cdf-9475-8c6fe45ca055-7378120-omarquez libft
cd libft
```
Luego de clonar este repositorio asignandole libft como nombre, te dirijes a la carpeta con ```cd``` y ejecutas el comando ```make``` para compilar la libreria y crear el archivo libft.a.
Ahora podras utilizar esta libreria incluyendola en tus propios archivos .c de esta manera:

```c
#include "libft.h"
```

Cuando ya estes listo para compilar tu archivo .c lo puedes hacer de la siguiente manera:
```bash
// cc o tu compilador de preferencia:
cc main.c libft.a -I. -o programa
```
## Recursos
* [elcodigoascii]https://elcodigoascii.com.ar/
* [online_c_compiler]https://www.onlinegdb.com/online_c_compiler
* [pythontutor]https://pythontutor.com/visualize.html#mode=edit
* [tutorialspoint]https://www.tutorialspoint.com/article/implement-your-own-itoa-in-c
* [medium]https://jraleman.medium.com/implementation-of-the-c-function-strtrim-1a1ea0c60b38
* [stackoverflow]https://stackoverflow.com/questions/7109964/creating-your-own-header-file-in-c
* [stackoverflow]https://stackoverflow.com/questions/4260109/differences-between-memchr-and-strchr
* [medium]https://medium.com/@BaldrTheKing/how-to-build-your-own-strlcat-function-928676489144
* [stackoverflow]https://stackoverflow.com/questions/18851835/create-my-own-memset-function-in-c
* [geeksforgeeks]https://www.geeksforgeeks.org/cpp/write-memcpy/
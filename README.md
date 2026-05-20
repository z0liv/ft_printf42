*Este proyecto ha sido creado como parte del currículo de 42 por omarquez*

# FT_PRINTF

## DESCRIPCIÓN:

Una implementación propia de la función `printf` de la biblioteca estándar de C (`<stdio.h>`). Este proyecto profundiza en el uso de **funciones variádicas** (macros de `<stdarg.h>`) y en la gestión eficiente del formateo de datos a bajo nivel.

La función replica el comportamiento del `printf` original, devolviendo el número total de caracteres impresos (o un valor negativo en caso de error) y manejando correctamente las siguientes conversiones:

| Convertidor | Descripción |
| :--- | :--- |
| **`%c`** | Imprime un único carácter. |
| **`%s`** | Imprime una cadena de caracteres (string). |
| **`%p`** | Imprime un puntero en formato hexadecimal (dirección de memoria). |
| **`%d`** | Imprime un número decimal con signo (base 10). |
| **`%i`** | Imprime un entero con signo (base 10). |
| **`%u`** | Imprime un número decimal sin signo (base 10). |
| **`%x`** | Imprime un número hexadecimal sin signo en minúsculas (base 16). |
| **`%X`** | Imprime un número hexadecimal sin signo en mayúsculas (base 16). |
| **`%%`** | Imprime el símbolo del porcentaje de forma literal. |

## INSTRUCCIONES:

El proyecto incluye un `Makefile` para compilar la biblioteca de forma automatizada.

### 1. Compilación
Primero deberas clonar este repositorio, usando el siguiente comando en tu terminal:
```bash
git clone git@vogsphere.42urduliz.com:vogsphere/intra-uuid-a0d6d0bd-d3f8-49df-9768-2e6138903745-7411909-omarquez ft_printf
cd ft_printf
```

Para generar el archivo de la biblioteca estática (`libftprintf.a`), ejecuta en la terminal:
```bash
make
```
### 2. Integración en tu proyecto
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hola %s! El número es %d y en hex es %x.\n", "Mundo", 42, 42);
    return (0);
}
```

### 3. Compilar tu código con la biblioteca
```bash
cc main.c -L. -lftprintf -o mi_programa
```
## RECURSOS:
- Mis compañeros del cursus me han ayudado mucho a entender el funcionamiento requerido para el proyecto.
- [tutorialspoint]https://www.tutorialspoint.com/c_standard_library/stdarg_h.htm La use para un primer contacto con los argumentos variables.
- [stackoverflow]https://stackoverflow.com/questions/40484293/stdarg-and-printf-in-c Me sirvió como apoyo para complementar el conocimiento sobre los argumentos variables.
- [geeksforgeeks]https://www.geeksforgeeks.org/c/variadic-functions-in-c/ Ejemplo visual y práctico de como funcionan los argumentos variables.
#### Uso de la IA:
He utilizado la IA para la realización de este archivo README.

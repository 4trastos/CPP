# btc - Programa para calcular el valor de Bitcoin en una fecha específica

Este programa calcula el valor de una cierta cantidad de Bitcoin en una fecha específica.

## Descripción

El programa utiliza una base de datos en formato CSV que representa el precio de Bitcoin a lo largo del tiempo. Esta base de datos es proporcionada como parte del ejercicio. El programa tomará como entrada un segundo archivo que almacena diferentes precios y fechas para evaluar.

## Reglas del programa

- El nombre del programa es `btc`.
- El programa debe tomar un archivo como argumento.
- Cada línea de este archivo debe tener el siguiente formato: `date | value`.
- Una fecha válida siempre estará en el siguiente formato: `Año-Mes-Día`.
- Un valor válido debe ser un número flotante o un entero positivo, entre 0 y 1000.
- Debes usar al menos un contenedor en tu código para validar este ejercicio.
- El programa debe manejar posibles errores con un mensaje de error adecuado.

## Formato de archivo de entrada

Aquí tienes un ejemplo de un archivo de entrada (`input.txt`):
```
$> head input.txt
date | value
2011-01-03 | 3
2011-01-03 | 2
2011-01-03 | 1
2011-01-03 | 1.2
2011-01-09 | 1
2012-01-11 | -1
2001-42-42
2012-01-11 | 1
2012-01-11 | 2147483648
$>
```

## Funcionamiento

El programa usará el valor contenido en el archivo de entrada. En la salida estándar, el programa mostrará el resultado del valor multiplicado por el tipo de cambio correspondiente a la fecha indicada en la base de datos.

Si la fecha indicada en el archivo de entrada no existe en la base de datos, el programa utilizará la fecha más cercana contenida en la base de datos. Es importante usar la fecha anterior (menor) y no la posterior (mayor).

### Ejemplo de uso

```
$> ./btc
Error: could not open file.
$> ./btc input.txt
2011-01-03 => 3 = 0.9
2011-01-03 => 2 = 0.6
2011-01-03 => 1 = 0.3
2011-01-03 => 1.2 = 0.36
2011-01-09 => 1 = 0.32
Error: not a positive number.
Error: bad input => 2001-42-42
2012-01-11 => 1 = 7.1
Error: too large a number.
$>
```

## Advertencia

El(los) contenedor(es) que utilices para validar este ejercicio no serán utilizables para el resto de este módulo.

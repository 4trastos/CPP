# RPN - Notación Polaca Inversa

## Descripción

Debes crear un programa con las siguientes restricciones:

- El nombre del programa debe ser **RPN**.
- Tu programa debe aceptar una expresión matemática en notación polaca inversa (RPN) como argumento.
- Los números utilizados en esta operación y que se pasen como argumentos siempre serán menores que 10. Sin embargo, el cálculo en sí y el resultado no tienen en cuenta esta regla.
- Tu programa debe procesar esta expresión y mostrar el resultado correcto en la salida estándar.
- Si ocurre un error durante la ejecución del programa, se debe mostrar un mensaje de error en la salida estándar.
- Tu programa debe ser capaz de manejar operaciones con los siguientes operadores: `+`, `-`, `/`, `*`.
- Debes utilizar al menos un contenedor en tu código para validar este ejercicio.

No necesitas gestionar paréntesis ni números decimales.

## Ejemplos de uso

```
$> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
42
$> ./RPN "7 7 * 7 -"
42
$> ./RPN "1 2 * 2 / 2 * 2 4 - +"
0
$> ./RPN "(1 + 1)"
Error
$>
```

## Advertencia

El contenedor o contenedores que utilizaste en el ejercicio anterior están prohibidos aquí. Los contenedores que usaste para validar este ejercicio no serán utilizables en el resto de este módulo.

# Ejercicio: Creación de la clase DiamondTrap

En este ejercicio, crearás un monstruo: un ClapTrap que es mitad FragTrap y mitad ScavTrap. Se llamará DiamondTrap y heredará de ambos, FragTrap Y ScavTrap. ¡Esto es muy arriesgado!

La clase DiamondTrap tendrá un atributo privado llamado `name`. Asigna a este atributo exactamente el mismo nombre de variable (no estamos hablando del nombre del robot aquí) que el de la clase base ClapTrap.

Para ser más claro, aquí tienes dos ejemplos:
- Si la variable en ClapTrap es `name`, asigna el nombre `name` al atributo en DiamondTrap.
- Si la variable en ClapTrap es `_name`, asigna el nombre `_name` al atributo en DiamondTrap.

Sus atributos y funciones miembro se seleccionarán de cualquiera de sus clases base:
- Nombre, que se pasa como parámetro a un constructor.
- `ClapTrap::name` (parámetro del constructor + sufijo "_clap_name").
- Puntos de vida (FragTrap).
- Puntos de energía (ScavTrap).
- Daño de ataque (FragTrap).
- `attack()` (ScavTrap).

Además de las funciones especiales de ambas clases base, DiamondTrap tendrá su propia capacidad especial:
```cpp
void whoAmI();
```

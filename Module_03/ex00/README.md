# ClapTrap

### Descripción

Primero, tienes que implementar una clase. ¡Qué original!

La clase se llamará **ClapTrap** y tendrá los siguientes atributos privados, inicializados con los valores especificados entre paréntesis:

- **Name**, que se pasa como parámetro al constructor.
- **Hit points** (10), que representan la salud de ClapTrap.
- **Energy points** (10).
- **Attack damage** (0).

### Funciones miembro

Añade las siguientes funciones miembro públicas para que ClapTrap sea más realista:

- `void attack(const std::string& target);`
- `void takeDamage(unsigned int amount);`
- `void beRepaired(unsigned int amount);`

Cuando **ClapTrap** ataca, hace que su objetivo pierda **<attack damage>** puntos de vida.

Cuando **ClapTrap** se repara a sí mismo, recupera **<amount>** puntos de vida. Atacar y repararse cuestan 1 punto de energía cada uno. Por supuesto, **ClapTrap** no puede hacer nada si no tiene puntos de vida o de energía restantes.

En todas estas funciones miembro, debes imprimir un mensaje para describir lo que sucede. Por ejemplo, la función `attack()` puede mostrar algo como (por supuesto, sin los corchetes):


### Constructores y destructor

Los constructores y el destructor también deben mostrar un mensaje para que tus evaluadores puedan ver fácilmente que han sido llamados.

### Tests

Implementa y entrega tus propias pruebas para asegurarte de que tu código funciona como se espera.

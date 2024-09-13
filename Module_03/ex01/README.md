## Creando un ScavTrap: Un Nuevo Robot en la Familia ClapTrap

**Porque nunca son suficientes ClapTraps...**

Vamos a crear un robot derivado llamado ScavTrap. Este nuevo robot heredará las características de ClapTrap, pero con un toque personal.

**Características de ScavTrap:**

* **Herencia:** ScavTrap heredará los constructores y el destructor de ClapTrap.
* **Individualidad:** Los constructores, el destructor y la función de ataque de ScavTrap imprimirán mensajes únicos.
* **Encadenamiento de construcción/destrucción:** Asegúrate de que la construcción y destrucción de ScavTrap y ClapTrap se realicen en el orden correcto.
* **Atributos:**
    * **Nombre:** Se pasa como parámetro al constructor.
    * **Puntos de vida:** Inicializados en 100.
    * **Puntos de energía:** Inicializados en 50.
    * **Daño de ataque:** Inicializado en 20.
* **Capacidad especial:**
    * `guardGate()`: Esta función activará el modo guardián de la puerta para ScavTrap.

**¿Cómo empezar?**

1. **Crea una clase ScavTrap:** Esta clase heredará de ClapTrap.
2. **Implementa los constructores, destructor y funciones:** Asegúrate de que los mensajes personalizados se impriman y que los atributos se inicialicen correctamente.
3. **Agrega la función `guardGate()`:** Esta función mostrará un mensaje indicando que ScavTrap está en modo guardián de la puerta.
4. **Escribe pruebas:** Crea pruebas unitarias para verificar que ScavTrap funcione correctamente y que la herencia se haya implementado de manera adecuada.

**Recuerda:**

* **Orden de construcción/destrucción:** Al crear un ScavTrap, se construye primero un ClapTrap. La destrucción sigue el orden inverso.
* **Actualización de ClapTrap:** Los cambios en ScavTrap también afectarán a ClapTrap, ya que ScavTrap hereda de él.

**¡Diviértete creando tu propio ScavTrap!**

**Si tienes alguna pregunta, no dudes en consultarla.**

**#C++ #Programación #GameDev #Borderlands #ScavTrap #ClapTrap**

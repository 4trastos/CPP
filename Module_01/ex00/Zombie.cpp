#include "Zombie.hpp"

Zombie::Zombie(std::string input)
{
    this->name = input;
}

Zombie::~Zombie()
{
    return;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
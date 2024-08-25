#include "Fixed.hpp"

int main (int argc, char **argv)
{
    (void)argv;
    if (argc != 1)
        std::cout << "This program does not need arguments" << std::endl;
    else
    {
        Fixed a;
	    Fixed b(a);
	    Fixed c;

	    c = b;

	    std::cout << a.getRawBits() << std::endl;
	    std::cout << b.getRawBits() << std::endl;
	    std::cout << c.getRawBits() << std::endl;
    }
    return (0);
}
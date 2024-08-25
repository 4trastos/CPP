#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Fixed
{
    private:
        int value;
        static const int NOF_BITS = 8;
    
    public:
        Fixed();

        Fixed(const Fixed& copy);
        Fixed& operator = (const Fixed& copy); 

        ~Fixed();

        void setRawBits(int const raw);
        int getRawBits(void) const;
};

#endif
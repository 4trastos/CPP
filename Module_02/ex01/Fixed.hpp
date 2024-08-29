#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Fixed
{
    private:
        int                 value;
        static const int BITS = 8;

    public:
        Fixed();

        Fixed(const Fixed& copy);
        Fixed& operator = (const Fixed& copy);

        ~Fixed();

        void setRawBits(int const raw);
        int getRawBits(void) const;

        Fixed(const int int_number);
        Fixed(const float float_number);
        int toInt(void) const;
        float toFloat(void) const;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

#endif
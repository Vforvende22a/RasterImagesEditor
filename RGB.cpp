#include "RGB.h"

RGB::RGB() :red(0), green(0), blue(0) {}

RGB::RGB(int _red, int _green, int _blue)
{
    setRed(_red);
    setGreen(_green);
    setBlue(_blue);
}

unsigned RGB::getSum()const
{
    return red + green + blue;
}

unsigned RGB::getAverage() const
{
    return getSum() / 3;
}

void RGB::setRed(int _red)
{
    if (_red > 255)    throw std::invalid_argument("Value for red can only be less than 256!");
    else if (_red < 0) throw std::invalid_argument("Value for red can only be more than 0!");
    else red = _red;
}

void RGB::setGreen(int _green)
{
    if (_green > 255)    throw std::invalid_argument("Value for green can only be less than 256!");
    else if (_green < 0) throw std::invalid_argument("Value for green can only be more than 0!");
    else green = _green;
}

void RGB::setBlue(int _blue)
{
    if (_blue > 255)    throw std::invalid_argument("Value for blue can only be less than 256!");
    else if (_blue < 0) throw std::invalid_argument("Value for blue can only be more than 0!");
    else blue = _blue;
}

unsigned char RGB::r() const
{
    return red;
}

unsigned char RGB::g() const
{
    return green;
}

unsigned char RGB::b() const
{
    return blue;
}

unsigned RGB::getMaxValue()
{
    return maxValue;
}

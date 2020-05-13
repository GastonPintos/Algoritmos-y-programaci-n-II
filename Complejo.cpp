#include "Complejo.h"
#include <cmath>

Complejo ::Complejo (){x=0.0; y=0.0;}

Complejo ::Complejo (const Complejo & c) { x=c.x; y=c.y;

Complejo ::Complejo (double a, double b){x=a; y=b;}

Complejo:: ~Complejo() {}

double Complejo::getReal(){return x;}

double Complejo::getImag() {return y;}

void Complejo::setReal(double xx){x=xx;}

void Complejo::setImag(double yy){y=yy;}

Complejo& Complejo ::operator+ (double b)
{
    return Complejo(x+b,y);
}

Complejo& Complejo ::operator+ (const Complejo & b)
{
    return Complejo(x+b.x,y+b.y);
}

Complejo& Complejo ::operator= (const Complejo & b)
{
    x = b.x;
    y= b.y;
    return *this;
}

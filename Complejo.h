#ifndef COMPLEJO_INCLUDED
#define COMPLEJO_INCLUDED
class Complejo
{
private:
    double x;
    double y;

public:
    Complejo();
    Complejo(const Complejo &);
    Complejo(double,double);
    ~Complejo() ;
    double getReal();
    double getImag() ;
    void setReal(double );
    void setImag(double);
    Complejo operator + (double);
    Complejo operator + (const Complejo &);
    complejo& operator = (const Complejo &);

};
#endif

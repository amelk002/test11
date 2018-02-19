#ifndef OROR_H
#define OROR_H
#include "Base.h"
#include "Cmd.h"
class Oror: public Base
{

    private:
        Base * lhs;
        Base * rhs;
    public:
        Oror();
        Oror(Base* lhs, Cmd* rhs);
        Oror(Base* lhs, Base* rhs);
        int Executor();
};
#endif

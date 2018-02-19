#ifndef __CONNECTOR_H__
#define __CONNECTOR_H__
#include "Base.h"
#include "Cmd.h"
class And: public Base
{
    private:
        Base * lhs;
        Base * rhs;
    public:
        And();
        And(Base* lhs, Cmd* rhs);
        And(Base* lhs, Base* rhs);
        int Executor();
};

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

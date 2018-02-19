#ifndef ANDAND_H
#define ANDAND_H
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
#endif

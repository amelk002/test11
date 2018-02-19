#ifndef __AND_CPP__
#define __AND_CPP__
#include <iostream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <cmath>
#include <sstream>
#include <stdio.h>
#include <unistd.h>
using namespace std;
#include "Base.h"
#include "Connector.h"
#include "Cmd.h"
And::And()
{
    lhs = 0;
    rhs = 0;
}
And::And(Base* lhs, Base* rhs)
{
    this->lhs = lhs;
    this->rhs = rhs;
}

And::And(Base* lhs, Cmd* rhs)
{
    this->lhs = lhs;
    this->rhs = rhs;
}

int And::Executor()
{
    int currStatus = 0;
    currStatus = lhs->Executor();
    if(currStatus != 0)
    {
        return -1;
    }
    else
    {
        currStatus = rhs->Executor();
        if(currStatus != 0)
        {
            return -1;
        }
    }
    return currStatus;
}

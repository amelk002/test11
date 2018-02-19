#ifndef __OR_CPP__
#define __OR_CPP__
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

Or::Or()
{
    lhs = 0;
    rhs = 0;
}

Or::Or(Base* lhs, Base* rhs)
{
    this->lhs = lhs;
    this->rhs = rhs;
}

Or::Or(Base* lhs, Cmd* rhs)
{
    this->lhs = lhs;
    this->rhs = rhs;
}
int Or::Executor()
{
    int currStatus = 0;
    currStatus = lhs->Executor();
    if(currStatus != 0)
    {
        currStatus = rhs->Executor();
        return currStatus;
    }
    return currStatus;
}

#ifndef PROCESSES_H
#define PROCESSES_H
#include "Base.h"
#include "Cmd.h"
#include "And.h"
#include "Or.h"
class Processes {

    private:
        std::vector<Base*> currCmds;

    public:
        Processes();
        ~Processes();
        void parse(std::string parse);
        int Executor();
        void DeleteInput();
};
#endif

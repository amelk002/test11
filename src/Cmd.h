#ifndef CMD_H
#define CMD_H
#include "Base.h"
class Cmd: public Base {
  protected:
    int runStat;
    std::vector<std::string> cmdVec;
  public:
    Cmd();
    Cmd(std::vector<std::string> currCommand);
    int Executor();
    int getrunstat();
    int redirection(bool pipes, int numpipes);
};
#endif

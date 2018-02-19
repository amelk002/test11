#ifndef __BASE_H__
#define __BASE_H__
#include <string>
using namespace std;



class Base {
      public:
        Base();
        virtual ~Base();
        virtual int execute() = 0;
};
#endif

#include "Student.h"

class Graduate {
  private: 
    string advisor;
  public:
    Graduate();
    Graduate(string, string, string, int, string, string);
    string getAdvisor();
    void setAdvisor(string);
    void printInfo();
};

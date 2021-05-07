#include "employee.h"

class Staff : public Employee {
    private:
        string title;
    public:
        Staff(string, string, string, string, int, string);
        Staff();
        string getTitle();
        void setTitle(string);
        void printInfo();
};

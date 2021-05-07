class Employee : public Person {
    private:
        string office;
        int salary;
    public:
        Employee();
        Employee(string, string, string, string, int);
        string getOffice();
        void setOffice(string);
        int getSalary();
        void setSalary(int);
        void printInfo();
        
};

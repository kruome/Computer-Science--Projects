class Faculty : public Employee {
    private:
        string department;
        string rank;
    public: 
        Faculty(string, string, string, string, int, string, string);
        Faculty();
        string getDepartment();
        void setDepartment(string);
        string getRank();
        void setRank(string);
        void printInfo();
};

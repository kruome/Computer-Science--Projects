#include <iostream>
#include <string>
using namespace std;

struct Date{
    string day;
    string month;
    string year;
};
struct Student{
    int id;
    string name;
    int year;
    double gpa;
    Date dob;
    string courses[5];
};
bool isEligible(double gpa);
bool same(Date d1, Date d2);
void showData(Student s);
Student getStudentData();

int main(){
    
    Student* ptr;
    
     *ptr = getStudentData();
     showData(*ptr);
     
     cout<< (*ptr).id << endl;
     cout<< ptr->id<<endl;
     
     
    /*int num_of_students;
    
    cout<<"Enter the number of students: ";
    cin>>num_of_students;
    
    Student* students = new Student[num_of_students];
    
    for (int i = 0; i < num_of_students; i++){
        cout<<"Enter info for student "<<i+1<<endl;
        students[i] = getStudentData();
        cout<<endl;
    }
    
    for(int i = 0; i < num_of_students; i++){
        showData(students[i]);
        cout<<endl;
    }
    
    delete[] students;*/ 
    return 0;
}
Student getStudentData(){
    Student s;
    
    cout<<"Enter the student ID: ";
    cin>>s.id;
    cout<<"Enter the student name: ";
    cin.ignore();
    getline(cin,s.name);
    cout<<"Enter the student year: ";
    cin>>s.year;
    cout<<"Enter the student gpa: ";
    cin>>s.gpa;
    cout<<"Enter the date of birth (DD/MM/YY): ";
    cin>>s.dob.day >> s.dob.month >>s.dob.year;
    cout<<"Enter the courses: ";
    for(int i = 0; i < 5; i++){
        if(i == 0){
            cout<< "Enter the first course: ";
            cin>>s.courses[i];
            
        }else if(i == 1){
            cout<< "Enter the second course: ";
            cin>>s.courses[i];
            
        }else if(i == 2){
            cout<< "Enter the third course: ";
            cin>>s.courses[i];
            
        }else if(i == 3){
            cout<< "Enter the fourth course: ";
            cin>>s.courses[i];
            
        }else{
            cout<< "Enter the fifth course: ";
            cin>>s.courses[i];
            
        }
    }
    
    return s;
}
void showData(Student s){
    
    cout<< "ID: "<< s.id<<endl;
    cout<< "Name: "<<s.name<<endl;
    cout<< "Year in school: " <<s.year<<endl;
    cout<<"GPA: "<<s.gpa<<endl;
    cout<<"DOB: "<<s.dob.day<<"/"<<s.dob.month<<"/"<<s.dob.year <<endl;
    
    for(int i = 0; i < 5; i++){
        cout << s.courses[i] << " ";
    }
    
    cout<<endl;
    if(isEligible(s.gpa)){
        cout<< s.name<<" is eligible to apply for graduate school.";
    }else{
        cout<<s.name<<" is not eligible to apply for graduate school.";
    }
}
bool isEligible(double gpa){
    if(gpa >= 3)
        return true;
    else
        return false;
}
bool same(Date d1, Date d2){
    if(d1.day != d2.day){
        return false;
    }
    if(d1.month != d2.month){
        return false;
    }
    
    if(d1.year != d2.year){
        return false;
    }
    return true;
}

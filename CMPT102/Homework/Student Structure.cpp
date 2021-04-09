#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int id;
    int *tests;
    double average;
    char grade;
};

void showData(Student s);
Student getStudentData(int n);

int main(){
    
    int num_of_students, num_of_tests;
        
    cout<<"Enter the number of students: ";
    cin>> num_of_students;
    
    cout<<"Enter the number of tests each student takes: ";
    cin>>num_of_tests;
    
    cout<<endl;
    Student* students = new Student[num_of_students];

    for(int i = 0; i < num_of_students; i++){
        cout<<"Enter the information for student " << i+1<<": " <<endl;
        students[i] = getStudentData(num_of_tests);
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0; i <num_of_students;i++){
        cout<<"The following information is for student "<<i+1<<": ";
        showData(students[i]);
        cout<<endl;
    }
 
}

Student getStudentData(int n){
    Student s;
    double total;

    cout<<"Enter the student name: ";
    cin.ignore();
    getline(cin,s.name);
    cout<<"Enter the student ID: ";
    cin>>s.id;
    
    for(int i = 0; i < n; i++){
        do{
            cout<<"Enter the score for Test "<< i + 1<<"(0-100): ";
            cin>>s.tests[i];
        }while(s.tests[i]>100 || s.tests[i]<0);
        total += s.tests[i];
    }
    s.average = total/n;
    
    if(s.average>=91){
        s.grade = 'A';
    }else if(s.average>=81 && s.average<=90){
        s.grade='B';
    }else if(s.average >=71 && s.average <=80){
        s.grade = 'C';
    }else if(s.average >= 61 && s.average<=70){
        s.grade ='D';
    }else{
        s.grade ='F';
    }
    
    return s;
}

void showData(Student s){
    cout<<"Name: " << s.name<<endl;
    cout<<"ID: "<<s.id<<endl;
    cout<<"Average Test Score: "<<s.average<<endl;
    cout<<"Grade: "<<s.grade<<endl;
}

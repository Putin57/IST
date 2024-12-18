/*
7.Create a class student which has data members as name, semester, roll
section and marks in five subjects. write a program to display all information of the students with total 
marks.
*/
#include <bits/stdc++.h>
using namespace std;
class Student {
    string name;
    int semester;
    int roll;
    string section;
    float marks[5];
    float totalMarks;
    public:
        Student(string n,int s,int r,string sec,float m[5]) {
            name=n;
            semester=s;
            roll=r;
            section=sec;
            for (int i=0;i<5;i++)marks[i]=m[i];
            totalMarks=0;
            for (int i=0;i<5;i++)totalMarks+=marks[i];
        }
    void display(){
        cout<< "Name: "<<name<<'\n';
        cout<< "Semester: " << semester << '\n';
        cout << "Roll No: " << roll << '\n';
        cout << "Section: " << section << '\n';
        cout<<"Marks: ";
        for (int i=0;i<5;i++)cout<<marks[i]<<" ";
        cout<<"\nTotal Marks: "<<totalMarks <<'\n';
    }
};
int main(){
    string name,section;
    int semester,roll;
    float marks[5];
    cout << "Name: ";getline(cin, name);
    cout<<"Semester: ";cin>>semester;
    cout<<"Roll No: ";cin>>roll;
    cout<<"Section: ";cin >> section;
    cout<<"Enter marks for 5 subjects: ";
    for(int i=0;i<5;i++)cin >> marks[i];
    Student student(name,semester,roll,section,marks);
    student.display();
    return 0;
}

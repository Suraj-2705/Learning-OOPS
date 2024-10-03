#include<iostream>
using namespace std;
#include<string>
class Student{
    int sid;
    string name;
    float subject1, subject2, subject3;

public:
    Student(int sid, string name, float sub1, float sub2, float sub3)
    {
    this->sid = sid;
    this->name = name;
    this->subject1 = sub1;
    this->subject2 = sub2;
    this->subject3 = sub3;
    }
    void readinfo(const char* file)
    {
        ifstream file( reinterpret_cast<char*>(this), sizeof(*this));
        file.read()
    }
    void display(){
        cout<<"Student ID: "<<sid<<endl;
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student avg marks: "<<(subject1+subject2+subject3)/3<<endl;
    }

    float averageMarks(){
        return (subject1 + subject2 + subject3)/3;

    }
};

int main()
{
    Student s(1, "John", 90, 80, 70);
    s.display();
    return 0;

}
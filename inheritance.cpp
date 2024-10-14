#include<iostream>
using namespace std;
class Person
{
    protected: int age;
    string name;
    void setdata(int a, string n)
    {
        age = a;
        name = n;
    }
    void display()
    {
        cout<<"Age = "<<age<<" Name = "<<name;
    }
};
class Student : public Person
{
    int roll;
    public : void setroll(int r, int a, string n)
    {
        setdata(a, n);
        roll = r;
    }
    
    public: void info()
    {
        display();
        cout<<" Roll "<<roll;
    }
    
};

int main()
{
    Student s;
    s.setroll(101, 12, "ABC");
    s.info();
}
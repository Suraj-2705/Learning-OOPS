#include<iostream>
using namespace std;

class Animal{
    public:
        virtual void sound() = 0;
        virtual void move() = 0;
};


class Bird : public Animal{
    public:
        void sound(){
            cout<<"Bird Chirps"<<endl;
            cout << endl;
        }
        
        void move(){
            cout << "Bird flies ...."<<endl;
            cout << endl;
        }
        
};

class Dog : public Animal{
    public:
        void sound(){
            cout<<"Bark bark" << endl;
            cout << endl;
        }

        void move(){
            cout << "Dog runs"<<endl;
            cout << endl;
        }
};

int main(){
   Animal *a1 = new Dog();
   Animal *a2 = new Bird();
   a1->sound();
   a1->move();
   a2->sound();
   a2->move();
   delete a1;
   delete a2;
   return 0;
}
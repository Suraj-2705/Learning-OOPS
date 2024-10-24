#include<iostream>
using namespace std;

class Animal{
    public:
        virtual void sound() = 0;
        virtual void move() = 0;
        virtual ~Animal(){
            cout << "Animal destructor called" << endl;
        }
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
        
        ~Bird(){
            cout<<"Bird dest"<<endl;
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

        ~Dog(){
            cout<<"Dog dest"<<endl;
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
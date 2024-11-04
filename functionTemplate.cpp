#include<iostream>
#include<string>
using namespace std;
template<class T>
void swapp(T&a, T&b){
    T temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 10;
    int b = 20;
    swapp(a, b);
    cout << a << " " << b << endl;

    float x = 10.12, y = 20.23;
    swapp(x, y);
    cout << x << " " << y << endl;

    string s1 = "suraj", s2 = "nishant";
    swapp(s1, s2);
    cout << s1 << " " << s2 << endl;
}
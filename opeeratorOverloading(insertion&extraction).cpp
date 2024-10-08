#include<iostream>
using namespace std;

class Point {
    int x, y;
    public:
    Point(int x=0, int y=0) {
        this->x = x;
        this->y = y;
    }
    friend void operator>> (istream& in, Point& p);
    friend void operator<< (istream& out, Point& p);

    
};

    void operator >> (istream& in, Point& p){
        cout << "Enter the value of x: ";
        in >> p.x;
        cout << "Enter the value of y: ";
        in >> p.y;
        
    }
    void operator << (ostream& out, Point& p){
    
        out << p.x;
        cout << " , ";
        out << p.y;
        
    }
    int main(){
    Point P1, P2, P3;
    cin >> P3;
    cout << P3;

}

#include<iostream>
using namespace std;

class Point {
    int x, y;
    public:
    Point(int x=0, int y=0) {
        this->x = x;
        this->y = y;
    }

    void display(){
        cout << "(" << x << ", " << y << ")" ;
    }

    Point operator+(Point&p){
        Point t;
        t.x = x + p.x;
        t.y = y + p.y;
        return t;
    }
};

    int main(){
    Point p1(5, 6), p2(6, 8), p3;
    p3 = p1 + p2;
    p3.display();
    return 0;

}

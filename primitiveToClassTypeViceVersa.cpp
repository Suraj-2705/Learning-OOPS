#include<iostream>
using namespace std;
class Distance
{
    double kiloMeter;
    int meter;

    public:
       Distance(){}

        Distance(double k )
        {
            kiloMeter = k;
        }

        Distance(int meter)
        {
            kiloMeter =  meter/1000.0; 
        }

        operator double(){
            return kiloMeter * 1000;
        }

        void displayKilometers() const
        {
            cout << "distance in kilometers: " << kiloMeter << "km" << endl;
        }


};

int main()
{
    Distance obj;
    cout << " Enter distance in meters: ";
    int metr;
    cin >> metr;
   
    obj = metr;
   
    obj.displayKilometers();

    double km;
    cout << "Enter the distance in kilometers: ";
    cin >> km;
    Distance obj1(km);



    metr = obj1;
    cout << "Meter: " << metr;
    return 0;
}
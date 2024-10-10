#include<iostream>
using namespace std;
class distance
{
    float kiloMeter;

    public:
        distance(){}

        distance(float meter)
        {
            kiloMeter =  meter/1000.0; 
        }

        operator float(){
            return kiloMeter * 1000;
        }

        float displayInKilometers()
        {
            cout << "distance in kilometers: " << kiloMeters << "km" << endl;
        }


};

int main()
{
    
}
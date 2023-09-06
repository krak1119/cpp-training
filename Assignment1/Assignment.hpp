//=========================================================================
//  F I L E   C O N T E N T S
//-------------------------------------------------------------------------
/// @file Assignment.hpp
///
/// @brief Read Releaseyear, Customer & Speed.
/// @author Kiran K
//=========================================================================

#include <iostream>
#include <string>

using namespace std;

class car
{
public:
    //To display the Release year, Customer & speed of the car.
    void getvalue();

    //To display the Accelerated speed
    void accelerate();

    //To display the speed during break
    void brake();

    car (int ry, string cn, float s): releaseYear(ry), customer(cn), speed(s){
        cout<<"\nInitializing object with below values\n";
        cout<<"-------------------------------------\n";
    }

private:
    int releaseYear;
    string customer;
    float speed;

};

void car::getvalue()
{
cout << "Release Year: " << releaseYear << endl;
cout << "Customer Name: " << customer << endl;
cout << "Initial speed of the car: " << speed << endl;
}

void car::accelerate()
{
    speed=speed+10;
    cout << "Current speed of the car: " << speed << endl;
}

void car::brake()
{
    speed=speed-10;
    cout << "Current speed of the car: " << speed << endl;
}
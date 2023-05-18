//===============================================================================
//  F I L E   C O N T E N T S
//-------------------------------------------------------------------------------
/// @file Assignment.hpp
///
/// @brief Read Releaseyear, Customer & Speed.
/// @author Kiran K
//================================================================================
#include "Assignment.hpp"

int main()
{
    // Creating object myCar
    car myCar(2018, "Honda", 0);

    myCar.getvalue();

    // iterating 5 time to increase the speed of the vehicle
    for (int i = 0; i < 5; ++i)
    {
        cout << "\nAccelerating " << endl;
        myCar.accelerate();
    }

    //iterating 5 time to decrease the speed of the vehicle
    for (int i = 0; i < 5; i++)
    {
        cout << "\nBraking " << endl;
        myCar.brake();
    }
}
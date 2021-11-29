/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jazz Faye Olario
 */

#include "std_lib_facilities.h"

//Function taking the constant
void ConstFunc(double x){
    cout << "5 miles -> km is equal to " << x * 5 ; //prints the distance in km
}

int main(){
    const double km_per_mile = 1.61; //Declaring the conversion constant

    ConstFunc(km_per_mile);   //Calling the function with the constant

    return 0;

}

/*
    Yes. Non-reference function argument "const" means that the arguments that passed to the function
    are constant and cannot be changed. We use this because it serves as an assurance that the value
    passed to the function does not change. I think the reason why people do not use this a lot
    because in non-reference parameters to functions, a copy of the parameter itself if passed 
    rather than its reference. Which means if a large data item is being passed, 
    copying that data can take a huge amount of time.
*/

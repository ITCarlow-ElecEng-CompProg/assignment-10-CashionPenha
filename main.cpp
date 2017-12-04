/**
 * Cashion Penha
 * Lab 10
 * 555 Timer Astable Multivibrator Calculations
 * 06/11/2017
 */

 /**< preprocessor directives / header files*/

#include <iostream>
#include <math.h>

using namespace std;/** Includes commonly used tools, such as cout, cin, To prevent typing "std" */

/**< Separate function to calculate the frequency and the duty cycle*/
void timer555(double r1, double r2, double c1, double *fo, double*D)
{
    /**< declaring pointer*/
    *fo = 1.44/((r1+2*r2)*c1);
    *D = 100*(r1+r2)/(r1+2*r2);
    cout.precision(4);
}

/**< Main function */
int main()
{
    /**< Declaring variables of type double*/
    double r1,r2,c1,fo,D;

    cout << "Lab 10 - 555 Timer Astable Multivibrator" << endl;

    /**< Do while loop to ensure value entered by user is greater than 0*/
    do
    {
        cout <<"\nPlease enter value for Resistor 1 in ohms: ";
        cin >> r1;
    }
    while(r1<=0);

    do
    {
        cout <<"\nPlease enter value for Resistor 2 in ohms: ";
        cin >> r2;
    }
    while(r2<=0);/**< Condition of loop*/

    do
    {
        cout <<"\nPlease enter value for capacitor 1 in Farads: ";
        cin >> c1;
    }
    while(c1<=0);

    timer555(r1,r2,c1,&fo,&D);/**< Calling the timer function */

    /**< Displaying the result */
    cout <<"\nThe output frequency is: " << fo <<" Hz";
    cout <<"\nThe duty cycle is: " << D <<" %" << endl;

    /**< End of program */
    return 0;
}

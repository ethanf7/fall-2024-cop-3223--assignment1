// Ethan Frederick 
// UCFID: 5167926
// Professor Parra
// COP
// 8 September 2024

// including necessary libraries
#include <stdio.h>
#include <math.h>

// defining PI as 3.14159
#define PI 3.14159

// helper function to be called into future functions to avoid repetition
// and to help with calculations and inputs
double formulaDistance ()
{
    // print statement telling the user to input values
    printf("Enter values here:\n");

    // introducing variables to represent the two parts of each point
    double x1,x2,y1,y2;

    // next four lines of code allow the user to input numbers for the points 
    // in order of x1, x2, y1, y2
    scanf("%lf", &x1);
    scanf("%lf", &x2);
    scanf("%lf", &y1);
    scanf("%lf", &y2);
    
    // two print statements to announce the points to the user
    // once helper function is called
    printf("Point #1: x1 = %.0lf y1 = %.0lf\n",x1,y1);
    printf("Point #2: x2 = %.0lf y2 = %.0lf\n",x2,y2);
    
    // inputting the formula for distance to be used many times later
    // and setting it equal to a variable to be saved and used later
    double dist = sqrt( pow( x2 - x1, 2 ) + pow( y2 - y1, 2));

// returning a saved variable with the value for distance
return dist;
}
    // general note: every time the above helper function is called it will
        // repeat the input prompts and the printed point values

// function that runs previous helper function 
// and asks for user input
// and gives the output to the user (point values and distance)
double calculateDistance()
{
    // re-introducing the variable for distance by setting it equal
    // to the helper function
    // this will output point values and apply the formula for distance
    double dist = formulaDistance();

    // print statement telling the user the calculated distance
    // and rounding it to three decimal points
    printf("The distance between these two points is %.3lf\n", dist);

// a returned double that represents the distance
return dist;
}

// a function to calculate and output the perimeter
// runs the helper function which asks for input and prints the points
double calculatePerimeter()
{
    // introducing the variable for distance that is needed in the next formula
    // setting that variable as equal to the helper function to call it
    double dist = formulaDistance();
    
    // creating a variable for perimeter and setting it equal to the formula to calculate it
        // note to self: normally the formula is p = 2*pi*r
            // but since the distance represents the diameter, 2*r is already completed
    double peri = dist * PI;

    // printing the calculated value for perimeter for the user
    printf("The perimeter of the city encompassed by your request is %.3lf\n", peri);

// returning a double that represents the difficulty of this function
return 5.0;
}

// function to calculate and output the area
// runs the helper function which asks for input and prints the points
double calculateArea()
{
    // re-introducing the variable for distance
    // and setting it equal to the helper function to call it
    double dist = formulaDistance();

    // the formula for area requires the radius
    // dividing the distance (which represents the diameter) by two to find the radius
    // setting it equal to a new variable
    double radi = dist / 2;

    // creating a new variable to represent area and setting it equal to the formula for area
    double area = PI * pow( radi, 2 );

    // printing the area for the user to see
    printf("The area of the city encompassed by your request is %.3lf\n", area);

    // returning a double that represents the difficulty of this function
return 3.0;
}

// creating a function to calculate width
// runs the helper function which asks for input and prints the points
double calculateWidth()
{
    // creating a variable for width and setting it equal to helper function
        // note to self: no formula is needed as it is the same as the distance formula
            // utilizing the formula within the helper function prevents repetition
    double widt = formulaDistance();

    // printing the calculated width of the circle
    printf("The width of the city encompassed by your request is %.3lf\n", widt);

// returning a double representing the difficulty of this function
return 2.5;
}

// creating a function that calculates and prints height
// calls helper function which asks for input and prints the points
double calculateHeight()
{
    // introducing a new variable to represent height
    // and setting it equal to the helper function 
    // avoiding repetition by reusing the formula within the helper function
    double heig = formulaDistance();

    // prints the calculated value for height
    printf("The height of the city encompassed by your request is %.3lf\n", heig);

// returning a double that represents the difficulty 
return 1.0;
}

// main function calls all other functions and runs them consecutively
int main(int argc, char** argv)
{
    // calling all functions to run in main
    // except for the helper function which is already called by the previous ones
    calculateDistance(); // asks for user input and outputs points and distance
    calculatePerimeter(); // asks for user input and outputs points and perimeter
    calculateArea(); // asks for user input and outputs points and area
    calculateWidth(); // asks for user input and outputs points and width
    calculateHeight(); // asks for user input and outputs points and height

// return to end the function
return 0;
}
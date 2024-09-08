// Ethan Frederick
// Professor Moran
// COP
// 8 September 2024

#include <stdio.h>
#include <math.h>
#define PI 3.14159

double formulaDistance ()
{
    printf("Enter values here:\n");

    double x1,x2,y1,y2;
    scanf("%lf", &x1);
    scanf("%lf", &x2);
    scanf("%lf", &y1);
    scanf("%lf", &y2);
    
    printf("Point #1: x1 = %.0lf y1 = %.0lf\n",x1,y1);
    printf("Point #2: x2 = %.0lf y2 = %.0lf\n",x2,y2);
    
    double dist = sqrt( pow( x2 - x1, 2 ) + pow( y2 - y1, 2));

return dist;
}

double calculateDistance()
{
    double dist = formulaDistance();
    printf("The distance between these two points is %.3lf\n", dist);

return 1.4;
}

double calculatePerimeter()
{

    double dist = formulaDistance();
    double peri = dist * PI;
    printf("The perimeter of the city encompassed by your request is %.3lf\n", peri);

return 5.0;
}

double calculateArea()
{
    double dist = formulaDistance();
    double radi = dist / 2;
    double area = PI * pow( radi, 2 );
    printf("The area of the city encompassed by your request is %.3lf\n", area);
return 3.0;
}

double calculateWidth()
{
    double widt = formulaDistance();
    printf("The width of the city encompassed by your request is %.3lf\n", widt);

return 2.5;
}

double calculateHeight()
{
    double heig = formulaDistance();
    printf("The height of the city encompassed by your request is %.3lf\n", heig);

return 1.1;
}



int main(int argc, char **argv)
{
    // calling all functions to run in main
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

return 0;
}
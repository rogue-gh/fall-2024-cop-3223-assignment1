//******************************************************** 
// fracturing.c 
// Author: Peyton Ritzert 
// Class: COP 3223, Professor Parra 
// UCFID: 5557509 
// 
//******************************************************** 

// libraries & define pi as a constant
#include <stdio.h>
#include <math.h>

// defining pi as required by the PDF
#define PI 3.14159

// function prototypes
double calculateDistance();
double calculatePerimeter(double distance);
double calculateArea(double distance);
double calculateWidth(double distance);
double calculateHeight(double distance);

// defining main
int main(int argc, char **argv) {
    double distance = calculateDistance();
    calculatePerimeter(distance);
    calculateArea(distance);
    calculateWidth(distance);
    calculateHeight(distance);

    return 0;
}

// function to calculate distance
double calculateDistance() {
    double x1, x2, y1, y2;

    // user input for x1 and x2
    printf("Enter your x-coordinate for Point #1: ");
    scanf("%lf", &x1);
    printf("Enter your x-coordinate for Point #2: ");
    scanf("%lf", &x2);

    // user input for y1 and y2
    printf("Enter your y-coordinate for Point #1: ");
    scanf("%lf", &y1);
    printf("Enter your y-coordinate for Point #2: ");
    scanf("%lf", &y2);

    // calculate distance using two points
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // print results
    printf("Point #1 entered: x1 = %.3lf; y1 = %.3lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf\n", x2, y2);
    printf("The distance between the two points is %.3lf\n", distance);

    return distance;
}

// function to calculate perimeter of a circle
double calculatePerimeter(double distance) {
    // calculate diameter using distance
    double diameter = distance;  // No need to call calculateDistance() again

    // calculate perimeter using pi * diameter
    double perimeter = PI * diameter;
    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);

    // difficulty rating
    return 2.5;
}

// function to calculate area of a circle using pi*r^2
double calculateArea(double distance) {
    // calculate radius using diameter
    double radius = distance / 2;

    // calculate the area of the circle using pi*r^2
    double area = PI * pow(radius, 2);

    // print output
    printf("The area of the city encompassed by your request is %.3lf\n", area);

    // after working through my first couple functions, it became much easier
    return 1.5;
}

double calculateWidth(double distance) {
    // width of a circle is diameter
    double width = distance;

    // print output
    printf("The width of the city encompassed by your request is %.3lf\n", width);

    // in my opinion, very simple
    return 1.0;
}

double calculateHeight(double distance) {
    // height of a circle is diameter
    double height = distance;

    // print output
    printf("The height of the city encompassed by your request is %.3lf\n", height);

    // just a repeat of last function
    return 1.0;
}
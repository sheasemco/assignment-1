#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();  // Optional bonus function

// Main function
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2, distance;

    // Getting the coordinates from user
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    // Output points
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

    // Calculate the distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output the distance
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}

// Function to calculate the perimeter (using the calculated distance as diameter)
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = PI * distance;

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    // Return a difficulty rating from 1.0 to 5.0
    return 3.0;  // Example difficulty level
}

// Function to calculate the area (using the calculated distance as diameter)
double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = PI * pow(radius, 2);

    printf("The area of the city encompassed by your request is %.2lf\n", area);

    // Return a difficulty rating from 1.0 to 5.0
    return 4.0;  // Example difficulty level
}

// Function to calculate the width (distance between the x-coordinates)
double calculateWidth() {
    double x1, x2, width;

    // Getting the x-coordinates from user
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);

    // Output points
    printf("Point #1 entered: x1 = %.2lf\n", x1);
    printf("Point #2 entered: x2 = %.2lf\n", x2);

    // Calculate the width
    width = fabs(x2 - x1);

    // Output the width
    printf("The width of the city encompassed by your request is %.2lf\n", width);

    return 2.0;  // Example difficulty level
}

// Function to calculate the height (distance between the y-coordinates)
double calculateHeight() {
    double y1, y2, height;

    // Getting the y-coordinates from user
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    // Output points
    printf("Point #1 entered: y1 = %.2lf\n", y1);
    printf("Point #2 entered: y2 = %.2lf\n", y2);

    // Calculate the height
    height = fabs(y2 - y1);

    // Output the height
    printf("The height of the city encompassed by your request is %.2lf\n", height);

    return 2.5;  // Example difficulty level
}

// Optional bonus: Function to ask for user input and return the input as a double
double askForUserInput() {
    double input;
    printf("Enter a value: ");
    scanf("%lf", &input);
    return input;
}

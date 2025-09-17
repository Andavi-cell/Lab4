#include <iostream>
#include <cmath> // tangent variable and Pi
#include <iomanip>

int main() {
    double distance; //horizonal distance to building
    double angle_degrees; // Angle of elevation from eyesight
    // Angle of elevation
    //Calculated height of building
    double height1; // Calculate height of person

    // Get input from user
    std::cout << "Enter your height in feet:";
    std::cin >> height1;
    //Enter distance from building
    std::cout << "Enter your distance from the building (feet):\n";
    std::cin >> distance;
    // Enter angle of sight
    std::cout <<"Enter the angle of the line of sight:\n";
    std::cin >> angle_degrees;

    // Convert the height from degrees to radians, solve tan()
    double angle_radians = angle_degrees * M_PI / 180;

    //Calculate the height using the tangent function
    double height2 = distance * tan(angle_radians) + height1;

    //Output the result
    std::cout.setf(std::ios::fixed);
    std::cout.precision(0);
    std::cout << "Your height of the building is " << height2 <<" feet tall.\n";



}

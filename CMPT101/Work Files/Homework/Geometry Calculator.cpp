#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

int main() {

int choice;
	double radius;
	double width;
	double length;
	double height;
	double base;

	
	cout << "Geometry Calculator \n";
	cout << "1. Calculate the Area of a Circle \n";
	cout << "2. Calculate the Area of a Rectangle \n";	
	cout << "3. Calculate the Area of a Triangle \n";
	cout << "4. Quit \n";
	cout << "Enter your choice (1-4): \n";
	cin >>choice;

	switch (choice) {
	case 1:
		cout << "Enter the radius of the circle: \n";
		cin >> radius;
		cout << "The area of the circle is " << radius * radius * M_PI << "\n";
		break;
	case 2:
		cout << "Enter the width of the rectangle: \n";
		cin >> width;
		cout << "Enter the length of the rectangle: \n";
		cin >> length;
		cout << "The area of the rectangle is " << width * length << "\n";
		break;
	case 3:
		cout << "Enter the height of the triangle: \n";
		cin >> height;
		cout << "Enter the base of the triangle: \n";
		cin >> base;
		cout << "The area of the triangle is: " << (base * height) / 2 << "\n"; 
		break;
	case 4:
		cout << "You have exited the program. \n";
		break;
	}

	system("pause");
	return 0;
}

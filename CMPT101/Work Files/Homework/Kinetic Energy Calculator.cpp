#include <iostream>
using namespace std;


int kineticEnergy();

int main() {
	float KE = kineticEnergy();
	cout << "The Kinetic Energy of the object is " << KE << endl;
	return 0;
}

int kineticEnergy() {
	double mass, velocity;
	cout << "Enter the mass of the object(kg): ";
	cin >> mass;
	cout << "Enter the velocity of the object: ";
	cin >> velocity;

	return (pow(velocity, 2) * mass);
}

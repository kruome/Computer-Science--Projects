#include <iostream>
using namespace std;

double max(int a, int b);
double max(int a, int b, int c);

int main() {

	cout << "The largest value is " << max(2, 4, 5) << endl;

	return 0;
}

double max(int a, int b) {
	double largestvalue;
	if (a > b) {
		largestvalue = a;
	}
	else {
		largestvalue = b;
	}
	return largestvalue;
}
double max(int a, int b, int c) {
	double largestvalue;
	if (a > b) {
		largestvalue = a;
	}else if(b > c) {
		largestvalue = b;
	}
	else {
		largestvalue = c;
	}
	return largestvalue;
}

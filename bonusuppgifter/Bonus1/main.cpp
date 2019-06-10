#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float a, b, c;
	cout << "Första sidan ";
	cin >> a;
	cout << "Andra sidan ";
	cin >> b;
	
	a = a * a;
	b = b * b;
	c = a + b;
	cout << sqrt(c);
	return 0;}


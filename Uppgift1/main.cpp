#include <iostream>

using namespace std;

int main() {
	int tal1, tal2, sum;
	cout << "Hur mycket just nu? ";
	cin >> tal1;
	cout << "Hur mycket förra året? ";
	cin >> tal2;
	sum = tal1 + tal2;
	cout << "Totalt " << sum;
	return 0;
}


#include <iostream>

using namespace std;

void IncreaseFunction(int tal1) {
	
	tal1 = tal1 + 2;
	
	cout << tal1;
}

int main(int argc, char** argv) {
	int tal1;
	cout << "Skriv in ett heltal ";
	cin >> tal1;
	
	IncreaseFunction(tal1);
	
	return 0;
}

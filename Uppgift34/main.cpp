#include <iostream>

using namespace std;

int IncreaseFunction(int tal1) {
	
	tal1 = tal1 + 2;
	
	return tal1;
}

int main(int argc, char** argv) {
	int tal1;
	cout << "Skriv in ett heltal ";
	cin >> tal1;
	
	cout << IncreaseFunction(tal1);
	
	return 0;
}

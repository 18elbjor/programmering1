#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	char function;
	float a = 0, b = 0, found = 0;
	
	cout << "Sätt in en kalkylation" << endl;
	cin >> a >> function >> b;
	
	for(int i = 0; found != true; i++)
	{
		if(function == '+')
		{
			cout << a + b;
			found = true;
		} else if(function == '-') {
			cout << a - b;
			found = true;
		} else if(function == '*') {
			cout << a * b;
			found = true;
		} else if(function == '/') {
			cout << a / b;
			found = true;
		} else if(i == 50) {
			cout << "Din kalkylation var felaktig eller var inskriven fel.";
			found = true;
		}
	}
	
	return 0;
}

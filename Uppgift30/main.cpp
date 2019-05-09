#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	string namn;
	char change = 'Z';
	
	cout << "Välj ett namn? ";
	cin >> namn;
	
	namn[0] = change;
	cout << namn;
	return 0;
}

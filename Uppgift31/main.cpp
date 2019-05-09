#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	string ord;
	char change = 'a', fel = 'Z';
	cout << "Välj ett ord ";
	cin >> ord;
	for(int i = 0; i < '/0'; i++)
	{
		if(ord[i] == 'Z')
		{
			ord[i] = 'a';
		}
	}
	
	cout << ord;
	
	return 0;
}

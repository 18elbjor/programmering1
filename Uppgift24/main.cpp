#include <iostream>

using namespace std;

int main() {
	int tal[10];
	
	for(int i = 0; i < 10; i++)
	{
		cout << "Välj ett tal";
		cin >> tal[i];
	}
	
	for(int y = 0; y < 10; y++)
	{
		cout << tal[y] << endl;
	}
	
	return 0;
}

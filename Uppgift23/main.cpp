#include <iostream>

using namespace std;

int main() {
	int array[10];
	
	for(int i = 0; i < 10; i++)
	{
		array[i] = i + 1;
	}
	
	for(int y = 10; y >= 0; --y)
	{
		cout << array[y] << endl;
	}
	
	
	
	
	return 0;
}

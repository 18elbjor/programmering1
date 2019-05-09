#include <iostream>

using namespace std;

int main() {
	int tal1, tal2;
	
	cout << "Välj ett nummer mellan 1-10 ";
	cin >> tal1;
	
	for(int s = 1; s <= 6; s++)
	{
	
	tal2 = 1;
	
	for(int line = 1; line < 10; line++)
	{
		if(tal2 == tal1)
		{
			cout << "_";
		}
		cout << "*";
		tal2++;
	}
	
	tal1++;
	
	if(tal1 > 10)
	{
		cout << "_";
	}
	
	cout << endl;
	
	if(tal1 > 10)
	{
		tal1 = 1;
	}
	
	}
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int tal;
	bool increase = true;
	
	while(increase == true)
	{
		cout << tal;
		tal++;
		
		if(tal == 7)
		{
			increase = false;
		}
	}
	while(tal >= 0)
	{
		cout << tal;
		tal--;
	}
	
	
	return 0;
}

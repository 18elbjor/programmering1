#include <iostream>

using namespace std;

int main() {
	int year, age, check;
	
	cout << "�r? ";
	cin >> year;
	cout << "N�r gjordes bilen";
	cin >> age;
	
	check = year - 5;
	
	if(age >= check)
	{
		cout << "All risk insurance";
	}
	if(age < check)
	{
		cout << " half insurance";
	}
	
	return 0;

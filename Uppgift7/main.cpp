#include <iostream>

using namespace std;

int main() {
	int year, age, check;
	
	cout << "År? ";
	cin >> year;
	cout << "När gjordes bilen";
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

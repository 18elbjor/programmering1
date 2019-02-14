#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	using namespace std;
int main() {
	
	int number1, number2, number3, number4, number5, summa, total;
	cout << "Write a number:" << endl;
	cin >> number1;
	cout << "Another one" <<endl;
	cin >> number2;
	cout << "Another one" <<endl;
	cin >> number3;
	cout << "Another one" <<endl;
	cin >> number4;
	cout << "Another one" <<endl;
	cin >> number5;
	
	summa = number1 + number2 + number3 + number4 + number5;
	total = summa / 5; 
	
	
	cout << "Your medelvärde is:" << total;
	
	return 0;
}

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int tal1, tal2, summa; 
	
	cout <<"Antal arbetade timmar" <<endl;
	cin >>tal1;
	cout <<"kr per timme" << endl;
	
	if(tal1 <= 160){
		summa = tal1 + tal2
		cout << summa;
	} else if(tal1 > 160 and tal1 < 241){
		summa = (tal2 * 160) + (tal1 - 160) * (tal2 * 1.5);
		cout << summa;
	}
	
	return 0;
}

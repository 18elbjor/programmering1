#include <iostream>

using namespace std;

int PrimeFind(int number, int i) {
	if(i == 1) {
		return 1;
	} else if(number % i == 0) {
		return 0;
	} else {
		return PrimeFind(number, i-1);
	}
}

int main(int argc, char** argv) {
	int user = 1000001, check;
	while(user > 1000000) {
		cout << "V�lj ett neutralt nummer (inte -tal) och mindre �n 1 000 000" << endl;
		cin >> user;
	}
	check = PrimeFind(user, user/2);
	
	if(check == 1) {
		cout << user << " �r ett primtal";
	} else {
		cout << user << " �r inte ett primtal";
	}
	return 0;
}

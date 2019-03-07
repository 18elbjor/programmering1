#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {

int tal, tal2, tal3, tal4;

tal = 1234;

cout <<"Gissa PIN"<<endl;
cin >> tal2;

if(tal2 != 1234) {
cout << "Fel svar"<<endl;
cout <<"Gissa igen"<<endl;
cin >>tal2;
}
else {
	cout <<"Grattis"<<endl;
}

if(tal2 != 1234) {
cout << "Fel svar"<<endl;
cout <<"Gissa igen"<<endl;
cin >>tal2;
}
else {
	cout <<"Grattis"<<endl;
}

if(tal2 != 1234) {
cout << "Ditt kort är nu spärrat"<<endl;
;
}
else {
	cout <<"Grattis"<<endl;
}



	return 0;
}

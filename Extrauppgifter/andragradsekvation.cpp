#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
int a, b, c, p, q, x1, x2, uroten, svar;

cout << "Skriv v�rde f�r a som inte �r 0" <<endl;
cin >> a;
cout << "Skriv v�rde f�r b" <<endl;
cin >> b;
cout << "Skriv v�rde f�r c" <<endl;
cin >> c;

if (a == 0){
cout << "A f�r inte vara 0"<<endl;
}
else {
p = b/a;
q = c/a;
uroten = (p / 2) * (p / 2) - q;
x1 = - (p/2) +  sqrt(uroten); 
x2 = - (p/2) - sqrt(uroten);

if (uroten > 0){
	cout << "2 reella l�sningar"<<endl;
}
else if( uroten == 0){
	cout << "1 reell l�sning"<<endl;
}
else if (uroten<0){
cout << "0 reella l�sningar" <<endl;
}


cout << "X1 �r"<<x1<<endl;
cout<<"x2 �r"<< x2<<endl;
}
	return 0;

}

#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
int a, b, c, p, q, x1, x2, uroten, svar;

cout << "Skriv värde för a som inte är 0" <<endl;
cin >> a;
cout << "Skriv värde för b" <<endl;
cin >> b;
cout << "Skriv värde för c" <<endl;
cin >> c;

if (a == 0){
cout << "A får inte vara 0"<<endl;
}
else {
p = b/a;
q = c/a;
uroten = (p / 2) * (p / 2) - q;
x1 = - (p/2) +  sqrt(uroten); 
x2 = - (p/2) - sqrt(uroten);

if (uroten > 0){
	cout << "2 reella lösningar"<<endl;
}
else if( uroten == 0){
	cout << "1 reell lösning"<<endl;
}
else if (uroten<0){
cout << "0 reella lösningar" <<endl;
}


cout << "X1 är"<<x1<<endl;
cout<<"x2 är"<< x2<<endl;
}
	return 0;

}

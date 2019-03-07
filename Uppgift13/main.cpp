#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

int tal, tal2, tal3;

cout <<"Skriv ett tal"<<endl;
cin >> tal;
cout <<"Vilket tal vill du räkna ner till"<<endl;
cin >> tal2;
cout <<"Hur stora hopp?" <<endl;
cin >> tal3;

while (tal >= tal2){
cout <<tal << endl;
tal = tal - tal3;
}

	return 0;
}

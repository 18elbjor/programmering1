#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int tal, tal2, tal3;
	
	cout <<"Skriv ett tal"<<endl;
	cin >> tal;
	tal3 = 0;
	while(tal3 <= 12){
 tal3 ++;
 tal2 = tal * tal3;
 cout <<tal2 <<endl;


}

	
	return 0;
}

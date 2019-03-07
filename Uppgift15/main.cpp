#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int tal;
	
	cout <<"Skriv ett tal" <<endl;
	cin >> tal;
	for(int i = tal;  i >= 0; i--){
		
		cout << i <<endl;
		
	}
	
	return 0;
}

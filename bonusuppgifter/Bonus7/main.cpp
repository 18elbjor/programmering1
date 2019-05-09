#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {

int tal1, tal2, tal3;


cout<<"skriv ett nummer mellan 1 - 10: " << endl;

cin>> tal1;

cout << "hur många rader ska det vara";
cin >> tal3 ;

tal1 = tal1 - 2;



for(int a = 1; a <=tal3; a++ ){
tal2 = 0;
tal1++;	
	
if( tal1 == 10 ){
	
tal1 = tal1 - 10;	

}	
	
	
for(int x = 0; x <= 9; x++ ){



if( tal2 > tal1 or tal2 < tal1 ){
	
cout<<"*";	

tal2++;

} else{
	
	
cout<<"_";	

tal2++;
	
}
	
}

cout<<endl;
	
}


	return 0;
}


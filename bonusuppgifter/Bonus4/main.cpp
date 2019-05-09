#include <iostream>

using namespace std;

int main() {
	float tal1, tal2, testned, testupp;
	
	cout << "Säg ett nummer" << endl;
	cin >> tal1;
	cout << "Säg ett till nummer" << endl;
	cin >> tal2;
	
	testned = tal2 - 10;
	testupp = tal2 + 10;
	
	if(tal1 == tal2)
	{
		cout << "Grattis!";
	} else if(tal1 < tal2 and tal1 >= testned) {
		cout << "Close but no cigar!";
	} else if(tal1 > tal2 and tal1 <= testupp) {
		cout << "Close but no cigar!";
	} else {
		cout << "Not even close!";
	}
	
	return 0;
}

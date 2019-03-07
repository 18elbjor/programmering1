#include <iostream>

using namespace std;

int main() {

    int tal1, tal2, tal3;

    cout << "Skriv in ett värde mellan 10 och 20" << endl;
    cin >> tal1;
    cout << "Till vilket tal ska den räkna ner" << endl;
    cin >> tal2;
    cout << "Hur stora hopp ska det vara" << endl;
    cin >> tal3;

for(tal1 = tal1; tal1 > 20 or tal1 < 10;){

    cout << "FEL";
}

    for(int n = tal1;  n > tal2;){

        cout << n << endl;
        n = n - tal3;
    }




    return 0;
}

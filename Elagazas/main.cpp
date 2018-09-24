#include <iostream>

using namespace std;

int main()
{
    int a = 12;
    int b = 8;
    int c = 5;
    int K = a + b + c;

    if( (b + c) <= a){
        cout << "Nem haromszog!" << endl;
    }else {
        cout << "Jo haromszog!" << endl;
    }

    cout << "Kerulet: " << K << endl;
}

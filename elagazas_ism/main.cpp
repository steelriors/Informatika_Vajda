#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    string name, gender;
    int age, rnd;

    cout << "Kerem adja meg a nevét: " << endl;
    cin >> name;

    cout << "Kerem adja meg az eletkorat: " << endl;
    cin >> age;

    cout << "Kerem adja meg a nemet(fiu/lany): " << endl;
    cin >> gender;

    cout << " " << endl;

    //Nagykoru vagy sem?
    if(age<18)
    {
        cout << "A felhasznalo kiskoru,";
    }else
        cout << "A felhasznalo nagykoru,";

    srand((unsigned)time(0));
    rnd = rand() % 100;
    cout << " a szerencseszama pedig: " << rnd << endl;
}

#include <iostream>

using namespace std;
/*
int main()
{
//FELADAT: �RJUNK PROGRAMOT, AMI MEGN�ZI,
//HOGY A H�ROMSZ�G VAL�BAN KIRAJZOLHAT� E!
    int a,b,c;
    cout << "Kerem az 'a' oldalt: " << endl;
    cin >> a;
    cout << "Kerem a 'b' oldalt: " << endl;
    cin >> b;
    cout << "Kerem a 'c' oldalt: " << endl;
    cin >> c;

    if ((a+b)>c && (a+c)>b && (b+c)>a)
    {
        cout << "Kirajzolhato a haromszog" << endl;
    }else
        cout << "Ez nem haromszog" << endl;
}

*/


/* FELADAT:
�RJ EGY PROGRAMOT, AMI BEK�RI A FELHASZN�L�T�L
EGY T�GLALAP K�T OLDAL�T, MAJD KISZ�MOLJA A
KER�LET�T �S TER�LET�T, VALAMINT KI IS �RJA AZ
EREDM�NYT!*/
int main()
{
    int a,b,K,T;
    cout << "Kerem az 'a' oldalt: " << endl;
    cin >> a;
    cout << "Kerem a 'b' oldalt: " << endl;
    cin >> b;

    K = (a+b)*2;
    T = a*b;

    //KIIRAT�S
    cout << "Kerulet: " << K << endl;
    cout << "Terulet: " << T << endl;
}





#include <iostream>

using namespace std;
/*
int main()
{
//FELADAT: ÍRJUNK PROGRAMOT, AMI MEGNÉZI,
//HOGY A HÁROMSZÖG VALÓBAN KIRAJZOLHATÓ E!
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
ÍRJ EGY PROGRAMOT, AMI BEKÉRI A FELHASZNÁLÓTÓL
EGY TÉGLALAP KÉT OLDALÁT, MAJD KISZÁMOLJA A
KERÜLETÉT ÉS TERÜLETÉT, VALAMINT KI IS ÍRJA AZ
EREDMÉNYT!*/
int main()
{
    int a,b,K,T;
    cout << "Kerem az 'a' oldalt: " << endl;
    cin >> a;
    cout << "Kerem a 'b' oldalt: " << endl;
    cin >> b;

    K = (a+b)*2;
    T = a*b;

    //KIIRATÁS
    cout << "Kerulet: " << K << endl;
    cout << "Terulet: " << T << endl;
}





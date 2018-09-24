#include <iostream>

using namespace std;

int main()
{
    //TÉGLALAP 2 OLDALA (a és b)
    //Adjuk meg a kerületét és területét
    int a,b;

    cout << "Add meg az 'a' oldalt: " << endl;
    cin >> a;
    cout << "Add meg az 'b' oldalt: " << endl;
    cin >> b;

    int K = (a + b) * 2;
    int T = a * b;

    cout << "KERULET: " << K << endl;
    cout << "TERULET: " << T << endl;










    /* FELADAT 1.

    //Háromszög három oldala:
    int a = 4;
    int b = 3;
    int c = 6;

    //Elágazás: kirajzolható e a háromszög?
    if((a+b) > c && (a+c) > b && (b+c) > a)
    {
        cout << "Kirajzolhato a haromszog!" << endl;
    }
    else
        cout << "Nem kirajzolhato!" << endl;*/
}

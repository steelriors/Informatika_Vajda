#include <iostream>

using namespace std;

//A PROGRAM ÍRJA KI 1-10ig a számokat.
int main () {

   for( int i = 1; i < 11; i++) {
      cout << "value of i: " << i << endl;
   }

//MOST ÍRJUK KI CSAK A PÁROS SZÁMOKAT
   for( int i = 2; i < 11; i+=2) {
      cout << i << endl;
   }
}

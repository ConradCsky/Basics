#include <iostream>

using namespace std;

int main()
{
    typedef unsigned long long duze;
    typedef int calkowite;

    calkowite cena_paliwa;

    duze  cena_samochodu, silnik = 500000;

    cena_samochodu = 3000000;

    cout << "Wartosc samochodu: " << cena_samochodu << endl;

    duze karoseria = 1000000;

    cout << "Cena karoserii: " << karoseria << endl;

    return 0;
}

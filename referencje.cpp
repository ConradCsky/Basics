#include <iostream>

using namespace std;

int main()
{
    int olowki = 25, kredki = 30;
    int &ilosc_olowki = olowki;

    cout << "Wartosc zmiennej olowki = " << olowki << endl;
    cout << "Adres zmiennej olowki = " << &olowki << endl;

    cout << "Wartosc zmiennej ref. ilosc_olowki = " << ilosc_olowki << endl;
    cout << "Adres zmiennej  ref. ilosc_olowki = " << &ilosc_olowki << endl;

    ilosc_olowki = 333;

    cout << "Wartosc zmiennej olowki = " << olowki << endl;
    cout << "Adres zmiennej olowki = " << &olowki << endl;

    // zmienna referencyjna nie moze wskazywac na inny adres
    //int &ilosc_olowki = kredki;


    return 0;
}

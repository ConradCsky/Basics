
#include <iostream>

using namespace std;

int main()
{
   int cena_1 = 10, cena_2 = 100;
   int *wskaznik_cena;

   wskaznik_cena = &cena_1;

    cout << "Wartosc zmiennej cena_1 = " << cena_1 << endl;
    cout << "Adres komorki zmiennej cena_1 = " << &cena_1 << endl;
    cout << "Wartosc wskaznika = " << *wskaznik_cena << endl;
    cout << "Adres komorki wskaznik_cena = " << wskaznik_cena << endl;
    cout << "Wartosc zmiennej cena_2 = " << cena_2 << endl;
    cout << "Adres komorki zmiennej cena_2 = " << &cena_2 << endl << endl;

    cena_1 = 22;

    cout << "Wartosc zmiennej cena_1 = " << cena_1 << endl;
    cout << "Adres komorki zmiennej cena_1 = " << &cena_1 << endl;
    cout << "Wartosc wskaznika = " << *wskaznik_cena << endl;
    cout << "Adres komorki wskaznik_cena = " << wskaznik_cena << endl << endl;

    *wskaznik_cena = 33;

    cout << "Wartosc zmiennej cena_1 = " << cena_1 << endl;
    cout << "Adres komorki zmiennej cena_1 = " << &cena_1 << endl;
    cout << "Wartosc wskaznika = " << *wskaznik_cena << endl;
    cout << "Adres komorki wskaznik_cena = " << wskaznik_cena << endl << endl;

    wskaznik_cena = &cena_2;

    cout << "Wartosc zmiennej cena_2 = " << cena_2 << endl;
    cout << "Adres komorki zmiennej cena_2 = " << &cena_2 << endl;
    cout << "Wartosc wskaznika = " << *wskaznik_cena << endl;
    cout << "Adres komorki wskaznik_cena = " << wskaznik_cena << endl;



    return 0;
}

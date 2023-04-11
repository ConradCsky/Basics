#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie = "Konrad ", nazwisko = "Czarnomski", osoba;
    int wiek = 36;

    cout << "Pan " << imie << nazwisko << " wiek " << wiek << endl;

    osoba = imie + nazwisko;

    cout << "Pan: " << osoba << " wiek: " << wiek << endl;

    return 0;
}

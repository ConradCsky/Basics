#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie;
    int wiek;

    cout << "Podaj swoje imie : ";
    cin >> imie;

    cout << "Podaj swoj wiek : ";
    cin >> wiek;

    //sprawdzanie poprawnoœæ danych
    cout << "Dane poprawne? : " << cin.good() << endl;
    cout << "Dane niepoprawne? : " << cin.fail() << endl;

    cout << "Witaj " << imie << " w kursie C++." << endl;
    cout << imie << " ma " << wiek << " lat." << endl;

    return 0;
}

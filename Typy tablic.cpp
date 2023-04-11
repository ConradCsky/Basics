#include <iostream>
#include <string>

using namespace std;

int main()
{

    int liczby[5] = {1, 2, 3, 4, 5};
    double ceny[3] = {2.59, 3.49, 132.99};

    //'\0' - null, wskazuje, ¿e ju¿ dalej nic w tablicy nie ma
    char literki[5] = {'k', 'u', 'r', 's', '\0'};

    string  imiona[4] = {"ala", "ola", "ewa", "jola"};
    char imie[6] = "Tomek";

    cout << liczby[3] << endl;
    cout << ceny[2] << endl;
    cout << literki << endl;
    cout << imiona[3] << endl;
    cout << imie[2] << endl;

    return 0;
}

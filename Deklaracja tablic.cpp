#include <iostream>
#include <string>

using namespace std;

int main()
{
    //int liczba0 = 1, liczba1 = 2, liczba2 = 3, liczba3 = 4, liczba4 = 5;

    //[x] - wieloœæ tablicy, iloœæ elementów, {} - zerowanie tablicy, zawsze dobrze jest wyzerowaæ tablicê
    int liczby[5]={0};

    //!! nazwa naszej tablicy wskazuje na adres w pamiêci, pod którym jest zapisany pierwszy element w tablicy, czyli [0]
    //odwo³ujê siê do tablicy, do indeksu i wskazujê jego wartoœæ, jak przy zmiennej
    liczby[3] = 4;
    liczby[0] = 1;
    liczby[1] = 2;
    liczby[2] = 3;
    liczby[4] = 5;
    liczby[2] = 55;

    cout << liczby[2] << endl;

    return 0;
}

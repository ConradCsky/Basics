#include <iostream>
#include <string>

using namespace std;

int main()
{
    //int liczba0 = 1, liczba1 = 2, liczba2 = 3, liczba3 = 4, liczba4 = 5;

    //[x] - wielo�� tablicy, ilo�� element�w, {} - zerowanie tablicy, zawsze dobrze jest wyzerowa� tablic�
    int liczby[5]={0};

    //!! nazwa naszej tablicy wskazuje na adres w pami�ci, pod kt�rym jest zapisany pierwszy element w tablicy, czyli [0]
    //odwo�uj� si� do tablicy, do indeksu i wskazuj� jego warto��, jak przy zmiennej
    liczby[3] = 4;
    liczby[0] = 1;
    liczby[1] = 2;
    liczby[2] = 3;
    liczby[4] = 5;
    liczby[2] = 55;

    cout << liczby[2] << endl;

    return 0;
}

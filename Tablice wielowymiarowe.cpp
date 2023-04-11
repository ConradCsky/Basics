#include <iostream>
#include <string>

using namespace std;

int main()
{
    //int produkty[3][5] = {};
    //ta tablica ma dwa wymiary: wiersze i kolumny
    int produkty[3][5] = {
        {1, 10, 5, 258, 32},
        {2, 20, 8, 25, 69},
        {3, 33, 23, 4, 147}
        };

    cout << produkty[2][4] << endl;

    return 0;
}

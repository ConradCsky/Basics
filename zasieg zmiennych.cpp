#include <iostream>

using namespace std;

int jablko = 1010;
int gruszka = 22;

int sklep()
{
       cout << jablko << endl;
}

int main()
{
    cout << jablko << endl;

    {
        gruszka = 33;
        cout << jablko << endl;
        cout << gruszka << endl;
    }

    cout << gruszka << endl;
    cout << jablko << endl;
    return 0;
}

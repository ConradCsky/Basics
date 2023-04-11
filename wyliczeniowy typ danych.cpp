#include <iostream>

using namespace std;

enum polka{
        jablka = 10,
        gruszki,
        banany,
        kawa = 30,
        herbata,
        sok
};

int main()
{
    polka towary;

    towary = sok;
    cout << "Towary: " << towary << endl;
    return 0;
}

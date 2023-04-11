
#include <iostream>

using namespace std;

int main()
{
    int woda = 10, kawa = 20, cukier = 30;
    int *wsk_woda = &woda, *wsk_kawa = &kawa, *wsk_cukier = &cukier;

    cout << " Woda + kawa = " << *wsk_woda + *wsk_kawa << endl;

    cout << " Cukier - kawa = " << *wsk_cukier - *wsk_kawa << endl;

    cout << " Woda * kawa * cukier = " << *wsk_woda * *wsk_kawa * *wsk_cukier << endl;

    return 0;
}

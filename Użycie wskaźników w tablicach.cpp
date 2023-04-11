#include <iostream>
#include <string>

using namespace std;

int main()
{

    string slodycze[3] = {"czekolada", "ciastko", "dropsy"};
    string *wsk_slodycze;

    wsk_slodycze = slodycze;

    //wsk_slodycze++;

    cout << *(wsk_slodycze+2) << endl;

    return 0;
}

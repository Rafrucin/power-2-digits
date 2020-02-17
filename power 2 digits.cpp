//SPOJ submission 22976345 (CPP)plaintext list.Status: AC, problem FCTRL3, contest SPOJPL.By ravruc(ravruc), 2019 - 01 - 01 17 : 49 : 57.
#include <iostream>

using namespace std;



int main()
{
    long int prob, liczba;
    cin >> prob;

    for (int i = 1; i <= prob; i++)
    {
        cin >> liczba;
        if (liczba == 0) cout << 0 << " " << 1 << endl;
        if (liczba == 1) cout << 0 << " " << 1 << endl;
        if (liczba == 2) cout << 0 << " " << 2 << endl;
        if (liczba == 3) cout << 0 << " " << 6 << endl;
        if (liczba == 4) cout << 2 << " " << 4 << endl;
        if (liczba == 5) cout << 2 << " " << 0 << endl;
        if (liczba == 6) cout << 2 << " " << 0 << endl;
        if (liczba == 7) cout << 4 << " " << 0 << endl;
        if (liczba == 8) cout << 2 << " " << 0 << endl;
        if (liczba == 9) cout << 8 << " " << 0 << endl;
        if (liczba >= 10) cout << 0 << " " << 0 << endl;

    }
    return 0;
}
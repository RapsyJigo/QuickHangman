#include <iostream>
#include "RandomWord.h"
#include "ParsareCuvant.h"
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    /*
        string cuvant = RandomWord();
        cout << cuvant << endl;
        string parsat = EliminaLitera(cuvant);
        cout << parsat << endl;
        cout << ReadaugaLitera(parsat, 'i', cuvant);
    */
    int dificultate;
    int vieti;
    cout << "Alege dificultatea intre 1 si 5" << endl;
    cin >> dificultate;
    cout << "Ai " << 6 - dificultate << " vieti" << endl;
    vieti = 6 - dificultate;

    string cuvant = RandomWord();

    string parsat = EliminaLitera(cuvant);

    cout << "Cuvantul tau este:" << endl;
    cout << parsat << endl;

    while (vieti > 0)
    {
        char litera;
        cout << endl;
        cin >> litera;

        string dupa_ghicire = ReadaugaLitera(parsat, litera, cuvant);
        cout << dupa_ghicire << endl;
        if (count(dupa_ghicire.begin(), dupa_ghicire.end(), '*') == count(parsat.begin(), parsat.end(), '*'))
        {
            vieti --;
            if (vieti <= 0)
            {
                cout << "Ai pierdut!";
                return 0;
            }
            cout << "Mai ai " << vieti << " vieti" << endl;
        }
        parsat = dupa_ghicire;

        if (parsat == cuvant)
        {
            cout << "Ai castigat!";
            return 0;
        }
    }


    return 0;
}

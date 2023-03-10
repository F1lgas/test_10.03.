// test_10.03.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

/*
3.	C++ Na vstupu je celé číslo n a n-prvková posloupnost znaků.
    Obsahuje posloupnost alespoň tři znaky ležící v intervalu ‘8’..’P’?
    Použijte logickou proměnnou pro zkrácení běhu programu.
    Ke každému načtenému znaku vypište i jeho ASCII kód a pokud je znak velké písmeno, tak i znak, který mu předchází a příslušné malé písmeno.
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    char pole[99];
    int pocet = 0;
    bool konec = false;

    cout << "Zadej N: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Zadej " << i + 1 << ". cislo: " << endl;
        cin >> pole[i];
        cout << "ascii: " << (int)pole[i] << endl;

        if (pole[i] >= 'A' && pole[i] <= 'Z')
        {
            cout << "predchozi: " << (char)(pole[i] - 1) << endl;
            cout << "male: " << (char)(pole[i] + 32) << endl;
        }

        cout << endl;

        if (pole[i] >= '8' && pole[i] <= 'P')
        {
            pocet++;
            if (pocet >= 3)
            {
                konec = true;
            }
        }

        if (konec == true)
        {
            cout << "Program byl predbezne ukoncen!" << endl;
            break;
        }
    }
}
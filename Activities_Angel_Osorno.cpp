#include <iostream>
#include "Primer_Parcial.h"
#include "Segundo_Parcial.h"

using namespace std;

int main()
{
    int menu;
    bool salir = true;
    do
    {
        system("cls");
        cout << " A que parcial desea ir" << endl;
        cout << "----- 1) Primer Parcial -----" << endl;
        cout << "----- 2) Segundo Parcial -----" << endl;
        cout << "----- 3) Tercer Parcial -----" << endl;
        cout << "----- 4) Cuarto Parcial -----" << endl;
        cout << "--------- 5) Salir ----------" << endl;
            cin >> menu;
        switch (menu)
        {
        case 1:
            Menu1P();
            break;
        case 2:
            Menu2P();
            break;
        case 3:

            break;
        case 4:
    
            break;
        case 5: 
            salir = false;
            break;
        default:
            break;
        }
    } while (salir);
}
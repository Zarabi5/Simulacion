#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <conio.h>
#include <windows.h>

using namespace std;

void Titulos(string titulo)
{
    cout << titulo << endl;
}

void Inicio3()
{
    system("cls");
}

int main(void)
{
    int d1, d2;
    int i;
    
    system("cls");
    Titulos("Dados.cpp");
    Inicio3();
    
    srand(time(NULL));
    
    cout << "Los dados deben tener números iguales" << endl;
    cout << "# Tirada  d1  d2" << endl;
    
    i = 1;
    while (true)
    {
        d1 = 1 + rand() % 6;
        d2 = 1 + rand() % 6;
        
        cout << setw(4) << i << setw(8) << d1 << setw(4) << d2 << endl;
        
        if (d1 == d2)
        {
            break;
        }
        
        i++;
    }
    
    cout << "En " << i << " tiradas, los números son iguales" << endl << endl;
    
    cout << "Oprima una tecla ..." << endl;
    getch();
    
    cout << "\n# Tirada  d1  d2" << endl;
    
    i = 1;
    while (true)
    {
        d1 = 1 + rand() % 6;
        d2 = 1 + rand() % 6;
        
        cout << setw(4) << i << setw(8) << d1 << setw(4) << d2 << endl;
        
        if (d1 == 6 && d2 == 6)
        {
            break;
        }
        
        i++;
    }
    
    cout << "En " << i << " tiradas, ambos números son iguales a 6" << endl << endl;
    
    cout << "Proceso terminado. Oprima una tecla ....";
    getch();
    
    return 0;
}


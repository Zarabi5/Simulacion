solucion del codigo: # include <iostream>
# include <math.h>
# include <conio.h>
# include <stdlib.h>
# include <ctype.h>
# include <iomanip>
# include <string.h>
# include <windows.h>
# include <time.h>

using namespace std;

int main(void)
{
    int d1, d2;
    int i:
    system ("cls");  Titulos ("Dados.cpp");  Inicio3 ( ) ; 
    srand(time(NULL));
    cout << "Los dados numeros debe ser iguales " << endl;
    cout << "#Tirada d1  d2  " endl;
    
    i = 1;
    while ( 5 ==5 )
    {
          d1 = 1 + rand ( ) % 6;
          d2 = 1 + rand ( ) % 6;
          cout << setw(4) << i << setw(8) << d1
               << setw(4) << d2 << endl;
               if ( d1 == d2)
               { break; }
               i++;
    }
    cout  << "En " << i << "tiradas, son iguales"
          << endl; << endl;
    cout << "Oprima una tecla ..." << endl;     getch();
    
    
    cout << "\n#Tirada  d1  d2"  << endl; 
    i  = 1;
    while ( 1 == 1 )
    {    d1 = 1 + rand ( ) % 6;
          d2 = 1 + rand ( ) % 6;
          cout << setw(4) << i << setw(8) << d1
               << setw(4) << d2 << endl;
               if ( d1 == 6  && d2 == 6)
               { break; }
               i++;
    } 
    cout << "En " << i << "tiradas, son iguales a 6 "
    << endl << endl; 
    
    cout << "Proceso terminado. Oprima una tecla ....";
    getch();
    return (0);
    
}

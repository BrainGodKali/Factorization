#include <iostream>
using namespace std;

int main()
{
    int Factor;
    int Factorization = 1;
    int temp = 0;
    cin >> Factor;
    
    

    while( Factorization <= Factor )
    {

        Factor / Factorization == temp;

        if ( Factor % Factorization == 0 )
        {
       
            cout << Factorization << endl;
        }

        Factorization ++ ;
    }
    system("PAUSE");
    return 0;

}
#include <iostream>
using namespace std;

int main()
{
    int Factor = 0;
    int Factorization = 1;

    cout << "请输入想进行因式分解的值" << endl;
    cin >> Factor;

    while (Factorization <= Factor)
    {
        if (Factor % Factorization == 0)
        {

            cout << Factorization << endl;
        }

        Factorization++;
    }
    system("PAUSE");
    return 0;

}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i = 2;
    int contador= 1;
    int total = 0;
    while (contador > 0)
    {
        total = pow(i,contador++);
        cout << total<<endl;
    }
    return 0;
}


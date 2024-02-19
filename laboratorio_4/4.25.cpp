#include <iostream>
using namespace std;
int main()
{
    int lado;
    cout<<"Ingrese el lado del cuadrado: "; cin>>lado;
    cout<<endl;
    for(int i=1;i<=lado;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int x=1;x<=lado-2;x++)
    {
        cout<<"*";
        for(int i=1;i<=lado-2;i++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for(int i=1;i<=lado;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    return 0;
}

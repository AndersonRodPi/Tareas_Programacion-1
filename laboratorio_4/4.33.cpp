#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout <<"Ingrese el lado a :"; cin >>a;
    cout <<"Ingrese el lado b :"; cin >> b;
    cout <<"Ingrese el lado c :"; cin >> c;
    if(a<=0 || b<=0 || c<=0)
    {
        cout << "Los lados no forman parte de un triangulo recto"<<endl;
    }
    else
        cout<<"Los lados si pueden formar un triangulo recto"<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int base=0;
    int altura=0;
    int resul;


    cout<<"Este programa calcula el area de un triangulo"<<endl;
    cout<<"introduce la base del triangulo: "<<endl;

    cin>>base;

    cout<<"introduce la altura: "<<endl;

    cin>>altura;

    resul=(base*altura)/2;

    cout<<"el area del triangulo es: "<<resul;
    

    return 0;
}

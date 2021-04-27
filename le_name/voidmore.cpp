#include <iostream>

using namespace std;

float metry;

float ile_cali(float m)
{
    float cale=m*39.37;

    return cale;
    /**albo
     * return m*39.37;
     * */
}
float ile_jardow(float x);

void ile_mil(float m)//procedura nie zwraca(nie ma returna)
{
    cout<<"na mile: "<<m*0.0006213<<endl;
}

int main()
{
    cout<<"Podaj ile metrow: "; 
    cin>>metry;
    cout<<"Na cale: "<<ile_cali(metry)<<endl;
    cout<<"Na jardy: "<<ile_jardow(metry)<<endl;
    ile_mil(metry);//procedura
    return 0;
    cout<<"Zrobione";
}
float ile_jardow(float x)
{
    return x*1.0936;
}

/**
float ile_cali(float m)
typ zwracanej wartości nazwa_funkcji(typ_argumentu nazwa_argumentu_formalnego)
{
    return m*39.37;
}

void ile_cali(float m)
{
    cout<<"na cale: "<<m*39.37;
}
**/

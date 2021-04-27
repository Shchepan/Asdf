#include <iostream>

using namespace std;
int ile;
float srednia=0;

void srednia_obliczanie(int x, int y)
{
    
    cout<<"Twoja srednia to: "<<x/y<<endl;
}
int main()
{
cout<<"Podaj ile ocen: ";
cin>>ile;
cout<<"\nPodaj oceny:\n";

for (int i=0;i<ile;i++)
{
int k;
cin>>k;
srednia=srednia+k;
}

srednia_obliczanie(srednia, ile);

}

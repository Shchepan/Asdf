#include <iostream>

int main()
{
    int a;
    int b;
    int * ptr = &a;
    std::cout<<"Podaj liczbe : ";        std::cin>>a;
    std::cout<<"\nPodaj druga liczbe: "; std::cin>>b;
    std::cout<<"\nTwoje wielokrotnosci to: ";
    for (int i=0; i<b; i++)
    {
        std::cout<<*ptr * i<<std::endl;
    }
    
}
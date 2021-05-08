#include <iostream>
#include "side.h"

void Calculator::dodawanie()
{
std::cout<<"Podaj pierwsza liczbe: "; std::cin>>a;
std::cout<<"Podaj druga liczbe: "; std::cin>>b;
   a=a+b;
}

void Calculator::odejmowanie()
{
std::cout<<"Podaj pierwsza liczbe: "; std::cin>>a;
std::cout<<"Podaj druga liczbe: "; std::cin>>b;
 
   a=a-b;
}

void Calculator::dzielenie()
{
std::cout<<"Podaj pierwsza liczbe: "; std::cin>>a;
std::cout<<"Podaj druga liczbe: "; std::cin>>b;

if (a && b ==0)
{
std::cout<<"Nie dzielimy przez 0"<<std::endl;
exit(0);
      
}
a=a/b;
}

void Calculator::mnozenie()
{
std::cout<<"Podaj pierwsza liczbe: "; std::cin>>a;
std::cout<<"Podaj druga liczbe: "; std::cin>>b;
 a=a*b;
}
void Calculator::srednia_ar()
{
std::cout<<"Podaj pierwsza liczbe: "; std::cin>>a;
std::cout<<"Podaj druga liczbe: "; std::cin>>b;
   a=(a+b)/2;
}

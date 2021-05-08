#include <iostream>
#include "side.h"
int main()
{
int c;
 std::cout<<std::endl<<"Podaj co mam zrobic"<<std::endl<<"1:dodaj\n2:odjac\n3:podzielic\n4:pomnozyc\n5:srednia arytmetyczna\n";


   Calculator c1;



   std::cin>>c;
   switch(c)
   {
      case 1:
         c1.dodawanie();
         std::cout<<"Twoja suma wynosi: "<<c1.a<<std::endl;
      break;
      
      case 2:
         c1.odejmowanie();
         std::cout<<"Twoja roznica wynosi: "<<c1.a<<std::endl;
         break;
      case 3:
         c1.dzielenie(); 
         std::cout<<"Twoj wynik wynosi: "<<c1.a<<std::endl;
         break;
      case 4:
         c1.mnozenie();
         std::cout<<"Twoj wynik wynosi: "<<c1.a<<std::endl;
         break;
      case 5:
         c1.srednia_ar();
         std::cout<<"Twoja srednia wynosi: "<<c1.a<<std::endl;
         break;
   }

   return 0;
}

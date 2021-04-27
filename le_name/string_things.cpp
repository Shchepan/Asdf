#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
/**
 * "a" = łańcuch
 * 'a' = pojedyńczy znak
 * żeby cin stringa ze spacją trzba getline
**/
    /**
    //napis ze spacją
    string napis;
    cout<<"Podaj napis: ";
    getline(cin,napis);
    cout<<napis;
    **/

   /** 
    //łączenie stringów
   string jeden = "Ala ma ";
   string dwa = "kota";
   string trzy = jeden+dwa;
   cout<<trzy;
   **/

  /**
   * potrzeba <algorithm>
string napis = "Ala ma kota";
transform(napis.begin(),napis.end(),napis.begin(),::toupper);//toupper wszytskie litery są duże,tolower wszytkie małe
cout<<napis;
**/

/**
//konkretna pozycja danej części tekstu 
string napis= "Ala ma kota";
string szukaj= "kot";
size_t pozycja=napis.find(szukaj);

if (pozycja!=string::npos)
cout<<"Znaleziono na pozycji: "<<pozycja;
else cout<<"Nie znaleziono!";
**/

/**
//kasowanie części napisu
string napis="Wyrewolwerowany rewolwerowiec";
napis.erase(3,3);//od którego znaku zaczynamy, ile kasujemy
cout<<napis;
**/

/**
//wstawianie do stringa
string kot;
cout<<"Jak wabi sie kot Ali?";
cin>>kot;
string napis="Ala ma kota ";
napis.insert(11,kot);
cout<<napis;
**/


/**
//zamienianie znaków
string napis ="Ala ma kota";
napis.replace(4,2,"nie ma");//pozycja,ilość znków do zamienienia,znak do wstawienia
cout<<napis;
**/

//wyjęcie ze stringa
string napis="Ala ma kota";
string nowynapis = napis.substr(4,7);//pozycja,ile znaków
cout<<nowynapis;
    
    
    
    
    return 0;
}
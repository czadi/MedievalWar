#ifndef KARTY_H
#define KARTY_H
#include <string>


class Karty
{

    int atak;
    int obrona;
    std::string pozycja;
    std::string nazwa;
public:
    /*void wyswietl()
    {
        cout<<atak<<endl;
    }*/
    Karty(int a,int o ,const std::string p ,const std::string n);




};
#endif // GRACZ_H

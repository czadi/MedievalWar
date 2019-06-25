#include "Gracz.h"
#include "Piechur.h"
#include "Rycerz.h"
#include "Lucznik.h"
#include "Kusznik.h"
#include "Balista.h"
#include "Trebusz.h"
#include "Karty.h"
#include <vector>
#include <cstdio>
#include <iostream>
using namespace std;

void Gracz::ustaw_karty()
{
    for(int i=1; i<=10;i++)
    {
        deck.push_back(Piechur());
    }
    for(int i=1; i<=5;i++)
    {
        deck.push_back(Rycerz());
    }
    for(int i=1; i<=10;i++)
    {
        deck.push_back(Lucznik());
    }
    for(int i=1; i<=5;i++)
    {
        deck.push_back(Kusznik());
    }
    for(int i=1; i<=5;i++)
    {
        deck.push_back(Balista());
    }
    for(int i=1; i<=5;i++)
    {
        deck.push_back(Trebusz());
    }

    cout<<deck.size();
   /* vector<Karty>::iterator it;
   for( it=deck.begin(); it!=deck.end(); ++it )
   {
    cout<< *it;
   }*/
   //cout<<deck.at();

}



#include "iostream"
#include "color.h"

using namespace std;
/*Hádání tajného čísla*/
int main(int argc, char *argv[])
{
    system("chcp 65001>nul");
    int tajneCislo;
    int hracovoCislo;

    tajneCislo=rand()%5+1; //náhodné číslo od 1-5
    cout<<"Zadej svůj tip na tajné číslo: ";
    cin>>hracovoCislo;
    

    return 0;
}
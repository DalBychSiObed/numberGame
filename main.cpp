#include "iostream"
#include "color.h"
#include "ctime"

using namespace std;
/*Hádání tajného čísla*/
int main(int argc, char *argv[])
{
    system("chcp 65001>nul");
    srand(time(0));
    int tajneCislo;
    int hracovoCislo;

    tajneCislo=rand()%5+1; //náhodné číslo od 1-5
    cout<<"Zadej svůj tip na tajné číslo: ";
    cin>>hracovoCislo;
    
    if (tajneCislo==hracovoCislo)
    {
        cout<<GREEN<<"Skvělé! Uhodl jsi číslo!"<<RESET;
    }
    else{
        cout<<RED<<"Bohužel, číslo bylo "<<tajneCislo<<RESET;
    }
    cout<<"\nkonec hry"<<endl;
    

    return 0;
}

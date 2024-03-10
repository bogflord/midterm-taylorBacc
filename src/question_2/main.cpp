#include"question2.h"
#include<iostream>

using std::cout; using std::cin;

int main()
{
    char option = 'y';

    do
    {
        if(toupper(option)=='Y')
        {
            roll_die();
            cout<<"You rolled a: "<<roll_die()<<"\nWould you like to roll again?(Y/N): ";
            cin>>option;
        }
        else
        {
            cout<<"Please only enter Y or N: ";
            cin>>option;
        }
        
    }while(toupper(option)!='N');
    
    cout<<"Thanks for playing!\n";

    return 0;
}
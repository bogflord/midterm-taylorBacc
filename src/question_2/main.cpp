#include"question2.h"
#include<iostream>

using std::cout; using std::cin;

int main()
{
    char option = 'y';

    cout<<"Do you want to roll the die?(Y to continue): ";
    cin>>option;

    while(toupper(option)=='Y')
    {
        roll_die();
        cout<<"You rolled a: "<<roll_die()<<"\nWould you like to roll again?(Y to continue): ";
        cin>>option;
    }
    
    cout<<"Thanks for playing!\n";

    return 0;
}
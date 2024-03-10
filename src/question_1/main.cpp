#include<iostream>
#include"question1.h"
#include<string>

using std::cout; using std::cin;using std::string;

int main()
{
    char option='y';
    auto c = 0.0;

    do
    {
        if(toupper(option)=='Y')
        {
            cout<<"Enter the temperature in Celsius to be converted to Fahrenheit: ";
            cin>>c;
            cout<<c<<"C in Fahrenheit is "<<get_fahrenheit(c)<<"F\nContinue?(Y/N)";
            cin>>option;
        }
        else
        {
            cout<<"Please only enter Y or N: ";
            cin>>option;
        }

    }while(toupper(option) != 'N');

    cout<<"Exiting application.";

    return 0;
}
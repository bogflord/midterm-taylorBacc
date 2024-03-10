#include"question3.h"
#include<iostream>
#include<string>

using std::string; using std::cin; using std::cout;

int main()
{
    auto option = 'y';
    string user_input;

    do{
        if(toupper(option)=='Y')
        {
            cout<<"Please enter a string to check: ";
            cin>>user_input;

            auto status = is_palindrome(user_input);

            if(status==1)
            {
                cout<<user_input<<" is a palindrome!\nResult: True\n";
            }
            else
            {
                cout<<user_input<<" is not a palindrome.\nResult: False\n";
            }
            cout<<"Would you like to try another?(Y/N): ";
            cin>>option;
        }
        else
        {
            cout<<"\nPlease only enter Y or N: ";
            cin>>option;
        }

    }while(toupper(option)!='N');

    cout<<"Exiting application.";

    return 0;
}
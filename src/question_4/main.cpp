#include<iostream>
#include"question4.h"

using std::cout; using std::cin;
int main()
{
    auto option = 'y';
    auto user_num = 0;



    do
    {
        if(toupper(option)=='Y' && !std::cin.fail())
        {
            cout<<"Enter a number from 1-10: ";
            cin>>user_num;
            

            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout<<"Non-numeric input. Please only select from 1 to 10.\n";
            }
            else if(user_num >= 1 && user_num <= 10)
            {
                std::string sequence = get_factorial_sequence(user_num);
                cout<<"The factorial sequence of "<<user_num<<" is:\n"<<sequence<<"\n";
                cout<<"Continue?(Y/N): ";
                cin>>option;
            }
            else
            {
                cout<<"Number out of range. Please only select from 1 to 10.\n";
            }

        }
        else
        {
            cout<<"Please only enter Y or N: ";
            cin>>option;
        }
    } while (toupper(option)!='N');
    


    return 0;
}
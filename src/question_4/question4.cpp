#include"question4.h"
#include<string>

using std::string; using std::to_string;
//
bool test_config()
{
    return true;
}

std::string get_factorial_sequence(int num)
{
    string str;
    auto total = 1;

    for(auto i = 1; i <= num; i++)
    {
        total = total * i;
        if(i<num)
        {
            str += to_string(i) + 'x';
        }
        else
        {
            str += to_string(i) + '=' + to_string(total);
        }
    }

    return str;
}
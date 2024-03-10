#include "question3.h"

using std::string;

bool test_config()
{
    return true;
}

bool is_palindrome(const string& str)
{
    auto i = 1;
    string rev_str;
    
    for(auto ch: str)
    {
        rev_str.append(1, str[str.size()-i]);

        i++;
    }

    if(rev_str==str)
    {
        return true;
    }
    else
    {
        return false;
    }
}
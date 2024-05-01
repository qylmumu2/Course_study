#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << isalnum('A') << endl;
    cout << isalnum('e') << endl;
    cout << isalnum('1') << endl;
    cout << isalnum('^') << endl;
    cout << "--------------------" << endl;
    cout << isalpha('A') << endl;
    cout << isalpha('e') << endl;
    cout << isalpha('1') << endl;
    cout << isalpha('^') << endl;
    cout << "--------------------" << endl;
    cout << isdigit('A') << endl;
    cout << isdigit('e') << endl;
    cout << isdigit('1') << endl;
    cout << isdigit('^') << endl;

    cout << "isblank " << endl;
    string msg{"HLLLLeEEEllo qyl yyyyy!"};
    int blankNumber{0};
    for (auto var : msg)
    {
        if (isblank(var))
        {
            blankNumber++;
        }
    }

    cout << isupper('A') << endl;
    cout << isupper('e') << endl;
    cout << isupper('1') << endl;
    cout << isupper('^') << endl;
    cout << "-----------------" << endl;
    cout << islower('A') << endl;
    cout << islower('e') << endl;
    cout << islower('1') << endl;
    cout << islower('^') << endl;
    cout << endl;

    for(auto &var : msg)
    {
         var = toupper(var);
    }
    cout << msg <<endl;
    for (size_t i = 0; i < msg.size(); i++)
    {
        msg[i] = tolower(msg[i]);
    }
    cout << msg <<endl;

    return 0;
}

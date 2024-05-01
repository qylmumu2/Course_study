#include <iostream>
#include <string>
using namespace std;
char encrypt(const char &parm)
{
    return parm - 13;
}
char decrypt(const char &papm)
{
    return papm + 13;
}
void change(string &msg, char (*callbackFunction)(const char &parm))
{
    for (size_t i = 0; i < msg.size(); i++)
    {
        msg[i] = callbackFunction(msg[i]);
    }
}

int main(int argc, char const *argv[])
{
    string msg{"qylqyl"};
    change(msg, encrypt);
    cout << "msg: " << msg << endl;


    change(msg, decrypt);
    cout << "msg: " << msg << endl;

    return 0;
}

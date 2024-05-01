#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string h{"hello"};
    string y{"qyl"};
    string hello{h + " " + y};
    cout << hello << endl;

    string hello2(y.append("qylqyl", 2, 3));
    cout << hello2 << endl;

    cout << hello2.size() << endl;
    cout << hello2.capacity() << endl;

    for (auto var : hello2)
    {
        cout << var << " " ;
    }
    cout << endl;
    for (size_t i = 0; i < hello2.size(); i++)
    {
        cout << hello2.at(i)<< " " << endl;
    }

    cout << hello2.front() << endl;
    cout << hello2.back() << endl;

    if (hello2.find('y') != string::npos)
    {
        cout << "get position" << hello2.find('y') << endl;
    }
    size_t pos{hello2.find('l')};
    /* 方法一
    for (size_t i = pos; i < hello2.size(); i = pos)
    {
        pos = hello2.find('l', pos + 1);
        cout << i << endl;

    }
    */
   

    /*方法二
    for (size_t i = 0; i < hello2.size() ; i++)
    {
        if (hello2[i] == 'l')
        {
            std::cout << "Character '" << "l" << "' found at index: " << i << std::endl;
        }
    }
    */
    /*方法四*/
    pos = hello2.find('l');
    while (pos != string::npos)
    {
         std::cout << "Character '" << "l" << "' found at index pos: " << pos << std::endl;
         pos = hello2.find('l', pos + 1);
    }
    

    return 0;
}

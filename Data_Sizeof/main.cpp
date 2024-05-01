#include <iostream>
// #include <string>
using namespace std;

int main(int args, char *argv[])
{
    // 注释
    //    int x{0};
    //    cout << x << endl;

    //    auto value{12ll};
    //    cout << "valetype: " << sizeof(value) << endl;
    //    auto value1{12ul};
    //    cout << "valetype: " << sizeof(value1) << endl;
    //    cout << "unsigned long: \t"  << sizeof(unsigned long);

    //    return 0;

    int a{5};
    int b{6};
    int aAndb{a & b};
    cout << "a & b:  " << aAndb << endl;
    int aORb{a | b};
    cout << "a & b:  " << aORb << endl;

    int left = (a << b);
    int right = (a >> b);
    cout << "left " << left << endl;
    cout << "right " << right << endl;
}
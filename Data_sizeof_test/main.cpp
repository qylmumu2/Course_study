#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // 对象一个类型
    int x{0};
    cout << sizeof(x) << endl;
    cout << "short  " << sizeof(short) << endl;
    cout << "unsiged short " << sizeof(unsigned short) << endl;
    cout << "Intger  " << sizeof(int) << endl;
    cout << " untsiged Intger  " << sizeof(unsigned int) << endl;
    cout << "Long  " << sizeof(long) << endl;
    cout << "Long int " << sizeof(long int) << endl;
    cout << "unsiged Long  " << sizeof(unsigned long) << endl;
    cout << "Long Long  " << sizeof(long long) << endl;

    cout << "Float  " << sizeof(float) << endl;
    cout << "Double  " << sizeof(double) << endl;

    cout << "----------------------------------------------------" << endl;
    cout << "Intger  " << sizeof(int) << endl;
    cout << "long int  " << sizeof(long int) << endl;
    cout << "Char " << sizeof(char) << endl;
    cout << "Bool  " << sizeof(bool) << endl;
    cout << "Float  " << sizeof(float) << endl;
    cout << "Double  " << sizeof(double) << endl;
    cout << "Long  " << sizeof(long) << endl;
    cout << "Long Long  " << sizeof(long long) << endl;
    cout << "unsiged Long  " << sizeof(unsigned long) << endl;
    
    
    cout << "Long Double  " << sizeof(long double) << endl;

    cout << "Unsigned long " << sizeof(unsigned long) << endl;
    cout << "Size_t " << sizeof(size_t) << endl;

    cout << "Bool*  " << sizeof(bool *) << endl;
    cout << "Float*  " << sizeof(float *) << endl;
    cout << "Double*  " << sizeof(double *) << endl;
    cout << "Long*  " << sizeof(long *) << endl;

    auto value1{12};  // int
    auto value2{2.4}; // double

    cout << "Int " << sizeof(value1) << endl;
    cout << "Double " << sizeof(value2) << endl;

    auto value3{123ll};
    auto value4{1.2f};
    auto value5{123ul}; // unsigned long
    auto value6{1.3l};

    cout << "Long Long " << sizeof(value3) << endl;
    cout << "Float " << sizeof(value4) << endl;
    cout << "Unsigned Long " << sizeof(value5) << endl;
    cout << "Long Double " << sizeof(value6) << endl;

    cout << "----- yz ------" << endl;
}
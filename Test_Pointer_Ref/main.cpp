#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double value{13};
    double &refValue{value};
    double *pValue{&value};

    cout << pValue << endl;
    cout << &refValue << endl;
    cout << &value << endl;
    cout << "value: " << value << "    "
         << "pointer: " << *pValue << "   "
         << "ref: " << refValue << endl;

    *pValue = 18.4;
    cout << "value: " << value << "    "
         << "pointer: " << *pValue << "   "
         << "ref: " << refValue << endl;

    refValue = 19.3;
    cout << "value: " << value << "    "
         << "pointer: " << *pValue << "   "
         << "ref: " << refValue << endl;

    // 引用可以改变其他引用的值
    cout << "value address: " << &value << ":" << pValue << endl;
    double otherValue = 1.8;
    refValue = otherValue;
    
    cout << "value: " << value << "    "
         << "pointer: " << *pValue << "   "
         << "ref: " << refValue <<"   " 
         << "pointer address: " << pValue << endl;


    cout << "---------------qyl------------" << endl;
    return 0;
}

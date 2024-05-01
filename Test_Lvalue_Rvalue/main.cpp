#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int a0{1};
    int a1{2};
    int a2{3};
    cout << "&ao: " << &a0 <<endl; 
    cout << "&a1: " << &a1 <<endl; 
    cout << "&a2: " << &a2 <<endl; 

    int x{0};
    x = a1 + a2;//(a1 + a2)地址不能获取 copy
    cout << x << endl;

    

    return 0;
}

#include <iostream>
using namespace std;

void addAge(int *const age)
{
    ++(*age);
    cout << "*age" << *age << "&" << age << endl; //age是一个指针变量，指的该变量本身的值； &age指的是该指针变量的地址
}

int main(int argc, char const *argv[])
{
    int age{45};
    // int* ptrAge = &age; 
    cout << "age: " << age << "&" << &age << endl; //这里的age是主函数中age变量的值，&age是该变量的地址
    
    // cout << "Address of ptrAge: " << &ptrAge << endl; 
    addAge(&age);

    cout << age << endl;
    return 0;
}

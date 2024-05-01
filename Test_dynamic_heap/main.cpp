#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // 栈上应用指针
    int number{50};
    int *pNumber = &number;
    /*
    不建议下边这样使用
    int *pNumber;
    pNumber= &number;
    */
    cout << number << ":" << *pNumber << endl;
    cout << &number << ":" << pNumber << endl;
    //在堆上
    int *pNumber0 = nullptr;   //nullptr空指针，C++中NULL为常量0，nullptr是一个指针，C中NULL为一个#define NULL ((void *)0)
    pNumber0 = new int;
    *pNumber0 = 13;

    cout << *pNumber0 << endl;

    delete pNumber0;
    // delete pNumber0;
    pNumber0 = nullptr;//如果不赋值为空，将不知道该指针还存在，但是不知道指向哪里


    cout << *pNumber0 << endl;



    cout << "-----qyl-----" << endl;
    return 0;
}

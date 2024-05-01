#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{
    auto fun = []{
        cout << "qweq" << endl;
    };

    int a{10};
    int b{20};
     
    auto fun0 = [a]{
        cout << a << endl;
    };

    auto fun1 = [&a, &b]{
        cout << a + 1 << endl;
        cout << b << endl;
        b++;
    };

    auto fun2 = [=]{
        cout << a << endl;
        cout << b << endl;
    };

    auto fun3 = [&]{
        cout << a << endl;
        cout << b <<endl;
        a++;
        b++;
    };
  
  

    fun();
    fun0();
    fun1();
    fun2();
    fun3();
    cout << b << endl;

    return 0;
}

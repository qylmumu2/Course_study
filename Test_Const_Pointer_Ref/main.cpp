#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{/*double n{1.4};//常量类型的值必须由常量指针初始化类似yu该处是const double 
    const double *p{&n};
    cout << "p address :" << p << endl;
    double m=1.9;
    *p = m;

    cout << "p address :" << p << endl;*/
    double n{1.4};//常量类型的值必须由常量指针初始化类似yu该处是const double 
    double *const p{&n};
    cout << "p address :" << p << endl;
    double m=1.9;
    *p = m;


    const double *const const_p{&n};
    

    double &ref_n{n};
    n = m;

    cout << "p address :" << p << endl;
    


    return 0;
}

#include <iostream>
using namespace std;

// 函数重载
int max(int a, int b)
{
    return (a > b) ? a : b;
}

double max(double a, double b)
{
    return (a > b) ? a : b;
}
int main(int argc, char const *argv[])
{
    int a{4};
    int b{8};
    double x{5.64};
    double y{7.89};

    cout << max(a, b) << endl;
    cout << max(x, y) << endl;

    return 0;
}

#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "abs(-19)" << abs(-19) << endl;
    cout << "min(5, 4)" << min(5, 4) << endl;
    cout << "max(5, 4)" << max(5, 4) << endl;
    cout << "floor(10.25)" << floor(10.25) << endl;
    cout << "round(10.5)" << round(10.5) << endl;
    cout << " pow(2, 4) " << pow(2, 4) << endl;
    cout << " sqrt(10000) " << sqrt(10000) << endl;
    cout << endl;

    cout << "exp(1)" << exp(1) << endl;
    cout << "exp2(1)" << exp2(1) << endl;
    cout << "exp2(2)" << exp2(2) << endl;

    cout << "log(20)" << log(20) << endl;
    cout << "log2(2)" << log2(8) << endl;

    
    srand(time(NULL));
    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        cout << rand() << endl;
        int sercet = rand() % 10;
        cout << sercet << endl;
    }

    return 0;
}

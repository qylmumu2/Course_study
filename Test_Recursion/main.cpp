#include <iostream>
using namespace std;

int factorial(int number)
{

    if (number == 1)
    {
        return 1;
    }

    if (number > 1)
    {
        long long result;
        return result = number * factorial(number - 1);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int a;
    cin >> a;
    cout << factorial(a) << endl;
    return 0;
}

#include<iostream>


using namespace std;

int main(int argc, char const *argv[])
{
    int a{}, b{};
    char op{' '};
    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    
    case '-':
        cout << a - b << endl;
        break;

    case '*':
        cout << a * b << endl;
        break;

    case '%':
        cout << a % b << endl;
        break;
    default:
        break;
    }
    return 0;
}
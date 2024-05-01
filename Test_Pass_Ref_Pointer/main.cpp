#include <iostream>
using namespace std;
void addTwo(int *const number)
{
    *number += 2;
}
void addThree(int &number)
{
    number += 3;
}

int main(int argc, char const *argv[])
{
    int number{13};
    cout << "number     " << number << "&number   " << &number << endl;
    addTwo(&number);
    cout << "number     " << number << "&number   " << &number << endl;

    cout << "number     " << number << "&number   " << &number << endl;
    addThree(number);
    cout << "number     " << number << "&number   " << &number << endl;

    cout << "---------------qyl----------------" << endl;
    return 0;
}

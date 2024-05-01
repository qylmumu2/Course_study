#include <iostream>
using namespace std;


//计算n(n-1)(n-2)....1
int fun( int number){
    int result{1};
    for (size_t i = 1; i < number ; i++)
    {
        result = result * i;
    }
    return result;
    
}


int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    cout << fun(num) << endl;
    return 0;
}

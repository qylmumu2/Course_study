#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // cout << sizeof(int *) << endl;
    // cout << sizeof(double *) << endl;

    // int intValue{13};
    // int *pNumber{&intValue};

    // int *pNumber{};
    // cout << *pNumber <<endl;
    //堆上的错误

    int *pNumber{new int{13}};
    // pNumber = new int(46);




    delete pNumber;//只是放弃控制
    pNumber = nullptr;//清空

    // pNumber = new int{19};
    if (pNumber != nullptr)
    {
        cout << *pNumber << endl;
        /* code */
    }
    
    

    cout << "-----------------qyl-------------------" <<endl; 
    return 0;
}

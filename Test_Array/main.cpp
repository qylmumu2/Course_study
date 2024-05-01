#include <iostream>
using namespace std;
 
int main(int argc, char const *argv[])
{
    double *pArray{new double[13]{1.3, 2.4}};
    for (size_t i = 0; i < 13; i++)
    {
        cout << "index:" << i << "value:" << pArray[i] << endl;
    }

    double arr[13]{123,34, 2};
    cout << "arr sizeof" << sizeof(arr) / sizeof(arr[0]) << "p Array sizeof" << \
    sizeof(pArray)<< "----"<< sizeof(pArray[0]) << endl;
    
    // cout << "arr size" << size(arr) <<endl;
    // for(auto var : pArray)
    // {
    //     cout << i << endl;   
    // }
    delete[] pArray;
    pArray = nullptr;
    


    if(pArray != nullptr){
        for (size_t i = 0; i < 13; i++)
        {
            cout << "index:" << i << "value:" << pArray[i] << endl;
        }
    }


    cout << "---------------qyl-------------" << endl;
    return 0;
}

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (size_t i = 0; i < 10; ++i)
    {
        /* code */
        cout << i << endl;
        
    }
    int arr1[]{1, 2, 3, 4};


    int arrSize{sizeof(arr1)/sizeof(arr1[0])};
    cout << "length: " <<arrSize << endl;

    for (size_t i{0}; i < arrSize; ++i)
    {
        /* code */
    cout << arr1[i] << endl;

    }
    for (auto &&x : arr1)
    {
     cout << x << endl;   
    }
    for(auto x : arr1)
    {
        
     cout << x << endl;   
    }    
    return 0;
}

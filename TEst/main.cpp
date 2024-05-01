#include <iostream>
using namespace std;
#include <typeinfo>
// int main() {
//     int i,sum;
//     for( i = 0; i < 6; i++)
//     sum+=i;   /* code */
    
//     printf("%d", sum);
//     return 0;
// }
int main(int argc, char const *argv[])
{
    // char *sp;
    // *sp = "right"
    char a[10];
    *a = "egdsfgd";

    // char &&erf  = "helllo"


    cout << a  << endl;
    cout << typeid(a).name() << endl;
    // *a = "right";
    return 0;
}
// int main(int argc, char const *argv[])
// {
//     int a{2};
//     int p = (3*a++) + a;
//     cout << p << endl;
//     cout << a << endl;
//     return 0;
// }

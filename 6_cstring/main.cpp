#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    const char *stringName0{"yayyfaf"};
    char stringName1[]{"ayyfaf"};
    char stringName2[]{"yayyfaf"};
    cout << "len " << strlen(stringName0) << endl;
    cout << "len " << strlen(stringName1) << endl;
    cout << "len " << strlen(stringName2) << endl;

    cout << strcmp(stringName1, stringName2) << endl;
    if (strcmp(stringName1, stringName2) > 0)
    {
        cout << stringName1 << endl;
    }
    else
    {

        cout << stringName2 << endl;
    }

    cout << "strcat & strcpy" << endl;

    cout << strcat(stringName1, stringName2) << endl;
    cout << stringName1 << ":" << stringName2 << endl;
    // cout << strcpy(stringName1, stringName2) << endl;
    // cout << stringName1 << ":" << stringName2 << endl;
    // 查找
    cout << strchr(stringName1, 'y') << endl;
    cout << strrchr(stringName1, 'y') << endl;

    // const char *pChar{stringName1};
    // int index{0};
    // while ((pChar = strchr(pChar, 'y')) != nullptr)
    // {
    //     ++index;
    //     cout << "index: " << index << "pChar:" << pChar <<endl;
    //     ++pChar;
    // }
    char *pchar = strchr(stringName1, 'y');
    while (pchar != nullptr)
    {
        cout << "index" << pchar - stringName1 << endl;
        // pchar = strchr(++pchar, 'y');

        pchar = strchr(pchar++, 'y');//strchr的优先级高于++，所以要先返回指针，赋值与pchar++无法预测谁先发生，但从打印结果来看pchar值并没有自增故如果是先复制再自增，pchar的值会改变
    }//如果是先完成加1，再赋值，加1操作被覆盖

    cout << "---------------ayl-------------" << endl;

    return 0;
}

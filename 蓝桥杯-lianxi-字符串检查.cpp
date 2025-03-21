#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//实现一个算法来识别一个字符串的字符是否是唯一的（忽略字母大小写）。
//若唯一，则输出YES，否则输出NO。

int main()
{   
    string in;
    getline(cin,in);
    int q = in.size();
    int y = 65 - 97;
    int z = 0;
    for (int i = 0; i <= (q - 1); i++)
    {
       for (int j = 1; j <= (q - 1); j++)
       {
           if (in[i] == in[j] || in[i] == (in[j] + y)) {
               z++;
           }
       }
    }
    if (z == 0) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;

    }
    return 0;
}

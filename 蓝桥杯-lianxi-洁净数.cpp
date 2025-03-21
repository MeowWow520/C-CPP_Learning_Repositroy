#include <iostream>
#include <cmath>

using namespace std;

//小明非常不喜欢数字 2，包括那些数位上包含数字 2 的数。如果一个数的数位不包含数字 2，小明将它称为洁净数。
//
//请问在整数 1 至
//n
//n 中，洁净数有多少个？
int main()
{
    int n = 0;
    int m[6] = { 0,0,0,0,0,0 };
    int ret = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        m[0] = i % 10;
        m[1] = (i % 100) / 10;
        m[2] = (i % 1000) / 100;
        m[3] = (i % 10000) / 1000;
        m[4] = (n % 100000) / 10000;
        m[5] = (i % 1000000) / 100000;
        if (2 == m[0]) {
            ret++;
        }
        else if (2 == m[1]) {
            ret++;
        }
        else if (2 == m[2]) {
            ret++;
        }
        else if (2 == m[3]) {
            ret++;
        }
        else if (2 == m[4]) {
            ret++;
        }
        else if (2 == m[5]) {
            ret++;
        }
    }
    int out = n - ret;
    cout << out << endl;
    return 0;
}

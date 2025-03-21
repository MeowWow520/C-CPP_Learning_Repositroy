#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

//给定一个单词，请使用凯撒密码将这个单词加密。
//凯撒密码是一种替换加密的技术，单词中的所有字母都在字母表上向后偏移 3 位后被替换成密文

int main()
{   
    string in = " ";
    cin >> in;
    int inint[100] = { 0 };
    int outint[100] = { 0 };
    int q = size(in);
    for (int i = 0; i <= (q - 1);i++)
    {
        inint[i] = in[i];
        outint[i] = inint[i] + 3;
        putchar(outint[i]);
    }
    return 0;
}

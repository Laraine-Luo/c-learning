###题目：
##编写程序要求用户输入一个材料名称（字符串），然后输出“I like [材料名称] very much!”。使用 cin 获取用户输入，cout 进行输出。


##参考答案：
#include <iostream>
#include<string>
using namespace std;
int main() {
    string a;
    cin >> a;
    cout << "I like "<<a <<" very much!" << '\n';
    return 0;
}

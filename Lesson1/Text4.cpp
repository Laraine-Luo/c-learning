###题目：
##假设一个立方体晶格的边长为 a（a 值通过输入获得），请编写程序计算该晶格的体积 V (V = a^3) 并输出。注意输出结果的单位。

##参考答案：
#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int b=a*a*a;
    cout << b <<"立方厘米" << '\n';
    return 0;
}

###题目
##一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如，6 的因子为 1、2、3，而 6=1+2+3，因此 6 是“完数”。
##编程序找出 1000 之内的所有完数，并按下面要求输出其因子：
##1）输出格式可参考：6, its factors are 1,2,3；
##2）输出满足条件的所有完数，而不是只判断单个输入整数；
##3）因子按从小到大的顺序输出。

##参考答案：
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    for (int i = 2; i <= 1000; i++) {
        int sum = 0;

        for (int j = 1; j < i; j++) {
            if (i % j == 0) sum += j;
        }

        if (sum == i) {
            cout << i << ", its factors are ";
            bool first = true;
            for (int j = 1; j < i; j++) {
                if (i % j == 0) {
                    if (!first) cout << ", ";
                    cout << j;
                    first = false;
                }
            }
            cout << ";" << endl;
        }
    }
    return 0;
}

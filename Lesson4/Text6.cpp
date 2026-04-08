###题目
##设 int 型变量 x、y、z、w 的初值由程序直接给出，要求程序依次计算并输出下列关系表达式的值：
##x > y
##x + z <= w
##x % y == z
##w  x != y + z
##(x + y) / z >= w - 2
##并在每个表达式后同时输出参与运算的变量当前值。
##要求：
##1）变量初值要保证输出结果中既有真也有假；
##2）程序应清楚显示每个表达式对应的 1/0 结果；
##3）实验报告中总结：关系表达式结果在 C++ 中通常如何表示。

##参考答案：
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    setiosflags(ios::left);
    int x = 5, y = 3, z = 2, w = 7;

    cout<<"初始值: x = "<<x<<" ，y = "<<y<<" ，z = "<<z<<" ，w = "<<w<<endl;
    cout<<"运算结果中，1表示真，0表示假"<<endl;
    cout<<"-------------------------------------------"<<endl;

    int a = x > y;
    cout<<"x > y = "<< a <<endl;
    cout<<"当前x = "<<x<<"， y = "<<y<<"， z = "<<z<<"， w = "<<w<<endl;
    cout<<"运算结果："<<(a)<<endl;
    cout<<"-------------------------------------------"<<endl;

    int b = x + z <= w;
    cout<<"x + z <= w  = "<<b<<endl;
    cout<<"当前x = "<<x<<"， y = "<<y<<"， z = "<<z<<"， w = "<<w<<endl;
    cout<<"运算结果："<<(b)<<endl;
    cout<<"-------------------------------------------"<<endl;

    int c = x % y == z;
    cout<<"x % y == z = "<<c<<endl;
    cout<<"当前x = "<<x<<"， y = "<<y<<"， z = "<<z<<"， w = "<<w<<endl;
    cout<<"运算结果："<<(c)<<endl;
    cout<<"-------------------------------------------"<<endl;

    int d = w - x != y + z;
    cout<<"w - x != y + z = "<<d<<endl;
    cout<<"当前x = "<<x<<"， y = "<<y<<"， z = "<<z<<"， w = "<<w<<endl;
    cout<<"运算结果："<<(d)<<endl;
    cout<<"-------------------------------------------"<<endl;

    int e = (x + y) / z >= w - 2;
    cout<<"(x+y)/z >= w-2 = "<<e<<endl;
    cout<<"当前x = "<<x<<"， y = "<<y<<"， z = "<<z<<"， w = "<<w<<endl;
    cout<<"运算结果："<<(e)<<endl;

    return 0;
}

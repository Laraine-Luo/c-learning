###题目
##编写程序，定义 short、int、long、float、double、char、bool 类型的变量各一个，并分别赋予适当的初值；
##使用 sizeof 输出各类型变量所占的字节数；
##再输出字符 'A'、'a'、'0' 对应的 ASCII 码值。
##要求：
##1）输入输出信息要有提示；
##2）程序运行后，在实验报告中总结：不同数据类型在存储空间上的差异，以及字符与整数之间的联系。 

##参考答案：
#include <iostream>
using namespace std;
int main() {
    short s =10;
    int i = 100;
    long l =1000;
    float f =3.14f;
    double d = 3.1415;
    char c = 'A';
    bool b = true;

    cout<<"各类型变量所占的字节数"<<endl;
    cout<<"short类型变量占用"<<sizeof(s)<<"字节"<<endl;
    cout<<"int类型变量占用"<<sizeof(i)<<"字节"<<endl;
    cout<<"long类型变量占用"<<sizeof(l)<<"字节"<<endl;;
    cout<<"float类型变量占用"<<sizeof(f)<<"字节"<<endl;
    cout<<"double类型变量占用"<<sizeof(d)<<"字节"<<endl;
    cout<<"char类型变量占用"<<sizeof(c)<<"字节"<<endl;
    cout<<"bool类型变量占用"<<sizeof(b)<<"字节"<<endl;

    cout<<"字符对应的ASCII码值"<<endl;
    cout<<"字符'A'的码值为： "<<int('A')<<endl;
    cout<<"字符'a'的码值为： "<<int('a')<<endl;
    cout<<"字符'0'的码值为： "<<int('0')<<endl;

    return 0;

}

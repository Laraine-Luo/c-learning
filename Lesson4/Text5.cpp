###题目
##编写程序，分三个部分完成输入实验：
##第一部分使用 cin 读取两个字符变量；
##第二部分使用 getchar 连续读取 4 个字符；
##第三部分使用 cin.get 连续读取 4 个字符。
##要求学生在键盘上按顺序输入：字母、空格、字母、回车，再输入一组包含制表符和空格的字符序列，并观察三种方法读取到的实际结果。程序应把每次读到的字符和其 ASCII 码值都输出出来。
##要求：
##1）程序中应对每一种输入方式给出清晰提示；
##2）输出时既要输出字符本身，也要输出对应的 ASCII 码；
##3）实验报告中必须说明：哪种方法会跳过前导空白字符，哪种方法会保留空格、换行符或制表符。 

##参考答案：
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    setiosflags(ios::left);


    cout << " 第一部分: cin读取字符 " << endl;
    cout << "请输入两个字符(如: a b，中间加空格): ";
    char a, b;
    cin >> a >> b;
    cout << "cin读到字符1: '" << a << "' ,其ASCII = " << (int)a << endl;
    cout << "cin读到字符2: '" << b << "' ,其ASCII = " << (int)b << endl;

    while (cin.get() != '\n');


    cout << "\n 第二部分: getchar连续读取4个字符 " << endl;
    cout << "请输入包含制表符和空格的字符序列(4个字符): ";
    for (int i = 0; i < 4; i++) {
        char ch = (char)getchar();
        cout << "getchar读到: '" << ch << "' ,其ASCII = " << (int)ch << endl;
    }
    while (getchar() != '\n');


    cout << "\n 第三部分: cin.get连续读取4个字符 " << endl;
    cout << "请输入包含制表符和空格的字符序列(4个字符): ";
    for (int i = 0; i < 4; i++) {
        char ch;
        cin.get(ch);
        cout << "cin.get读到: '" << ch << "' ,其ASCII = " << (int)ch << endl;
    }
    return 0;
}

###题目
##编写程序，定义学号、姓名首字母、课程代号、平时成绩、实验成绩、期中成绩和期末成绩，计算总评成绩，并使用 setw、fixed、setprecision、left、right 等控制符输出一张单行成绩表。
##输出内容至少包含：
##学号、课程、四项成绩、总评成绩、总评与满分的差值。
##要求：
##1）总评按“平时 10% + 实验 15% + 期中 25% + 期末 50%”计算；
##2）成绩表输出时，要求各字段左右对齐方式有区别，数值保留 2 位小数；
##3）程序中必须出现：变量定义、初始化、赋值语句、输出语句。 

##参考答案：
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int stuid;
    char firstname;
    int courseid;
    double usual,lab,mid,final;

    stuid = 25302050;
    firstname = 'A';
    courseid = 25001;
    usual = 90.0;
    lab = 86.5;
    mid = 89.0;
    final = 84.0;

     double total = usual*0.10 + lab*0.15 + mid*0.25 + final*0.50;
     double gap = 100-total;

    cout << fixed << setprecision(2);
    cout << left  << setw(12) << "学号"
         << left  << setw(16)  << "姓名首字母"
         << left  << setw(12)  << "课程代号"
         << right << setw(12)  << "平时"
         << right << setw(12)  << "实验"
         << right << setw(12)  << "期中"
         << right << setw(12)  << "期末"
         << right << setw(12) << "总评"
         << right << setw(12) << "差值"
         << endl;

    cout << left  << setw(12) << stuid
         << left  << setw(8)  << firstname
         << left  << setw(8)  << courseid
         << right << setw(8)  << usual
         << right << setw(8)  << lab
         << right << setw(8)  << mid
         << right << setw(8)  << final
         << right << setw(10) << total
         << right << setw(10) << gap
         << endl;

    return 0;
}

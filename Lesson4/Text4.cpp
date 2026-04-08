###题目
##编写程序，分别使用 cout、putchar 和 cout.put 输出一个由多种字符组成的“迷你格式块”。该格式块至少包含：
##字母、数字字符、空格、制表符、换行符、符号字符（如 # 或 *）。
##要求每种输出方式都分别输出同样的内容，并在输出前给出方式说明。
##要求：
##1）输出内容不能只是单个字符，至少应形成 3 行、每行 4 列左右的字符布局；
##2）三种输出方式必须写在同一个程序中，便于比较；
##3）应至少显式使用一次 '\t'、一次 '\n'、一次空格字符和一次普通可见字符；
##4）实验报告中说明：cout、putchar、cout.put 书写形式和适用场景上的差别。 

##参考答案：
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    setiosflags(ios::left);
    cout << " 方式一: cout " << endl;
    cout << "A\t1\t#\t*\n";
    cout << "B\t2\t@\t$\n";
    cout << "C\t3\t!\t&\n";


    cout << " 方式二: putchar " << endl;

    putchar('A'); putchar('\t');
    putchar('1'); putchar('\t');
    putchar('#'); putchar('\t');
    putchar('*'); putchar('\n');

    putchar('B'); putchar('\t');
    putchar('2'); putchar('\t');
    putchar('@'); putchar('\t');
    putchar('$'); putchar('\n');

    putchar('C'); putchar('\t');
    putchar('3'); putchar('\t');
    putchar('!'); putchar('\t');
    putchar('&'); putchar('\n');


    cout << " 方式三: cout.put " << endl;

    cout.put('A'); cout.put('\t'); cout.put('1'); cout.put('\t');
    cout.put('#'); cout.put('\t'); cout.put('*'); cout.put('\n');

    cout.put('B'); cout.put('\t'); cout.put('2'); cout.put('\t');
    cout.put('@'); cout.put('\t'); cout.put('$'); cout.put('\n');

    cout.put('C'); cout.put('\t'); cout.put('3'); cout.put('\t');
    cout.put('!'); cout.put('\t'); cout.put('&'); cout.put('\n');

    return 0;
}

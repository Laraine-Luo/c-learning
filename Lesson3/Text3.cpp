###题目
##编写程序，从键盘输入一个非负整数，表示总秒数 totalSeconds。请将其换算为“小时、分钟、秒”，并按如下形式输出：
##xx hour(s)，xx minute(s), xx second(s)。
##例如：输入 3672，输出 1 hour(s), 1 minute(s), 12 second(s)。 

##参考答案：
#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"请输入一个非负整数： "<<endl;
    cin>>a;
    int hours = a/3600;
    int minutes = (a%3600)/60;
    int seconds = (a%3600)%60;
    cout<<hours<<"hour(s)"<<minutes<<"minute(s)"<<seconds<<"second(s)"<<endl;
    return 0;
}

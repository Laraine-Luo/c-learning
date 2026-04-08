###题目
##输入一个包裹的重量 w（kg）、体积 V（cm³）、是否易碎（1/0）、是否加急（1/0）和目的地区类别 c（1 表示同城，2 表示省内，3 表示省外），编写程序计算应收费用，并判断该包裹是否受理。
##规定：w≤20 且 V≤120000 才受理；基础运费按地区类别分别为 8、12、18 元；重量超过 1kg 的部分按每公斤 4 元计费（不足 1kg 按 1kg 计）；易碎件加收 6 元；加急件加收 10 元。
##要求：
##1）若不受理，应输出“不予受理”及原因（超重、体积超限或二者都有）；
##2）若受理，应输出基础运费、附加费用和总费用；
##3）程序中应合理组织多重条件判断。 

##参考答案：
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int w,V,fra,emer,c;

    cout<<"请输入包裹重量：（单位：kg）"<<"包裹体积： （单位：cm³）"<<" 是否易碎（是-1，否-0）："<<" 是否加急（是-1，否-0）："<<"目的区域类别（1-同城，2-省内，3-省外）"<<endl;
    cin>>w>>V>>fra>>emer>>c;

    if ( w>20 || V > 120000 ){
        cout << "不予受理" << endl;
        if (w>20&&V<120000)
            cout<<"原因：超重"<<endl;
        else if( w<20&&V>120000)
            cout<<"原因：体积超限"<<endl;
        else if( w>20&&V>120000)
            cout<<"原因：超重且体积超限"<<endl;

        return 0;
    }

    double regionfee = (c==1)?8:(c==2?12:18);
    double weightfee =0;
    if (w>1) {
        weightfee =ceil(w-1)*4;
    }
    int extrafee = (fra * 6)+(emer * 10);
    double a = regionfee+weightfee+extrafee;
    double b = weightfee+extrafee;

    cout<<"收取总费用： "<<a<<endl;
    cout<<"基础运费： "<<regionfee<<endl;
    cout<<"额外运费： "<<b<<endl;
    return 0;
}

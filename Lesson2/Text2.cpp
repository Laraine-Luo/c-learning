###题目
##编写程序，从键盘读入圆柱体的半径和高度，计算其表面积和体积，并将结果在屏幕上输出（ Pi 取值 3.1415，输入输出要有提示）。

##参考答案：
#include<iostream>
using namespace std;
int main(){
    double r,h;
    double Pi = 3.1415;
    cout<<"请输入圆柱半径"<<endl;
    cin>>r ;
    cout <<"请输入圆柱高度"<<endl;
    cin>>h ;
    double s = 2*Pi *r *(r +h );
    double v = Pi *r  *r  *h  ;
    cout<<"圆柱体表面积为 "<< s <<endl;
    cout<<"圆柱体体积为 "<< v <<endl;
    return 0; }

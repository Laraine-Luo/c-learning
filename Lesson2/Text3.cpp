###题目
##编写一个 C++ 程序，完成以下功能：
##1. 输入一个负实数 x；
##2. 使用数学函数计算以下功能并在屏幕以对齐表格的方式输出：
##1）x 的绝对值 y；
##2）y 的平方；
##3）y 的平方根；
##4）y 的对数；

##参考答案：
#include<iostream>
#include <cmath>
#include <iomanip>
int main(){
    double x;
    std::cout<<"请输入一个负实数"<<std::endl;
    std::cin>>x ;
    double y = (-x) ;
    std::cout <<std::left<<std::setw (15) <<"项目"<<"结果"<<std::endl;
    std::cout <<"----------------------"<<std::endl;
    std::cout <<std::left<<"绝对值（y）"<<y <<std::endl;
    std::cout <<std::left <<"y的平方"<<std::pow(y,2)<<std::endl;
    std::cout <<std::left <<"y的平方根"<<std::sqrt(y)<<std::endl;
    std::cout <<std::left <<"y的对数"<<std::log(x)<<std::endl;
    return 0; }

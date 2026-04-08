###题目
##ab02_02.cpp 文件中 C++程序的功能是：输入三门课程成绩，计算总分和平均分并输出。
##但是这段程序存在书写不规范问题，同时还包含若干语法错误。请你按 C++ 书写规范整理程序，并改正其中的错误，使其能够正确编译运行。
##要求：
##1）首先运行 lab02_02.cpp 中的程序，观察 IDE 中错误提示；
##2）根据错误提示修改程序，并写出修改后的完整程序，完全正确后进行编译运行；
##3）按规范整理代码格式并加入适当注释；

##参考答案：
#include<iostream>
using namespace std;
int main(){
    double score1,score2,score3;
    cout<<"Please enter three scores:"<<endl;
    cin>>score1>>score2>>score3;
    double sum = score1+score2+score3;
    double average = sum/3;
    cout<<"Total score = "<<sum<<endl;
    cout<<"Average score = "<<average<<endl;
    return 0; }

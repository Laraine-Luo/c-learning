###题目：
##利用 \t（制表符）和 \n（换行符）设计一个整齐的材料属性展示表。例如： 
## 名称/Name: Silicon 
## 化学符号/Symbol: Si 
## 带隙/BandGap:1.12eV


##参考答案：
#include <iostream>
using namespace std;
int main() {
    cout<<" Name：\tSilicon "<<'\n';
    cout<<" Symbol: \tSi "<<'\n';
    cout<<" Band Gap:\t1.12 eV "<<'\n';
    return 0;
}

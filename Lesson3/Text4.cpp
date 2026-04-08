###题目
##编写程序，从键盘输入一个小写英文字母 ch 和一个正整数 key（建议取 1～5），
##完成字符加密与解密。加密规则为：将 ch 的 ASCII 码加上 key，得到加密字符 enc；
##再根据 enc 减去 key，还原得到解密字符 dec。
##程序需要依次输出原字符 ch、其 ASCII 码值、加密后的字符 enc、enc 对应的ASCII 码值、解密后的字符 dec，以及 dec 对应的 ASCII 码值。
##提示：为避免出现字母越界问题，可约定输入字符 ch 的范围为 a～u。
##要求：
##1）程序中可使用 char 与 int（或其自动类型转换）共同完成加密与解密，不允许直接手工写出结果；
##2）输出结果应清晰标注原字符、加密字符、解密字符及对应 ASCII 码；

##参考答案：
#include <iostream>
using namespace std;
int main() {
    char ch;
    int key;
    cout<<"请输入一个小写字母（a～u）： ";
    cin>>ch;
    cout<<"请输入一个正整数key（1～5）： ";
    cin>>key;

    char enc = ch + key;
    char dec = enc - key;

    cout<<"加密解密结果"<<endl;
    cout<<"原字符： "<<ch<<"， ASCII码值： "<<int(ch)<<endl;
    cout<<"加密字符： "<<enc<<"， ASCII码值： "<<int(enc)<<endl;
    cout<<"解密字符： "<<dec<<"， ASCII码值： "<<int(dec)<<endl;

    return 0;
}


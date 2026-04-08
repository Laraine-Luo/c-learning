###题目
##输入一个四位正整数 n（如 3528），要求完成以下任务：
##（1）分别求出千位、百位、十位、个位数字；
##（2）计算各位数字之和、各位数字之积；
##（3）构造逆序数；
##（4）构造“循环左移一位”后的新数（例如 3528 变为 5283）；
##（5）将上述结果按整齐格式输出。

##参考答案：
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "请输入一个四位正整数: ";
    cin >> n;

    int thousands = n / 1000;
    int hundreds = (n/100) % 10;
    int tens = (n/10) % 10;
    int ones = (n/1) % 10;

    int sum = thousands + hundreds + tens + ones;
    int prod = thousands*hundreds*tens*ones;

    int reverse= ones*1000+tens*100+hundreds*10+thousands;

    int rotated = hundreds*1000+tens*100+ones*10+thousands;

    setiosflags(ios::left);
    cout<<n<<" 的千位数字是： "<<thousands<<endl;
    cout<<n<<" 的百位数字是： "<<hundreds<<endl;
    cout<<n<<" 的十位数字是： "<<tens<<endl;
    cout<<n<<" 的个位数字是： "<<ones<<endl;
    cout<<n<<" 的各位数字之和是： "<<sum<<endl;
    cout<<n<<" 的各位数字之积是： "<<prod<<endl;
    cout<<n<<" 的逆序数是： "<<reverse<<endl;
    cout<<n<<" 的循环左移位得到的新数是： "<<rotated<<endl;


    return 0;
}

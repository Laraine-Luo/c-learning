###题目
##编写程序，自行定义并初始化 int 类型变量 a、b、c 和 char 类型变量 ch，要求通过程序依次计算并输出下列表达式的值，以及表达式执行后相关变量的新值：
##a+b*c，(a+b)%c，++a，b，double(a)/c，ch+3，(a=b)+(c=6)。
##通过该题观察算术运算、取余运算、自增自减、强制类型转换以及赋值表达式的综合效果。
##要求：
##1）所有变量初值由程序中直接给出，不要求键盘输入，但初值设计应能体现各表达式结果的差异；
##2）计算一个表达式后，输出该表达式的结果，以及相关变量当前的值，便于观察变化过程；
##3）至少包含 1 个前置自增、1 个后置自减、1 个强制类型转换和 1 个赋值表达式

##参考答案：
int main() {
    int a =5, b =3, c =2;
    char ch = 'e' ;
    cout<<"初始值：a = "<<a<<" b = "<<b<<" c = "<<c<<" ch = "<<ch <<endl;
    int result1 =a+b*c,result2 =(a+b)%c,result3 =++a,result4 =--b;
    int result5 =double(a)/c,result6 =ch+3,result7 =(a=b)+(c=6);

    cout<<"a+b*c = "<<result1<<endl;
    cout<<"当前值：a = "<<a<<" b = "<<b<<" c = "<<c<<" ch = "<< ch <<endl;

    cout<<"(a+b)%c = "<<result2<<endl;
    cout<<"当前值：a = "<<a<<" b = "<<b<<" c = "<<c<<" ch = "<< ch <<endl;

    cout<<"++a = "<<result3<<endl;
    cout<<"当前值：a = "<<a<<" b = "<<b<<" c = "<<c<<" ch = "<< ch <<endl;

    cout<<"--b = "<<result4<<endl;
    cout<<"当前值：a = "<<a<<" b = "<<b<<" c = "<<c<<" ch = "<< ch <<endl;

    cout<<"double(a)/c = "<<result5<<endl;
    cout<<"当前值：a = "<<a<<" b = "<<b<<" c = "<<c<<" ch = "<< ch <<endl;

    cout<<"ch +3 = "<<result6 <<endl;
    cout<<"当前值：a = "<<a<<" b = "<<b<<" c = "<<c<<" ch = "<< ch <<endl;

    cout<<"(a=b)+(c=6) = "<<result7 <<endl;
    cout<<"当前值：a = "<<a<<" b = "<<b<<" c = "<<c<<endl;

    return 0;}

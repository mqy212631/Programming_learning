/*
#include "iostream"
using namespace std;

int main(){

    cout<<"hello world"<<endl;  //输出函数  -->单行注释，一般放在结尾或者上方
    cout<<"666"<<endl;
    system("pause");
    return 0;
}
 */
/*
#include "iostream"
using namespace std;

int main(){
    //变量：方便管理内存
    //创建变量：数据类型 变量名 = 变量初始值
    int a = 10;

    cout<<"a = "<< a << endl; //输出a的值，注意格式

    cout<<"变量学习"<<endl;
    return 0;
}
 */

/*
#include "iostream"
using namespace std;

 //在为变量或者常量命名时注意关键字

//#define宏常量：#define 常量名 常量值
//通常在文件上方定义，表示一个常量
#define Day 7   //不可修改

int main(){
    //常量：记录程序中不可更改的数据
    cout<<"一周共有"<<Day<<"天"<<endl;

    //const修饰的变量：const 数据类型 常量名 = 常量值
    //通常在定义变量前加上关键字const，修饰该变量为常量，不可修改
    const int month = 12;   //const修饰的变量也称为常量，不可修改
    cout<<"一年有"<<month<<"月份"<<endl;
}
 */

#include "iostream"
using namespace std;

//标识符（变量，常量）命名规则
//标识符不能是关键字
//标识符只能由字母、数字、下划线组成
//第一个字符必须为字母或下划线
//标识符中字母区分大小写。

int main(){
    int abc = 10;
    int _abc = 20;
    int _123abc = 30;
    int abc_123 = 40;
    int aaa = 10;
    int AAA = 10;
    cout<<aaa<<endl;
    cout<<AAA<<endl;

    //建议：给变量起名的时候，最好能够做到见名知意
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
}
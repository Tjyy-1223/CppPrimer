//
// Created by 田江宇 on 2023/2/15.
//
#include<iostream>
using namespace std;

/*
 * practice1.5 :
 * 我们将所有输出操作放在一条很长的语句中。
 * 重写程序，将每个运算对象的打印操作放在一条独立的语句中。
 * install_name_tool -change '/usr/local/opt/isl/lib/libisl.23.dylib' /Users/tianjiangyu/config/gcc/usr/local/lib/libisl.23.dylib /Users/tianjiangyu/config/gcc/usr/local/libexec/gcc/aarch64-apple-darwin22.2.0/13.0.0/cc1plus
 */
int main(){
    int num1,num2;
    cin >> num1 >> num2;

    int sum = num1 + num2;
    int dot = num1 * num2;

    cout << "the sum of two numbers is : ";
    cout << sum;
    cout << endl;
    cout << "the dot of two numbers is : ";
    cout << dot;
    cout << endl;
}
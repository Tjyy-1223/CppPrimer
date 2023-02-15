//
// Created by 田江宇 on 2023/2/15.
//
#include<iostream>
using namespace std;

/*
 * practice1.4 :
 * 我们的程序使用加法运算符+来将两个数相加。编写程序使用乘法运算符*，来打印两个数的积。
 */
int main(){
    int num1,num2;
    cin >> num1 >> num2;

    int sum = num1 + num2;
    int dot = num1 * num2;

    cout << "the sum of two numbers is : " << sum << endl;
    cout << "the dot of two numbers is : " << dot << endl;
}
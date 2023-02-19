//
// Created by 田江宇 on 2023/2/15.
//
#include<iostream>
using namespace std;

/*
 * practice 1.19
 * 修改你为1.4.1节练习1.11（第11页）所编写的程序（打印一个范围内的数）
 * 使其能处理用户输入的第一个数比第二个数小的情况。
 */
int main(){
    int num1,num2;
    cin >> num1 >> num2;

    int start = num1 < num2 ? num1 : num2;
    int end = num1 > num2 ? num1 : num2;
    for (int i = start; i <= end; ++i) {
        cout << i << " ";
    }
    return 0;
}
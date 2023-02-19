//
// Created by 田江宇 on 2023/2/15.
//
#include<iostream>
using namespace std;

/*
 * practice 1.13
 * 使用for循环重做1.4.1节中的所有练习（第11页）。
 * 1.9 : 循环将 50 - 100的整数相加
 * 1.10 : 递减打印 10 - 0 之间的整数
 * 1.11 ：用户输入两个整数，打印出这两个整数所指定的范围内的所有整数
 */
void func_1_9(){
    int sum = 0;
    for (int i = 50; i <= 100; ++i) {
        sum += i;
    }
    cout << sum << endl;
}


void func_1_10(){
    for (int i = 10; i >= 0; --i) {
        cout << i << " ";
    }
    cout << endl;
}


void func_1_11(){
    int start,end;
    cin >> start >> end;
    for (int i = start; i <= end; ++i) {
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    func_1_9();
    func_1_10();
    func_1_11();
}
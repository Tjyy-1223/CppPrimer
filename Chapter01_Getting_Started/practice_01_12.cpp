//
// Created by 田江宇 on 2023/2/15.
//
#include<iostream>
using namespace std;

/*
 * practice 1.12
 * 下面的for循环完成了什么功能？sum的终值是多少？
 * 从 -100 加到 100 ，sum 的终值为 0。
 */
int main(){
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
}
//
// Created by 田江宇 on 2023/2/15.
//
#include<iostream>
using namespace std;

/*
 * practice 1.10
 * 除了++运算符将运算对象的值增加1之外，还有一个递减运算符（--）实现将值减少1。
 * 编写程序，使用递减运算符在循环中按递减顺序打印出10到0之间的整数。
 */
int main(){
   int num = 10;
   while(num >= 0){
       cout << num << endl;
       num--;
   }
   return 0;
}
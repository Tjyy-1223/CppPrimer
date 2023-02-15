//
// Created by 田江宇 on 2023/2/15.
//
#include<iostream>
using namespace std;

/*
 * practice 1.11
 * 编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。
 */
int main(){
   int start,end;
   cin >> start >> end;

   int pointer = start;
   while(pointer <= end){
       cout << pointer << " ";
       pointer++;
   }
}
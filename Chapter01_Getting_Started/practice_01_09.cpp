//
// Created by 田江宇 on 2023/2/15.
//
#include<iostream>
using namespace std;

/*
 * practice 1.9
 * 编写程序，使用while循环将50到100的整数相加。
 */
int main(){
    int cnt = 0;
    int num = 50;
    while(num <= 100){
        cnt += num;
        num++;
    }

    cout << "the sum from 50 to 100 is : " << cnt << endl;
    return 0;
}
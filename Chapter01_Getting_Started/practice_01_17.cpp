//
// Created by 田江宇 on 2023/2/15.
//
#include<iostream>
using namespace std;

/*
 * practice 1.17
 * （1）使用if语句写一个程序 来统计在输入中每个值连续出现了多少次
 * （2）如果输入的所有值都是相等的，本节的程序会输出什么？如果没有重复值，输出又会是怎样的？
 */
int main(){
    // currVal表示正在统计的数 将读入的新值存入val
    int currVal = 0,val = 0;
    // 读取第一个数 保证确实有数据可以处理
    if(cin >> currVal){
        int cnt = 1;
        while(cin >> val){ // 读取剩余的数
            if (val == currVal) ++cnt;
            else{
                cout << currVal << " occurs " << cnt << " times" <<endl;
                currVal = val;
                cnt = 1;
            }
        }
        // 打印文件中的最后一个值的个数
        cout << currVal << " occurs " << cnt << " times " <<endl;
    }
}
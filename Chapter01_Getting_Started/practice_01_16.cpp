//
// Created by 田江宇 on 2023/2/15.
//
#include<iostream>
using namespace std;

/*
 * practice 1.16
 * 编写程序，从cin读取一组数，输出其和。
 */
void read_uncertain_number(){
    // 读取数量不定的输入数据 遇到文件终止或者发生错误可以结束
    int sum = 0, value = 0;
    // 读取数据直到遇到文件尾，计算所有读入的值的和
    // CLion IDE -> command + shift + a -> 选择 Actions，搜索框搜索 Registry
    // 不勾选 run.processes.with.pty 即可
    // macos + clion ：回车后 command D 结束
    while (cin >> value)
        sum += value;
    cout << "Sum is : " << sum << endl;
}

int main(){
    read_uncertain_number();
    return 0;
}
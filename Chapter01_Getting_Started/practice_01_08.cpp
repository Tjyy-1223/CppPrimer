//
// Created by 田江宇 on 2023/2/15.
//
#include<iostream>
using namespace std;

/*
 * practice 1.8 :
 * 指出下列哪些输出语句是合法的(如果有的话)：
 */
int main(){
    // example 1,2 : 正确 可以执行
    cout << "/*" << endl;
    cout << "*/" << endl;

    // example 3 - 4： 错误 改正方法是增加一个引号
    //    std::cout << /* "*/" */
    cout << /* "*/" */" << endl;
    //    std::cout << /* "*/" /* "/*" */;
    cout << /* "*/" /* "/*" */;
}
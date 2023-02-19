//
// Created by 田江宇 on 2023/2/15.
//
#include<iostream>
using namespace std;
#include "Sales_item.h"

/*
 * practice 1.20
 * 编写一个程序，读取一组书籍销售记录，将每条记录打印到标准输出上。
 * in >> s.bookNo >> s.units_sold >> price;
 * out << s.isbn() << " " << s.units_sold << " "<< s.revenue << " " << s.avg_price();
 */
int main(){
    Sales_item item;
    // 读入两个书籍销售数据
    // isbn : 0-201-78345-x
    cin >> item;
    cout << item << endl;
    return 0;
}
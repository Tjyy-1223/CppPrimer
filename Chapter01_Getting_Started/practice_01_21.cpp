//
// Created by 田江宇 on 2023/2/15.
//
#include<iostream>
using namespace std;
#include "Sales_item.h"

/*
 * practice 1.21
 * 编写程序，读取两个 ISBN 相同的 Sales_item 对象，输出他们的和。
 * in >> s.bookNo >> s.units_sold >> price;
 * out << s.isbn() << " " << s.units_sold << " "<< s.revenue << " " << s.avg_price();
 */
int main(){
    Sales_item item1,item2;
    // 读入两个书籍销售数据
    // isbn : 0-201-78345-x
    cin >> item1 >> item2;
    cout << item1 + item2 << endl;
    return 0;
}
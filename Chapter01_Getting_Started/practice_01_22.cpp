//
// Created by 田江宇 on 2023/2/15.
//
#include<iostream>
using namespace std;
#include "Sales_item.h"

/*
 * practice 1.22
 * 编写程序，读取多个具有相同 ISBN 的销售记录，输出所有记录的和。
 * in >> s.bookNo >> s.units_sold >> price;
 * out << s.isbn() << " " << s.units_sold << " "<< s.revenue << " " << s.avg_price();
 */
int main(){
    // isbn : 0-201-78345-x
    Sales_item currItem;
    // 确保至少有一个书籍
    if(cin >> currItem){
        Sales_item valItem;
        while (cin >> valItem){
            if(valItem.isbn() == currItem.isbn())
                currItem += valItem;
            else{
                cout << currItem << endl;
                currItem = valItem;
            }
        }
        cout << currItem << endl;
    }
}
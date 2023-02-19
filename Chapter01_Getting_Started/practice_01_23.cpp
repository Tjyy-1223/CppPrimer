//
// Created by 田江宇 on 2023/2/15.
//
#include<iostream>
using namespace std;
#include "Sales_item.h"

/*
 * practice 1.23
 * 编写程序，读取多条销售记录，并统计每个 ISBN（每本书）有几条销售记录。
 * in >> s.bookNo >> s.units_sold >> price;
 * out << s.isbn() << " " << s.units_sold << " "<< s.revenue << " " << s.avg_price();
 */
int main(){
    // isbn : 0-201-78345-x
    Sales_item currItem,valItem; // 表示当前书籍和新读入的书籍

    // 首先确保有第一个读入
    if (cin >> currItem){
        int cnt = 1;
        // 继续读入其他数字
        while(cin >> valItem){
            if (valItem.isbn() == currItem.isbn()) cnt++;
            else{
                cout << currItem << " occurs " << cnt << " times " << endl;
                currItem = valItem;
                cnt = 1;
            }
        }
        cout << currItem << " occurs " << cnt << " times " << endl;
    }
    return 0;
}
//
//  main.cpp
//  MultiInheritance
//
//  Created by miniu on 15/7/4.
//  Copyright (c) 2015年 miniu. All rights reserved.
//
//  C++多重继承学习
//  参考链接：
//  http://blog.csdn.net/dongfengsun/article/details/1476362
//  http://www.cppblog.com/zmllegtui/archive/2008/10/28/65385.aspx

//  由此学习
//  1.成员函数存储方式
//  http://blog.csdn.net/richerg85/article/details/19540437
//  http://c.biancheng.net/cpp/biancheng/view/187.html
//
//  2.C++对象内存布局
//
//  http://www.cnblogs.com/mightofcode/archive/2013/03/03/2939439.html
//  http://www.cnblogs.com/itech/archive/2009/02/27/1399996.html   //  如何用编译选项查看内存布局？？？？

#include <iostream>
#include "A.h"
#include "AmphibianCar.h"
#include "FunPointerSize.h"

void e();
void f();
void g();
void h();

int main(int argc, const char * argv[]) {
    
    //e();
    //f();
    h();
    
    return 0;
}

// 成员函数指针大小
void h()
{
    typedef void (test::*FUN)();
    
    int size = sizeof(FUN);
    cout << size << endl;
    
    //FUN fc = &test::func;
    
    //unsigned int size = ((unsigned int *)fc)[0];
}

void g()
{
    AmphibianCar a(10, 10, 100.0);
    // 调用错误
    // 不知道调用的是 Car::SetWeight() 还是 Boat::SetWeight()
    // 了解虚继承
    //a.SetWeight(100);
}

void f()
{
    D * d = new D();
    A * a = (A *)d;
    B * b = (B *)d;
    C * c = (C *)d;
    
    a->Show();
    b->Show();
    c->Show();
    d->Show();
    
    a->FunA();
    b->FunB();
    c->FunC();
    d->FunD();
    
    printf("**************\n");
    
    D * d1 = (D *)a;
    d1->Show();
    d1->FunA();
    d1->FunB();
    d1->FunC();
    d1->FunD();
    
    printf("**************\n");
    
    D * d2 = (D *)b;
    d2->Show();
    d2->FunA();
    d2->FunB();
    d2->FunC();
    d2->FunD();
}

void e()
{
    A * a = NULL;
    a->GunA();
}






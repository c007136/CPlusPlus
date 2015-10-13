//
//  A.h
//  Demo
//
//  Created by miniu on 15/7/4.
//  Copyright (c) 2015年 miniu. All rights reserved.
//

#ifndef __Demo__A__
#define __Demo__A__

#include <stdio.h>

class A
{
public:
    A() { data = 'A'; }
    virtual void Show() { printf("Show A\n"); }
    virtual void FunA() { printf("Fun A\n"); }
    
    void GunA() { printf("Gun A\n"); }
    
private:
    char data;
};

class B
{
public:
    B() { data = 'B'; }
    virtual void Show() { printf("Show B\n"); }
    virtual void FunB() { printf("Fun B\n"); }
    
private:
    char data;
};

class C
{
public:
    C() { data = 'C'; }
    virtual void Show() { printf("Show C\n"); }
    virtual void FunC() { printf("Fun C\n"); }
    
private:
    char data;
};

class D : public A, public B, public C
{
public:
    D() { data = 'D'; }
    virtual void Show() { printf("Show D\n"); }
    virtual void FunD() { printf("Fun D\n"); }
    
public:
    char data;
};

class E : public D
{
public:
    E() { data = 'E'; }
    virtual void Show() { printf("Show E\n"); }
    virtual void FunE() { printf("Fun E\n"); }
    
private:
    char data;
};

#endif /* defined(__Demo__A__) */

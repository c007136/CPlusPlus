//
//  FunPointerSize.h
//  MultiInheritance
//
//  Created by miniu on 15/7/5.
//  Copyright (c) 2015年 miniu. All rights reserved.
//

#ifndef __MultiInheritance__FunPointerSize__
#define __MultiInheritance__FunPointerSize__

#include <stdio.h>

struct CB
{
    void funb() {}
    int b;
};

struct CC
{
    void func() {}
    int c;
};

struct test : public CB, public CC
{
    void funt() {}
};

#endif /* defined(__MultiInheritance__FunPointerSize__) */

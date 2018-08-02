//
//  main.cpp
//  VAList
//
//  Created by muyu on 2018/8/1.
//  Copyright © 2018年 muyu. All rights reserved.
//

#include <iostream>

void testCharFunc(const char *message, ...)
{
    const char *arg;
    va_list args;
    va_start(args, message);
    printf("message is %s\n", message);
    while ((arg = va_arg(args, const char *)) != NULL) {
        printf("message is %s\n", arg);
    }
    va_end(args);
}

int testIntFunc(int arg_nums, ...)
{
    int sum = 0;
    va_list ap;
    
    va_start(ap, arg_nums);
    for (int i = 0; i < arg_nums; i++) {
        sum += va_arg(ap, int);
    }
    va_end(ap);
    
    return sum;
}

int main(int argc, const char * argv[])
{
    int sum = testIntFunc(4, 2, 3, 4, 5);
    printf("sum is %d\n", sum);
    
    testCharFunc("aaa", "bbb", "ccc", "ddd", NULL);
    
    return 0;
}

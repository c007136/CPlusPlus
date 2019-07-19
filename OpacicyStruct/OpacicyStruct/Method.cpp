//
//  Method.cpp
//  OpacicyStruct
//
//  Created by muyu on 2018/8/1.
//  Copyright © 2018年 muyu. All rights reserved.
//

#include "Method.hpp"
#include "Struct.h"
#include <stdlib.h>
#include <string.h>

MyStruct *createStruct()
{
    MyStruct *pStruct = (MyStruct *)malloc(sizeof(MyStruct));
    memset(pStruct, 0, sizeof(MyStruct));
    pStruct->age = 10;
    pStruct->name = (char *)malloc(5);
    memcpy(pStruct->name, "muyu", 5);
    return pStruct;
}

void printfStruct(MyStruct *pStruct)
{
    if (pStruct == NULL) {
        printf("the struct is null\n");
        return;
    }
    
    printf("age is %d---name is %s", pStruct->age, pStruct->name);
}

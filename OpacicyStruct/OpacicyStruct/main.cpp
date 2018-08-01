//
//  main.cpp
//  OpacicyStruct
//
//  Created by muyu on 2018/8/1.
//  Copyright © 2018年 muyu. All rights reserved.
//

#include <iostream>
#include "Method.hpp"

int main(int argc, const char * argv[])
{
    MyStruct *pStruct = createStruct();
    printfStruct(pStruct);
    
    return 0;
}

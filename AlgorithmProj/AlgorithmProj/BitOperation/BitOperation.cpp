//
//  BitOperation.cpp
//  AlgorithmProj
//
//  Created by runsheng on 2017/7/20.
//  Copyright © 2017年 段洪春. All rights reserved.
//

#include "BitOperation.hpp"

int BitOperation::numberOf1(int n)
{
    int numberOf1 = 0;
    while(n != 0)
    {
        n = (n - 1) & n;
        numberOf1++;
    }
    return numberOf1;
}

int BitOperation::numberOfChangeValue(int m, int n)
{
    int diff = m ^ n;
    return numberOf1(diff);
}

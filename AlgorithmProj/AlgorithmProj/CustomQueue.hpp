//
//  CustomQueue.hpp
//  AlgorithmProj
//
//  Created by runsheng on 2017/7/17.
//  Copyright © 2017年 段洪春. All rights reserved.
//

#ifndef CustomQueue_hpp
#define CustomQueue_hpp

#include <stdio.h>
#include <stack>

using namespace std;
template <typename T>
class CustomQueue {
    
public:
    CustomQueue();
    ~CustomQueue();
    
    void addToTail(const T& node);
    T deleteHead();
    
private:
    stack<T> stack1;
    stack<T> stack2;
};

#endif /* CustomQueue_hpp */

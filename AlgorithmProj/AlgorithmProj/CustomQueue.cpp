//
//  CustomQueue.cpp
//  AlgorithmProj
//
//  Created by runsheng on 2017/7/17.
//  Copyright © 2017年 段洪春. All rights reserved.
//

#include "CustomQueue.hpp"

template <typename T>
CustomQueue<T>::CustomQueue() {
//    stack1 = new stack<T>();
//    stack2 = new stack<T>();
}

template <typename T>
void CustomQueue<T>::addToTail(const T& node)
{
    stack1.push(node);
}

template <typename T>
T CustomQueue<T>::deleteHead()
{
    if(stack2.size() <= 0)
    {
        while(stack1.size() > 0)
        {
            T data = stack1.top();
            stack1.pop();
            stack2.push(data);
        }
    }
    
    if(stack2.size() == 0)
    {
        throw new exception();
    }
    T head = stack2.top();
    stack2.pop();
    return head;
}

template <typename T>
CustomQueue<T>::~CustomQueue() {
    while(stack1.size() > 0)
    {
        stack1.pop();
    }
    
    while(stack2.size() > 0)
    {
        stack2.pop();
    }
}

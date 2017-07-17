//
//  main.cpp
//  AlgorithmProj
//
//  Created by runsheng on 2017/7/17.
//  Copyright © 2017年 段洪春. All rights reserved.
//

#include <iostream>
#include "CustomQueue.hpp"
#include "ListNodeDemo.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
//    CustomQueue<int> *queue = new CustomQueue<int>();
//    int array[] = {1,3,2,6,5,4};
//    for(int index = 0;index < 6; ++index)
//    {
//        queue->addToTail(array[index]);
//    }
//    queue->deleteHead();
    ListNode *node1 = new ListNode();
    node1->m_nValue = 1;
    
    ListNode *node2 = new ListNode();
    node2->m_nValue = 2;
    
    ListNode *node3 = new ListNode();
    node3->m_nValue = 3;
    
    ListNode *node4 = new ListNode();
    node4->m_nValue = 4;
    
    node1->m_pNext = node2;
    node2->m_pNext = node3;
    node3->m_pNext = node4;
    
    ListNodeDemo *demo = new ListNodeDemo();
    demo->printListReversingly_Recursively(node1);
    
    return 0;
}

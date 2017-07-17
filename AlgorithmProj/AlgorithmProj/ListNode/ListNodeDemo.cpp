//
//  ListNodeDemo.cpp
//  AlgorithmProj
//
//  Created by runsheng on 2017/7/17.
//  Copyright © 2017年 段洪春. All rights reserved.
//

#include "ListNodeDemo.hpp"
#include <stack>
#include <iostream>

using namespace std;

void ListNodeDemo::printListReversingly_Iteratively(ListNode *pHead)
{
    stack<ListNode *> nodes;
    ListNode *pNode = pHead;
    while(pNode != NULL)
    {
        nodes.push(pNode);
        pNode = pNode->m_pNext;
    }
    
    while(nodes.size() != 0)
    {
        pNode = nodes.top();
        cout << pNode->m_nValue <<endl;
        nodes.pop();
    }
}

void ListNodeDemo::printListReversingly_Recursively(ListNode *pHead)
{
    if(pHead != NULL)
    {
        printListReversingly_Recursively(pHead->m_pNext);
        printf("%d",pHead->m_nValue);
    }
}
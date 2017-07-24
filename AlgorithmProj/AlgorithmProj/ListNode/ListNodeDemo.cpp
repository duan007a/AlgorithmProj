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

ListNode* ListNodeDemo::findKthToTail(ListNode *pHead, unsigned int k)
{
    if (pHead == NULL && k == 0) {
        return NULL;
    }
    
    ListNode* retNode = NULL;
    
    ListNode *firstPointer = pHead;
    ListNode *secondPointer = pHead;
    
    unsigned int nodeCount = 1;
    while (firstPointer->m_pNext != NULL)
    {
        firstPointer = firstPointer->m_pNext;
        if (nodeCount > k - 1) {
            secondPointer = secondPointer->m_pNext;
        }
        nodeCount++;
    }
    
    if (nodeCount >= k) {
        retNode = secondPointer;
    }
    return retNode;
}

ListNode* ListNodeDemo::reverseList_Iteratively(ListNode* pHead)
{
    if (pHead == NULL || pHead->m_pNext == NULL)
    {
        return pHead;
    }
    
    ListNode *preNode = NULL;
    while (pHead != NULL) {
        ListNode *tmpNode = pHead->m_pNext;
        pHead->m_pNext = preNode;
        preNode = pHead;
        pHead = tmpNode;
    }
    return preNode;
}

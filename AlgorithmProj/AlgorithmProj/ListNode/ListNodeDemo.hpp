//
//  ListNodeDemo.hpp
//  AlgorithmProj
//
//  Created by runsheng on 2017/7/17.
//  Copyright © 2017年 段洪春. All rights reserved.
//

#ifndef ListNodeDemo_hpp
#define ListNodeDemo_hpp

#include <stdio.h>

struct ListNode {
    int m_nValue;
    ListNode *m_pNext;
};

class ListNodeDemo {
    
public:
    
    // 采用栈先将所有节点依次压栈，然后再依次pop节点打印数据
    void printListReversingly_Iteratively(ListNode* pHead);
    
    // 采用递归的方式逆序打印链表各个节点数据
    void printListReversingly_Recursively(ListNode* pHead);
    
    // 找到单链表中的倒数第k个结点
    ListNode* findKthToTail(ListNode *pHead, unsigned int k);
    
    // 单链表逆序(循环)
    ListNode* reverseList_Iteratively(ListNode *pHead);
    
    // 单链表逆序(递归)
    ListNode* reverseList_Recursively(ListNode *pHead);
};

#endif /* ListNodeDemo_hpp */

//
//  SortDemo.cpp
//  AlgorithmProj
//
//  Created by runsheng on 2017/7/17.
//  Copyright © 2017年 段洪春. All rights reserved.
//

#include "SortDemo.hpp"

void SortDemo::quick_sort(int *arr, const int left, const int right)
{
    if(left >= right) return;
    int key = arr[left];
    int head = left;
    int tail = right;
    
    while(head < tail)
    {
        while(head < tail && arr[tail] >= key)
        {
            tail--;
        }
        
        if(arr[tail] < key)
        {
            arr[head] = arr[tail];
            arr[tail] = key;
        }
        
        while(head < tail && arr[head] <= key)
        {
            head++;
        }
        
        if(arr[head] > key)
        {
            arr[tail] = arr[head];
            arr[head] = key;
        }
    }

    quick_sort(arr, left, head - 1);
    quick_sort(arr, head+1, right);
}

void SortDemo::Qsort(int a[], int low, int high)
{
    if(low >= high)
    {
        return;
    }
    int first = low;
    int last = high;
    
    /*用字表的第一个记录作为枢轴*/
    int key = a[first];
    
    while(first < last)
    {
        while(first < last && a[last] >= key)
        {
            --last;
        }
        
        /*将比第一个小的移到低端*/
        a[first] = a[last];
        
        while(first < last && a[first] <= key)
        {
            ++first;
        }
        
        /*将比第一个大的移到高端*/
        a[last] = a[first];
    }
    a[first] = key;/*枢轴记录到位*/
    Qsort(a, low, first-1);
    Qsort(a, first+1, high);
}

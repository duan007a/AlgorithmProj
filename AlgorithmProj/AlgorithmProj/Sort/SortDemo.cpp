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

/*
void SortDemo::merge_sort(int* data,int a,int b,int length,int n){
    int right;
    if(b+length-1 >= n-1)
    {
        right = n-b;
    }else{
        right = length;
    }
    int* temp = new int[length+right];
    int i = 0, j = 0;
    while(i<=length-1 && j<=right-1)
    {
        if(data[a+i] <= data[b+j])
        {
            temp[i+j] = data[a+i];i++;
        }else
        {
            temp[i+j] = data[b+j];
            j++;
        }
    }
    if(j == right)
    {//a中还有元素，且全都比b中的大,a[i]还未使用
        memcpy(temp + i + j, data + a + i, (length - i) * sizeof(int));
    }
    else if(i == length)
    {
        memcpy(temp + i + j, data + b + j, (right - j)*sizeof(int));
    }
    memcpy(data+a, temp, (right + length) * sizeof(int));
    delete [] temp;
}
void SortDemo::mergeSort(int* data, int n){
    int step = 1;
    while(step < n)
    {
        for(int i=0; i <= n-step-1; i+=2*step)
        {
            merge_sort(data, i, i+step, step, n);
        }
        
        //将i和i+step这两个有序序列进行合并
        //序列长度为step
        //当i以后的长度小于或者等于step时，退出
        step*=2;//在按某一步长归并序列之后，步长加倍
    }
}
 */

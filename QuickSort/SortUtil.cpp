//
//  SortUtil.cpp
//  QuickSort
//
//  Created by Nicholas Hernadez on 5/18/17.
//  Copyright © 2017 Nicholas Hernadez. All rights reserved.
//

#include "SortUtil.h"
#include <algorithm>
#include <utility>
#include <iostream>


void quickSort(int *lst, int start, int end){
    if(start>=end){
        return;
    }
    int pivotVal = lst[(end+start)/2];
    int i = start, j = end;
    
    while(i<=j){
        while(lst[i]<pivotVal){
            i++;
        }
        while(lst[j]> pivotVal){
            j--;
        }
        if(i<=j){
            std::swap(lst[i],lst[j]);
            i++;
            j--;
        }
    }
    //recursiveStep
    quickSort(lst, i, end);
    quickSort(lst, start, j);

    
    
    
}
void printArray(int *lst, int length){
    for(int i = 0; i< length; i++){
        std::cout<<lst[i]<<" ";
    }
    std::cout<<std::endl;
}


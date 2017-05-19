//
//  main.cpp
//  QuickSort
//
//  Created by Nicholas Hernadez on 5/18/17.
//  Copyright © 2017 Nicholas Hernadez. All rights reserved.
//

#include <iostream>
#include "SortUtil.h"

using namespace std;


int arr[9];
int main(int argc, const char * argv[]) {
    int length = 9;
    for(int i = 0; i< length; i++){
        arr[i] = rand()%100;
    }
    printArray(arr , length);
    quickSort(arr, 0, length-1);
    printArray(arr , length);

    
    return 0;
}



//
//  main.c
//  bubble sorting
//
//  Created by Mark Antonio on 3/13/20.
//  Copyright © 2020 Mark Antonio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //receing the array size
    int size;
    printf("kindly insert the array size: ");
    scanf("%d",&size);
    //receiving the array elements
    int arr[size];
    for(int i=0;i<size;i++){
        printf("insert the element in [%d]: ", i+1);
        scanf("%d", &arr[i]);
    }
    //performing the bubble sort
    for(int i=1;i<size;i++){ //passes
        for(int j=0;j<size-i;j++){ //positions
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    //printing the array
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

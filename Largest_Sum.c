#include<stdio.h>
/*
int maxSubArraySum(int arr[],int size){
    int maxSoFar = 0, maxEndingHere = 0;
    for(int i=0;i<size;i++){
        maxEndingHere = maxEndingHere+arr[i];
        if(maxEndingHere<0){
            maxEndingHere = 0;
        }
        if(maxSoFar<maxEndingHere){
            maxSoFar = maxEndingHere;
        }
    }
    return maxSoFar;
} */

void RotateKthPosition(int arr[], int n, int k){
    for(int j=0;j<k;j++){
        int temp = arr[0];
        int i;
        for(i=0;i<n-1;i++){
            arr[i] = arr[i+1];
        }
        arr[i] = temp;
    }
}

int main(){
    int arr[] = {2, 3, -3, 1, 4, 5, 9, -7, 2};
    //maxSubArraySum(arr, 9);

    RotateKthPosition(arr, 9, 3);

    for(int i=0;i<9;i++){
        printf("%d  ", arr[i]);
    }

    //printf("%d",result);
    return 0;
}

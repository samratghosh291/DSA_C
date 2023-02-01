#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int partition(int arr[],int low,int high){
            
            int pivot=arr[high];
            int i= (low-1);

        for(int j=low;j<high;j++){
            if(arr[j]<pivot){
                i++;
                swap(&arr[i],&arr[j]);
            }
        } 
        swap(&arr[i+1],&arr[high]);
        return (i+1);   
}

void quickSort(int arr[],int low,int high){
    
    if(low<high){

    int pi=partition(arr,low,high);

    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);

    }

}


void display(int arr[],int n){
    printf("The sorted array is: ");
    for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
    }
}

int main(){

    int arr[]={5,7,2,9,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    quickSort(arr,0,n-1);
    printf("\n");
    display(arr,n);
    return 0;
}
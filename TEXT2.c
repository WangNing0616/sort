#include <stdio.h>

void bubble_sort(int array[],int size){
    int i=0,j=0;
    int temp;
    for(i;i<size;i++){
        for(j;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
void main(){    
    int array[]={1,2,3,8,5,6,9,7,4,1,52,3,2};
    int len=sizeof(array)/sizeof(array[0]);
    bubble_sort(array ,len);
    for(int i=0;i<len;i++){
        printf("%d ",array[i]);
    }
}
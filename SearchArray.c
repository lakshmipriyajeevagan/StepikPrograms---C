#include<stdio.h>
int search_val(int arr[],int arr_size,int value){
    int result;
    for(int i=0; i<arr_size; i++){
        if(arr[i]==value){
            result=i; break;
            //printf("%d", i);
        }
        else{
            result=-1;
        }
    }
    printf("%d", result);
}
int main(){
    int arr_size, arr[arr_size], value, i;
    scanf("%d", &arr_size);
    for(i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &value);
    search_val(arr,arr_size,value);
    //printf("-1");
}

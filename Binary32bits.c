#include<stdio.h>
#include<stdlib.h>
int a[100];
int convert(int n){
    //convert input to binary
    int i;
    for(i=0;n>0;i++){    
        a[i]=n%2;   // a[i] contains the binary number 
        n=n/2;    
    }
    for(i=31;i>=0;i--)    
        {    
        printf("%d",a[i]);    
        }
}

int main(){
    int num;
    scanf("%d", &num);
    convert(num);
    
}




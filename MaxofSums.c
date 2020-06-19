
#include<stdio.h>
#define MAX(x,y) ((x)>(y)?(x):(y))

int main(){
    int n; int a=0;
    scanf("%d", &n); 
    int val[n];
    
    //read each integer
    for(int i=0; i<n; i++){
        scanf("%d", &val[i]);
        }
   
    //sum of digits in each integer
    for(int i=0;i<n;i++){
        int sum=0;
        while(val[i]){
            sum = val[i]%10 + sum;
            val[i] = val[i]/10;
        }
       
        a = MAX(a,sum);
    }
   
printf("%d", a);
   
    
    return 0;
}






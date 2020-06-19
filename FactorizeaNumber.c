#include<stdio.h>
#include<math.h>
int primeFactors(int n) 
{   int times=0;
 
    while (n%2 == 0) 
    {   int forl();
        n = n/2; 
        times++;
        
        if(n%2!=0){
            printf("%d %d\n", 2, times);
            forl(n);
            break;
        }
        
    } //if(times!=0)
    //printf("%d %d\n", 2, times);
    
}
    
    int forl(int n){ int times=0;
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            n = n/i; 
            times++;
        } if(times!=0){
    printf("%d %d\n", i, times);
        }
    } 
        
    if (n > 2){ 
         printf ("%d 1\n", n); }
         
} 
  
int main() 
{ 
    int n; 
    scanf("%d", &n);
    if(n<=1){
        printf ("%d %d\n", n,n);
    }
    else if(n%2==0){
        primeFactors(n); 
    }else{
        forl(n);
    return 0; }
} 

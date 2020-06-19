#include<stdio.h>
int main(){
    int i, a=0;
    float n[3], sum=0, avg=0;
    scanf("%f %f %f %f", &n[0], &n[1], &n[2], &n[3]);
    for (i=0; i<4; i++)
        if (n[i] > 0){
            ++a;
            sum = sum + n[i];
            avg = sum / a;
        }
    
    printf("%.2f", avg);
    return 0; 
}
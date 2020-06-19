#include<stdio.h>
int main(){
    int a,b,c;
    for (c=1; c<=20; c++)
        for (a=1; a<=20; a++)
            for (b=1; b<=20; b++)
                if (a<b && b<c && a*a + b*b == c*c){
                    printf ("%d %d %d\n", a,b,c);
                }
    return 0;
}





#include<stdio.h>
int main(){
    int n, original, rev=0, rem;
    scanf("%d", &n);
    original = n;
    while (n!=0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if (original==rev)
        printf("true");
    else
        printf("false");
    return 0;
}





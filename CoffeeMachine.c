#include<stdio.h>    
#include<stdlib.h>  

//function for last two bits (type)
int coffeeType(int y, int x){
    if(y == 0 && x == 0){
        printf("Espresso, ");
    }else if(y == 1 && x == 1){
        printf("Americano, ");
    }else if(x ==0 && y == 1){
        printf("Cappuccino");
    }else if(y==1 && x == 0){
        printf("Long Coffee");
    }
}

//function for sugar sugarLevel
int sugarLevel(int l, int m, int n){
    if(l ==0 && m == 0 && n ==0){
        printf("0 sugar, ");
    }else if(l == 1 && m == 1 && n == 1){
        printf("7 sugar, ");
    }else if(l ==1 && m == 0 && n == 1){
        printf("5 sugar, ");
    }else if(l ==0 && m == 1 && n == 1){
        printf("6 sugar, ");
    }else if(l ==1 && m == 1 && n == 0){
        printf("3 sugar, ");
    }else if(l ==0 && m == 0 && n == 1){
        printf("4 sugar, ");
    }else if(l ==0 && m == 1 && n == 0){
        printf("2 sugar, ");
    }else if(l ==1 && m == 0 && n == 0){
        printf("1 sugar, ");
    }
}

//function for cup cupLid
int cupLid(int x){
    if (x==0){
        printf("no lid");
    }else if (x==1){
        printf("with lid");
    }
}

int main(){  
    int a[10],i; 
    int n;
    int coffeeType(int y, int x);
    int sugarLevel(int l, int m, int n);
    int cupLid(int x);
    scanf("%d",&n);   
    
    //convert input to bimary
    for(i=0;n>0;i++)    
    {    
    a[i]=n%2;   // a[i] contains the binary number 
    n=n/2;    
    }
    
    coffeeType(a[0], a[1]);
    sugarLevel(a[2], a[3], a[4]);
    cupLid(a[5]);
}





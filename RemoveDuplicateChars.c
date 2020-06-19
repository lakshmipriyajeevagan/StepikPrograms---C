

#include <stdio.h>
#include<string.h>
char removedupes(char *s){
    if (s[0] == '\0') 
        return;
    if(s[0]==s[1]){
        int i=0;
        while(s[i]!='\0'){
            s[i]=s[i+1];
            i++;
        }removedupes(s);
    }removedupes(s+1);
}


int main()
{
    char string[100];
    //int i,j;
    scanf("%s", string);
    removedupes(string);
    printf("%s", string);
    return 0;
}


#include<stdio.h>
int main(){

    char a[6];
    scanf("%[^\n]s",a);
    for (int i = 5; i>=0;i--)
    { 
        printf("%s\n",a+i);

    }
    
}

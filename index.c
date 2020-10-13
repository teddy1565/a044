#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        n = (n*n*n+5*n+6)/6;
        printf("%d\n",n);
    }
    return 0;
}
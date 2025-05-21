#include<stdio.h>
#include<stdlib.h>

int main (){
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b); 
    int xtoa=abs(a-x);
    int xtob=abs(b-x);
    if (xtoa<xtob){
        printf("A\n");
    }
    else if (xtoa>xtob){
        printf("B\n");
    }
    else{
        printf("as you wish\n");
    }
}
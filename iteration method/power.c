#include<stdio.h>
void main(){
   
    int x,y,pow=1,i;
     printf("enter number x");
    scanf("%d",&x);
     printf("enter number y");
    scanf("%d",&y);
    
    for(i=1;i<=y;i++){
        pow*=x;
    }
    printf("%d",pow);
    
}

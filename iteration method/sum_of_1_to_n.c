#include<stdio.h>
void main(){
    printf("enter n");
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
}
int sum(int n){
    int i,sum;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
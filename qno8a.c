#include<stdio.h>
int main(){
   int n,i=1,sum=0;
   printf("Enter the nth term in series:");
   scanf("%d",&n);
   while (i<=n){
    sum=sum+i;
    i=(i*2)+1;


   }
   printf("The sum up to %dth term is %d \n",n,sum);
}
#include <stdio.h>

int main(){
    int num,power,sum=0,num2;

    printf("Input  a number: ");
    scanf("%d",&num);
    num2=num;

    for(;num!=0;num=num/10){
         power=num % 10;
         sum=sum+(power*power*power);
    }
    if(sum==num2){
         printf("%d is an Armstrong number.\n",num2);
         }    
     else{
        printf("%d is not an Armstrong number.\n",num2);
     }
         

}


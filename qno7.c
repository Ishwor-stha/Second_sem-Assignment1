#include<stdio.h>
int main(){
    int original_num,num2,sum=0,reminder;
    printf("Enter a number:");
    scanf("%d",&original_num);
    num2=original_num; 
    while (original_num!=0)
    {
       reminder=original_num%10;
       sum=sum*10+reminder;
       original_num=original_num/10;
    }

    if (sum==num2){

        printf("%d is Palindrome number\n ",num2);
    }
    else
    {
        printf("%d number is not a Palindrome number\n",num2);
    }
}
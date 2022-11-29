#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main(){
   
   int a, count,digit,mod,sum;
   int n,reverse=0,rem;//for reverse of number
    printf("Enter 1 to display reverse number\n");
    printf("Enter 2 to count a number of digits\n");
    printf("Enter 3 to display sum of digits\n");
    printf("Enter 4 to to find Even or Odd\n");
    printf("Enter 5 to exit\n");
    scanf("%d",&a);
    switch(a){
    case 1:
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
    rem=n%10;
    reverse=reverse*10+rem;
    n/=10;
    }   
    printf("Reversed Number is :%d\n",reverse);
    break;
    case 2:
    count=0;
    printf("Enter a number of digits::");
    scanf("%d",&digit);
    while (digit!=0)
    {
     digit=digit/10;
     count=count+1;
    }
    printf("You have entered %d no of digits\n",count);
    break;
    
    case 3:
    sum=0;
    printf("Enter a digits:");
    scanf("%d",&digit);
    while(digit!=0){
        mod=digit%10;
        sum=sum+mod;
        digit=digit/10;
    }
    printf("The sum of digits is %d\n",sum);
    break;
    
    case 4:
     printf("Enter a number:");
     scanf("%d",&digit);
    if (digit%2==0)
    {
        printf("%d is even number\n",digit);

    }else{
        printf("%d is odd number\n",digit);
    }
    
    break;
    case 5:
    exit(0);
    break;
    default:{
        printf("Invalid number is give\n");
    }
   
    }
}
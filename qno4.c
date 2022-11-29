#include<stdio.h>

int main(){
    char a;
    printf("Enter any character,digits and special symbol:");
    scanf("%c",&a);
    if (a>='a' && a<='z'){
        printf("You have entered lower case alphabet.\n");
    }
    else if (a>='A' && a<='Z')
    {
       printf("You have entered upper case alphabet.\n");
    }
    else if (a>='0' && a<='9')
    {
       printf("You have entered a number.\n");
    }
    else{
        printf("You have entered a special symbol\n");
    }
    
   
}
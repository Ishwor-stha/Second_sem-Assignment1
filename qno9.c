#include<stdio.h>

int main(){
int n;
for (n=1; n<=100;n++)
{
   if (n!=1){
      if (n==2 || n==3||n==5){
         printf("%d\t",n);
      }
      else if(n%2==1 && n%3!=0 && n%5!=0 && n%7!=0){
         printf("%d\t",n);
         
      }

   }       

}
}

#include<stdio.h>
int main(){

int i,n;
float sum=0;
printf("Enter the Nth term:");
scanf("%d",&n);
for(i=1;i<=n;i++){
if (i%2==0)
{
    sum=sum+1/(float)i;
}
else{
    sum=sum-1/(float)i;
}

}
printf("%f",sum);
}
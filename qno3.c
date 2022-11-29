#include<stdio.h>
int main(){
 /* 8hour daily work hour =RS 100
 if employee works more than 8 hour it counts as over work= RS 120*/
    int hour,over_hour,salary;
printf("Enter the working hour of employee:");
scanf("%d",&hour);
if (hour<=8){
salary=hour*100;
printf("Your total salary of %d hour is Rs%d\n",hour,salary);
}
else{
over_hour=(hour-8)*120;/*example:over_hour=(9-8)*120
                                          =1*120*/
salary=(8*100)+over_hour;
printf("Your total salary of %d hour is Rs%d\n",hour,salary);
}
}
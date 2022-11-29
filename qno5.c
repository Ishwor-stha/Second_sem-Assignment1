#include<stdio.h>
int main(){
float English,C_programming,Microprocessor,Maths,Account,Per,total;
printf("Enter the marks of English,C_programming,Microprocessor,Maths and Account respectively:");
scanf("%f%f%f%f%f",&English,&C_programming,&Microprocessor,&Maths,&Account);
total=English+C_programming+Microprocessor+Maths+Account;
Per=total/5;
if (English<35||C_programming<35|| Microprocessor<35|| Maths<35 || Account<35){
    printf("You are FAIL\n");
}
else{
    printf("You are PASS\n");
}
if(Per>=90 && Per<100){
    printf("Your percentage is %f and your grade is A\n",Per);
}
else if(Per>=75 && Per<=89){
    printf("Your percentage is %f and your grade is B\n",Per);
}
else if(Per>=60 && Per<=74){
    printf("Your percentage is %f and your grade is C\n",Per);
}
else if(Per>=35 && Per<=59){
    printf("Your percentage is %f and your grade is D\n",Per);
}
else{
    printf("Your percnetage is %f and your grade is F\n",Per);
}
}




#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    /* area of circle=pi r^2; area of rectangle=l*b; area of square a^2   a=side of square;
     area of triangle=1/2 × b × h.*/
     int i;
     float pi=3.1415,radidus,area,length,breadth,height,a;
printf("Enter 1 to calculate the area of circle:\n");
printf("Enter 2 to calculate the area of rectangle:\n");
printf("Enter 3 to calculate the area of square:\n");
printf("Enter 4 to calculate the area of triangle:\n");
printf("Enter 5 to  exit:\n");
scanf("%d",&i);
switch(i){
    case 1:
    printf("Enter the Radidus:");
    scanf("%f",&radidus);
    area=pi*(radidus*radidus);
    printf("The Area of circle is %.2f\n",area);
    break;
    case 2:
    printf("Enter the Length and breadth of rectangle:");
    scanf("%f%f",&length,&breadth);
    area=length*breadth;
    printf("The Area of rectangle is %.2f\n",area);
    break;
    case 3:
    printf("Enter the length of side:");
    scanf("%f",&a);
    area=a*a;
    printf("The Area of square is %.2f\n",area);
    break;
    case 4:
    printf("Enter the base and height of traiangle:");
    scanf("%f%f",&breadth,&height);
    area=(1*breadth*height)/2;
    printf("The Area of traingle is %.2f\n",area);
    break;
    case 5:
    exit(0);
     break;
 default:
 printf("Invalid number given please try again\n");
}
}
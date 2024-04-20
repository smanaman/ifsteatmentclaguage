#include<stdio.h>
int main (){
float principal;	
float interest;
float time;
float sum;
printf("Enter your principal Amount");
scanf("%f",&principal);	

printf("Enter your interest rate");
scanf("%f",&interest);	

printf("Enter your time period");
scanf("%f",& time);	

sum=(principal*interest* time)/100;

if(sum<0){
	printf("your value is nagtive i can't show your value error  ");
}else{
		printf("your value is positive\n");
		printf("%.1f\n",sum);
}
}
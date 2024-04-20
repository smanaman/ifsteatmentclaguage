#include<stdio.h>
int main(){
float  amount;
float discount=0;
float final_amount;
printf("company that offers discounts to customers based on their total purchase amount.");
printf("Enter your total amount i give your discount")	;
scanf("%f",& amount);

if( amount<100){
printf("you Amount is lasshan 100 no discount this value");
}else if( amount>=100 &&  amount<=500){
	printf("you purchas 5%% discount");
discount=amount*0.05;
final_amount=amount-discount;

}else if( amount>=500 &&  amount<=1000){
	printf("you purchas 10%% discount");
	discount=amount*0.10;
final_amount=amount-discount;
}else{
	printf("you purchas 15%% discount\n");
	discount=amount*0.15;
final_amount=amount-discount;
}
printf("your amount %f\n",amount)	;
printf("discount amount %f\n",discount);
printf("final_amount %f\n",final_amount);
}
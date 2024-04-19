#include<stdio.h>
 int main(){
int a;
int b;

printf("Enter your first number");
scanf("%d",&a);

printf("Enter your second number");
scanf("%d",&b);

if(a<b){
	printf("minemum numer is%d",a);
}else{
	printf("minemum numer is%d",b);
}
}
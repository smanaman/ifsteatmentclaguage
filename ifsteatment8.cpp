#include<stdio.h>
int main(){
int temperature;	
 printf("Enter your temperature i give you categoriz hot ,moderate,cold ")	;
 scanf("%d",&temperature);
 if(temperature>=0 && temperature<=24){
 	printf("this temperature is cold");
 }else if(temperature>=24 && temperature<=38){
 	printf("this temperature is moderate");
 }else{
 	printf("this temperature is Hot");
 }


}
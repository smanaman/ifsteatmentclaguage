#include<stdio.h>
int main(){
	int degrees;
		
printf("Enter your degrees");
scanf("%d",&degrees);	
	
if(degrees>=0 && degrees<=90){
	printf("First quadrant");
}else if(degrees>=90 && degrees<=180){
	printf("Second quadrant");
}else if(degrees>=180 && degrees<=270){
	printf("Third quadrant");
} else if(degrees>=270 && degrees<=360){
	printf("Fourth quadran");
}else{
	printf("you result not found");
}	
}
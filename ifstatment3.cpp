#include<stdio.h>

int main(){
int yourmark;

	
printf("Enter your mark ")	;
scanf("%d",&yourmark);
if(yourmark>=90){
	printf("A");
}else if(yourmark>=80 && yourmark<=89){
	printf("b");
}else if(yourmark>=70 && yourmark<=79){
	printf("c");
}else if(yourmark>=33 && yourmark<=69 ){
	printf("d");
}else if(yourmark>=0 && yourmark<=32){
	printf("chalaja tu fail he ");
}
}
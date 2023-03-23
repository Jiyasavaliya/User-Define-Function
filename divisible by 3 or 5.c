#include<stdio.h>
void divisible(int n){
	
	if(n%3==0 && n%5==0)
		printf("divisible by both 3 and 5");
		
	else
		printf("is not divisible by either 3 or 5");
	
}

int main(){
	int num;
	
	printf("enter the num : ");
	scanf("%d",&num);
	
	divisible(num);
}

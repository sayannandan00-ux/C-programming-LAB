//write a c program to check whether a number is prime or not using while loop then using for loop

#include<stdio.h>

int main(){
	int n;
	printf("enter the number : ");
	scanf("%d",&n);
	
	int i=2;
	for(i=2;i<n;i++){
		if(n%i==0){
			break;
		}
	}
	if(n<=1){
		printf("not a prime number......");
	}else if(i==n){
		printf("it is a prime number.....");
	}else{
		printf("not a prime number.....");
	}
	return 0;
}

//write a c programme to count a digits of a hole number

#include<stdio.h>

int main(){
	int n,c=0;
	printf("enter the digit : ");
	scanf("%d",&n);
	
	while(n!=0){
		n=n/10;
		c++;
	}
	printf("%d",c);
	return 0;
}

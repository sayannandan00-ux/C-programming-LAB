/*write a c program to print the following partan

12345
1234
123
12
1                         */

#include<stdio.h>

int main(){
	int n,i,j;
	printf("enter your number :");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}

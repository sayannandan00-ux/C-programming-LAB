/*write a c program to print the following partan
*
**
***
****
*****
******               */

#include<stdio.h>

int main(){
	int n,j,i;
	printf("enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

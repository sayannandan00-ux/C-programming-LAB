//0,1,1,2,3,5,8.....upto n terms write a c programme to display the given sequence

#include<stdio.h>

int main(){
	int n;
	printf("enter the n number :");
	scanf("%d",&n);
	
	int i=1;
	int a=0,b=1,c;
	while(i<=n){
		printf("%d\t",a);
		c=a+b;
		a=b;b=c;
		i++;
	}
	return 0;
}

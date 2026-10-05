//tribonacchi num of n number

#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	int i;
	int a=0,b=1,c=1,d;
	while(i<=n){
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		i++;
		printf("%d\t",d);
	}
	return 0;
}

#include<stdio.h>
int main() {

	int a,b,c,max;
	printf("enter the number respectively");
	scanf("%d %d %d",&a,&b,&c);


	   max=((a>b&&a>c)? a:(b>c)?b:c);
	printf("%d is greater than %d and %d and %d",max,a,b,c);
}

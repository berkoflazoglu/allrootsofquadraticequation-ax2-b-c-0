#include <stdio.h>
#include <math.h>

int main()
{
	int x1,x2,delta;
	int a,b,c;
		printf("enter a value:");
		scanf("%d", &a);
	
		printf("enter b value:");
		scanf("%d", &b);
	
		printf("enter c value:");
		scanf("%d", &c);
	
	delta=b*b-4*a*c;
	if (delta<0)
		printf("no root");
		
	else if (delta == 0){
		x1=-b/2*a;
		printf("x1=x2=%d", x1);	
	}
	else{
		x1=(-b-sqrt(delta))/2*a;
		x2=(-b+sqrt(delta))/2*a;
		printf("%d %d",x1 ,x2);
	}
	
	
	
return 0;
}
	


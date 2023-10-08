#include <stdio.h>

int fact(int n)
{
	int res=1;

	if (n<=1) return 1;

	else 
	
	res=n*fact(n-1);
	
	return res;
}


int main()
{

	int no=0;
	int res_main=1;

	printf("enter no \n");
	scanf("%d",&no);

	res_main=fact(no);

	printf("factorial of %d is %d\n",no,res_main);
}
 
	

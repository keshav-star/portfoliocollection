#include <stdio.h>
int fact(int i)
{
	static int res=1;

	res*=i;

	i--;
	if (i>1) fact(i);

	else return res;
}	

int main()
{
	int j=0;
	long int result=1;

	printf("enter no for factorial \n");
	scanf("%d",&j);

	if (j==0) { result=1; printf( "result is %ld \n",result); return; }

	else 
	{
		result=fact(j);
		printf("result = %ld\n",result);
	}

}



 #include <stdio.h>
 
 int add(int x,int y)
 {
 	return x+y;
 }
 int sub(int x,int y)
 {
 	return x-y;
 }
 int mul(int x,int y)
 {
 	return x*y;
 }
 int main()
 {
 	int (*fp[3])(int a,int b); // pointer to a function declaration
 	int i=0;
 	fp[0]=add; 
 	fp[1]=sub;
	 fp[2]=mul;
 	for(i=0;i<3;i++)
 	printf("%d\n",fp[i](9,8));
 }

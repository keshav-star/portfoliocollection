 #include <stdio.h>
 
 void my_strcpy(char src[],char dst[])
 {
 	int i=0;
 	while(src[i]!='\0')
 	{
 		dst[i]=src[i];
 		i++;
	 }
	 dst[i]='\0';
 }
 int main()
 {
 	char src[10]="Hello";
 	char dst[10];
 	
 	my_strcpy(src,dst);
 	printf("source %s\n",src);
 	printf("destination %s",dst);
 	
 }

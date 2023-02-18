// Reverse using func

#include <stdio.h>

void reve(char str[])
{
	char copy[100], temp;
	int i, len=0, z;
	
	for(i=0; str[i]!='\0'; i++)
	{
		copy[i]=str[i];
	}
	
	for(i=0; str[i]!='\0'; i++)
	{
		len++;
	}
	
	z=len-1;
	
	for(i=0; i<len/2; i++)
	{
		temp=str[i];
		str[i]=str[z-i];
		str[z-i]=temp;
	}
	
	printf("%s\n",str);
	
}

void main()

{
	char str[100];
	
	printf("Write a sentece : ");
	gets(str);
	
	reve(str);	
}








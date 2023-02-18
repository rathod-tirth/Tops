// Reverse and palidrome or not w/o str func

#include <stdio.h>

void main()

{
	char str[100], copy[100], temp;
	int i, len=0, z;
	
	printf("Write a sentece : ");
	gets(str);
	
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
	
	for(i=0; i<len; i++)
	{
		if(str[i]==copy[i])
		{
			if(i==len-1)
			{
				printf("String is Palidrom");
			}
		}	else
		{
			printf("String is not Palidrom");
			break;
		}
	}
	
}








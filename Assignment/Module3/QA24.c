// Reverse of string using recrusive function

#include <stdio.h>
#include <string.h>

void reve(char str[])
{
	static int z, i, len, temp;
	
	len=strlen(str);
	
	z=len-1;
	
	if(i<len/2)
	{
		temp=str[i];
		str[i]=str[z-i];
		str[z-i]=temp;
		
		i++;
		
		reve(str);
	}
}

void main()

{
	char str[100];
	
	printf("Enter a sentence : ");
	gets(str);
	
	reve(str);
	
	printf("Reverse = %s", str);
}









// length of the string

#include <stdio.h>

void main()

{
	char s[30]="Hello My name is Tirth Rathod";
	int i,count=0;
	
	for(i=0; s[i]!='\0'; i++)
	{
		count++;
	}
	printf("length of the string is : %d",count);
}

// length of the string

#include <stdio.h>

void main()

{
	char s[30]="Hello My name is Tirth Rathod";
	int i,count=0;
	
	for(i=0; s[i]!='\0'; i++)
	{
		if(s[i]==' ')
		{
			continue;
		}
		count++;
	}
	printf("No. of the characters : %d",count);
}

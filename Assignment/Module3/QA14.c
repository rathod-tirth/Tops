// copy string

#include <stdio.h>

void main()

{	
	char s[30]="Hello My name is Tirth Rathod";
	char copy[30];
	int i;
	
	for(i=0; s[i]!='\0'; i++)
	{
		copy[i]=s[i];
	}
	printf("%s",copy);
}

// uppercase to lowercase and vise versa

#include <stdio.h>
#include <string.h>

void main()

{
	char str[30]="Hello My name is Tirth Rathod";
	int i, len, f;
	
	len=strlen(str);
	
	for(i=0; i<len; i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]+=32;
		}	else if(str[i]>='a' && str[i]<='z')
		{
			str[i]-=32;
		}
	}
	
	printf("%s",str);
}

// concatenate string

#include <stdio.h>
#include <string.h>

void main()

{
	char f[30], s[30], cat[30];
	int i=0, j=0, len, len2;
	
	printf("Enter a word : ");
	scanf("%s",f);
	
	printf("Enter a word : ");
	scanf("%s",s);
	
	while(f[i]!='\0')
	{
		cat[j]=f[i];
		
		i++;
		j++;
	}
	
	i=0;
	
	while(s[i]!='\0')
	{
		cat[j]=s[i];
		
		i++;
		j++;
	}
	
	cat[j]='\0';
	
	printf("%s",cat);
}










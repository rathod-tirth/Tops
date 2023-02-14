// table

#include <stdio.h>

int main()

{
	int i, a;
    
    printf("Enter any Number : ");
    scanf("%d", &a);

    for(i=1; i<11; i++)
    {
        printf("%d x %d = %d\n",a,i,a*i);
    }
    
    return 0;
}

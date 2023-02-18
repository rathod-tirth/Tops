// 2D-array Matrix

#include <stdio.h>

int main()

{
	int a[3][3]={{2,3,4},{7,4,6},{9,1,3}}, i, j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

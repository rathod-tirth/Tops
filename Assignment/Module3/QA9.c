// 2D-matrix Multiplication

#include <stdio.h>

int main()

{
	int a[2][2]={{2,3},{7,6}}, b[2][2]={{3,4},{9,1}}, i, j, k, sum;
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			sum=0;
			for(k=0; k<2; k++)
			{
				sum+=a[i][k]*b[k][j];
			}
				printf("%d ",sum);
		}
		printf("\n");
	}
}

//	2 3
//	7 6
//	
//	3 4
//	9 1
//	
//	2*3 + 3*9 = 6+27 = 33
//	2*4 + 3*1 = 8+3  = 11
//	7*3 + 6*9 = 21+54 = 75
//	7*4 + 6*1 = 28+6 = 34
//
//	33 11
//	75 34
//	
//	a[0][0] * b[0][0] + a[0][1] * b[1][0]
//	
//	a[0][0] * b[0][1] + a[0][1] * b[1][1]




  





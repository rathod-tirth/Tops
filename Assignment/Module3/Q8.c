// Total marks and percentage

#include <stdio.h>

int main()

{
	float maths, sci, eng, hindi, comp, sum, per;
	
	printf("Enter marks out of 100\n");
	
	printf("Enter marks of Maths : ");
	scanf("%f",&maths);
	
	printf("Enter marks of Science : ");
	scanf("%f",&sci);
	
	printf("Enter marks of English : ");
	scanf("%f",&eng);
	
	printf("Enter marks of Hindi : ");
	scanf("%f",&hindi);
	
	printf("Enter marks of Computer : ");
	scanf("%f",&comp);
	
	sum = maths + sci + eng + hindi + comp;
	
	printf("\nTotal Marks : %.0f\n\n",sum);
	
	per = sum/500*100;
	
	printf("Percentage : %.2f",per);
	
	return 0;
	
}













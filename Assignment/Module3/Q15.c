// Marksheet with grades

#include <stdio.h>

int main()

{
    float maths, sci, eng, hindi, comp , sum, per;
    
    printf("Enter marks out of 100\n\n");
	
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
	
	per = (sum/500)*100;

    printf("Total Marks : %.0f\nYour Percentage : %.2f\n",sum,per);
    
	if (per>75)
    {
        printf("You have passed with Distinction");
    }   else if (per>60 && per<=75)
    {
    	printf("You have passed with First class");
    }   else if (per>50 && per<=60)
    {
        printf("You have passed with Second class");
    }   else if (per>35 && per<=50)
    {
        printf("You have passed");
    }   else
    {
        printf("You Failed");
    }   

	return 0;
}











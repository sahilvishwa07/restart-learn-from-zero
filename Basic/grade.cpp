#include<stdio.h>
void main(){
	char grade;
	printf("\n Enter your grade:");
	scanf("%d",&grade);
	
	switch(grade)
	{
		case A: printf("Excellent");
		break;
		case B: printf("Best");
		break;
		case C: printf("Better");
		break;
		case D: printf("Pass");
		break;
		default :
			printf("fail");
	}
}

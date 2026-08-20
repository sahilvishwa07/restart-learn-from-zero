#include<stdio.h>
int main(){
	int choice;
	printf("\n Enter your choice : ");
	scanf("%d", &choice);
	
	switch( choice)
	{
		case 1: printf("\n Selected choice one ...");
		break;
		case 2: printf("\n seclected choice two ...");
		break;
		case 3: printf("\n Selected choice three ...");
		break;
		default:
			printf("invaild");
	}
}

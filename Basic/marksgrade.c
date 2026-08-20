#include<stdio.h>
int main (){
	int marks;
	printf("\nEnter marks :");
	scanf("%d", &marks);
	
	if(marks>=70){
		printf("First Class\n");
	}else if(marks>=60 && marks<70){
		printf("Second Class");
	}else if(marks>=50 && marks<60){
		printf("Third Class");
	}else if (marks>=35 && marks<50){
		printf("Pass");
	}
	else{
		printf("fail");
	}
}

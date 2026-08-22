#include<stdio.h>
void main(){
	int i=1;
	while (i<=3){
		printf("\n %d",i);
		i++;
	}
	printf("\n value after loop : %d", &i);
	printf("\n value :%d", i);
}

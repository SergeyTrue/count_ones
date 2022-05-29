#include <stdio.h>

int count_ones_func(int nNum){
	int counter=0;
	int i=0;
	
	for(;i<sizeof(nNum)*8;i++)
	{
		if(1&nNum) counter++;
		nNum = nNum>>1;
        }   
	return counter;	
}

void main(void){
int result;
int command = -1;
int nNum;

	while(command !=0)
	{
		printf("What would you like to do:\n");
		printf("1. Count ones in the binary representation of the integer.\n");
		printf("0. Exit\n");
		scanf("%d", &command);

		switch(command)
		{
			case 1:
			{
				printf("enter an integer\n"); 
				scanf("%d", &nNum); 
				result = count_ones_func(nNum); 
				printf("There are %d ones in the binary representation of the decimal %d\n", result,nNum);
			}
			break;

			case 0:
				break;

			default:
				printf("unknown command\n");
			}
	}
}
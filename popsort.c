#include<stdio.h>

void popsort(int *list, int length)
{
	int i, j;
	int temp;

	for(i=0; i<length; i++){
		for(j=0; j<length-(i+1); j++){
			if(list[j]<list[j+1]){
				temp = list[j+1];
				list[j+1] = list[j];
				list[j] = temp;
			}
		}
	}

	return ;
}

void main()
{
	int i;
	int list[]= {1,2,5,5,7,9,8,0,9,0,7,6,9,8,4,5,7,6,4,5,3};

	popsort(list, sizeof(list)/4);

	for(i=0; i<sizeof(list)/4; i++){
		printf("%d\n", list[i]);
	}

	return ;
}




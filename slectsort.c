#include<stdio.h>


void slectsort(int *list, int length)
{
	int i,j;
	int cmp;
	int flag;
	int temp;

	for(i=0; i<length; i++){
		cmp = list[i];
		for(j=i; j<length; j++){
			if(list[j]<cmp){
				flag = j;
				cmp = list[j];
			}

		}
		temp = list[flag];
		list[flag] = list[i];
		list[i] = temp; 
	}

	return ;
}


void main()
{
	int i;
	int list[] = {8,5,7,4,6,3,1,2,3,9,8,6,7,5,6,3,3,6,8};

	slectsort(list, sizeof(list)/sizeof(int));

	for(i=0; i<sizeof(list)/sizeof(int); i++){
		printf("%d\n", list[i]);
	}

	return ;
}

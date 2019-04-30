#include<stdio.h>

void insertsort(int *list, int length)
{
	int i,j;
	int temp;

	for(i=0; i<length; i++){
		if(list[i]>list[i+1]){
			temp = list[i];
			list[i] = list[i+1];
			list[i+1] = temp;
		}
		for(j=i; j>0; j--){
			if(list[j]>=list[j-1]){
				break;
			}
			temp = list[j];
			list[j] = list[j-1];
			list[j-1] = temp;
		}
	}
	return ;
}



void main()
{
	int i;
	int list[] = {9,7,8,5,6,4,6,4,5,3,4,1,2,5,3,4,5,8,6};

	insertsort(list, sizeof(list)/sizeof(int));


	for(i=0; i<sizeof(list)/sizeof(int); i++){
		printf("%d\n", list[i]);
	}

	return ;
}

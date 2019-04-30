#include<stdio.h>
//O(nlog(n))

void quicksort(int *list, int left, int right)
{
	if(left >= right){
		return ;
	}

	int i, j;
	int cmpnum;
//printf("ccc\n");	
	i = left;
	j = right;
	cmpnum = list[left];
	while(i<j){  // or i!=j
		while(list[j]>=cmpnum&&i<j){
			j--;
		}
		if(i<j){
			list[i] = list[j];
		}

		while(list[i]<=cmpnum&&i<j){
			i++;
		}
		if(i<j){
			list[j] = list[i];
		}
	}    //i,j xiangdeng de weizhi shi kongde weizhi.
	list[i] = cmpnum;
//printf("bbb\n");
	quicksort(list, left, i-1);
	quicksort(list, i+1, right);

	return ;
}


void main()
{
	int i;
	int list[] = {9,23,5,4,7,6,8,9,7,0,8,8,9,8,6,7,5,6,4,5,3,4,7,7,7};
//	printf("aaa\n");
	quicksort(list, 0, sizeof(list)/sizeof(int)-1);
//	printf("bbb\n");
	for(i=0; i<sizeof(list)/sizeof(int); i++){
		printf("%d\n", list[i]);
	}

	return ;
}





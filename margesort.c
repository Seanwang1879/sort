#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* margesort(int *s, int *t, int slength, int tlength)
{
	int i=0, j=0;

	int *list = (int *)malloc(sizeof(int)*(slength+tlength));

	while(slength!=i || tlength!=j){
		if(s[i]>t[j]){
			list[i+j] = t[j++];
		}else if(s[i]<=t[j]){
			list[i+j] = s[i++];
		}
	}

	if(slength == i){
		memcpy(&list[i+j], &t[j], tlength-j);
	}else{
		memcpy(&list[i+j], &s[i], slength-i);
	}

	return list;
}

void main()
{
	int list0[] = {1,3,5,7,9};
	int list1[] = {2,4,6,8,10};
	int i;
	int *list;
printf("aaa\n");
	list = margesort(list0, list1, sizeof(list0)/sizeof(int), sizeof(list1)/sizeof(int));
printf("bbb\n");
	for(i=0; i<(sizeof(list0)+sizeof(list1))/sizeof(int); i++){
		printf("%d\n", list[i]);
	}

	return ;
}

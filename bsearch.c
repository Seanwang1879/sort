#include<stdio.h>

int bsearch(int *list, int low, int high, int data)
{
	if(list==NULL){
		return -1;
	}

	int length = high;
	int mid = (low+high)/2;
	int i;

	while(mid!=low && mid!=high){
		if(data<list[mid]){
			high = mid;
		}else if(data>list[mid]){
			low = mid;
		}else if(data==list[mid]){
			break;
		}
		mid = (low+high)/2;
	}
	
	for(i=length; i>mid; i--){
		list[i+1] = list[i];
	}
	list[mid+1] = data;    //
	return ;
}

void main()
{
	int list[12]= {1,3,5,7,9,10,12,14,16,18,20};
	int i;

	bsearch(list, 0, sizeof(list)/sizeof(int)-1, 10);
	
	for(i=0; i<sizeof(list)/sizeof(int); i++){
		printf("%d\n", list[i]);
	}
	return ;
}

#include<stdio.h>
//O(nlog(n))

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	
	return ;
}

//构建小顶堆
void heapadjust(int *list, int length)    //length每次减少一    length是数组位置 不是长度
{
	int k;
	int i;

	if(length%2 == 0){
		k = (length-2)/2;
	}else{
		k = (length/2)-1;
		if(list[k+1]>list[2*(k+1)+1]){
			swap(&list[k+1], &list[2*(k+1)+1]);
		}
	}

	//printf("k is %d\n", k);
	
	for(i=k; i>=0; i--){    //小顶堆
			//min(list[2k+1], list[2k+2])
		if(list[2*i+1]<=list[2*i+2]){
			if(list[2*i+1]<list[i]){
				swap(&list[2*i+1], &list[i]);
			}
		}else{
			if(list[2*i+2]<list[i]){
				swap(&list[2*i+2], &list[i]);
			}
		}
	}
	//printf("%d\n", list[0]);
	return ;
}

void heapsort(int *list, int length)    //数组长度
{
	int i;
	int nums = length;

	for(i=0; i<length; i++){
		heapadjust(list, nums-1);
		swap(&list[0], &list[nums-1]);
		printf("%d\n", list[nums-1]);
		nums--;
	}
	
	return ;
}


void main()
{
	int list[] = {7,5,6,4,3,2,3,4,5,5,6,7,8,7,7,6,5,4,3};

	heapsort(list, sizeof(list)/sizeof(int));

	return ;
}

#include<stdio.h>
main(){
	int ary[5];
	int i, total=0, high;
	for(i=0;i<5;i++)
	{
		scanf("%d",&ary[i]);
		total+=ary[i];
		if(i==0){
			high=ary[i];
			}
		else if(high<ary[i]){
			high=ary[i];
			}
		
	}
		printf("\nHighest value entered was %d", high);
		printf("\n Total of all number entered was %d ", total);
}

#include<stido.h>
main(){
	int ary[3];
	int i, total, high;
	fpr(i=0;i<3;i++)
	{
		scanf("%d",&ary[i]);
	}
	high = ary[0];
	for(i=1;i<3;i++){
		if(ary[i]>high){ 
			high=ary[i];
		}
	}
		printf("\nHighest value entered was %d", high);
}

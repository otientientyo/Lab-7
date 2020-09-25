#include<stdio.h>
main(){
	int i, num;
	int max,min;
	printf("Enter The number of students in class:   ");
	scanf("%d", &num);
	int ary[100];
	for(i=1;i<=num;i++){
		scanf("%d",&ary[i]);
		if(i==1){max=ary[i];
		}
		else if(max<ary[i]){
			max=ary[i];
		}
		if (i==1){min=ary[i];
		}
		else if(min>ary[i]){
			min=ary[i];
		}
	}
		printf("\nHighest of mask of all student was: %d" , max);
		printf("\nLowest of mask of all student was:  %d", min);
		printf("\nmask of student convert: ");
	for(i=num;i>0;i--){
		printf("\n%d",ary[i]);
	}
}

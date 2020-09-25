#include<stdio.h>
main(){
	int j;
	int count = 0;
	char a[100];
	printf("Nhap doan van: \n" );	
	gets(a); // lay 1 chuoi string nhap vao tu ban phim(ke ca dau space)
	for(j=0;j<100;j++){
		if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u') // || la dau hoac 
		{
			count++;
		} 
	} 
	printf("Chuoi ban nhap: %s\n", a);	
	printf("Co: %d", count);
}

#include<stdio.h>
main(){
	int j;
	int count = 0;
	int count2=0;
	char a[100];
	printf("Nhap doan van: \n" );	
	gets(a); // lay 1 chuoi string nhap vao tu ban phim(ke ca dau space)
	for(j=0;j<100;j++){
		if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u'
	             	||a[j]=='A' || a[j]=='E' || a[j]=='I' || a[j]=='O' || a[j]=='U') // || la dau hoac 
		{
			count++;
		} 
		if(a[j]=='b' || a[j]=='c' || a[j]=='d' || a[j]=='h' || a[j]=='k'|| a[j]=='l'|| a[j]=='m'|| a[j]=='n'
		|| a[j]=='x'|| a[j]=='v'|| a[j]=='g'|| a[j]=='q'|| a[j]=='r'|| a[j]=='t'|| a[j]=='p'
	    ||  a[j]=='B' || a[j]=='C' || a[j]=='D' || a[j]=='H' || a[j]=='K'|| a[j]=='L'|| a[j]=='M'|| a[j]=='N'
		|| a[j]=='X'|| a[j]=='V'|| a[j]=='G'|| a[j]=='Q'|| a[j]=='R'|| a[j]=='T'|| a[j]=='P') // || la dau hoac 
		{
			count2++;
		} 
	} 
	printf("Doan van nhap vao: %s\n", a);
	printf("So luong nguyen am: %d", count);
	printf("\nSo luong phu am: %d", count2);
}

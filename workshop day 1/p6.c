#include<stdio.h>
int main(){
	int a,b,c,smaller;
	scanf("%d%d%d",a,b,c);
	smaller=(a<b)?((a<c)?a:c):((b<c)?b:c);
	printf("smaller =%d",smaller);
	return 0;
	
}

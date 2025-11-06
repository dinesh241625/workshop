#include<stdio.h>
int main(){
	char name[50];
	int age;
	scanf("%[^\n]%d",&name,&age);
	printf("%s\n%d",name,age);
	return 0;
}

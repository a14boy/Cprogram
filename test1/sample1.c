
#include<stdio.h>

int main(void){
	int age;
	setvbuf(stdout, NULL, _IONBF, 0);
	char name[] = "Hoang Van Tan";
	printf("\nhello world!");
	printf("\nnhap vap tuoi cua ban: ");
	scanf("%d",&age);

	printf("\nmy name is %s.", name);
	printf("\nI am %d years old.", age);

	return 0;
}

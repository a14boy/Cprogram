
#include<stdio.h>
#include<math.h>

void print_matrix(int row, int col);

int main(void){
	//khai bao bien
	char myname[30];
	int myage;
	char mynational[30];
	float myheight;
	float myweight;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("\nho ten: ");
	fgets(myname, sizeof(myname), stdin);
	getchar();

	printf("\ntuoi: ");
	scanf("\nTuoi: %i", &myage);
	getchar();

	printf("\nquoc tich: ");
	fgets(mynational, sizeof(mynational), stdin);
	getchar();

	printf("\nchieu cao (m): ");
    scanf("\nchieu cao: %f", &myheight);
    getchar();

	printf("\ncan nang (kg): ");
	scanf("\ncan nang: %f", &myweight);
	getchar();

	printf("\n*************************");
	printf("\n----Thong tin ca nhan----");
	printf("\nHo va Ten: %s", myname);
	printf("\nTuoi: %d", myage);
	printf("\nQuoc tich: %s", mynational);
	printf("\nChieu cao: %f", myheight);
	printf("\nCan nang: %f", myweight);
	printf("\n-----------end-----------");
	printf("\n*************************");
	printf("\n------------- create matrix ---------------");
	int row, col;
	printf("\nNhap vao so hang cua ma tran: ");
	scanf("%d", &row);
	printf("\nNhap vao so cot cu ma tran: ");
	scanf("%d", &col);

//	print_matrix(row, col);

	return 0;
}

void print_matrix(int row, int col){
	int a[row][col];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			a[i][j]= rand() % 1000;
		}
	}
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			if (a[i][j] >= 100){
				printf("%d   ",a[i][j]);
			}else if (a[i][j] >= 10){
				printf("%d    ",a[i][j]);
			}else{
				printf("%d     ",a[i][j]);
			}
		}
		printf("\n\n");
	}
}

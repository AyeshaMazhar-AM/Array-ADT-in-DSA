#include<iostream>
using namespace std;


int main()
{

	int A[3][4] = {{2, 4, 6, 8}, {10,12, 14, 16}, {18, 20, 2, 4}};
	
	for(int i= 0; i<3; i++)
	{
		for (int j=0;j<4; j++)
		{
			printf("%d",A[i][j]);
		}
		cout<<endl;
	}
	cout<<endl;
	
	int *B[3];
	B[0] = new int [4];
	B[1] = (int *)malloc(4*sizeof(int));
	B[2] = (int *)malloc(4*sizeof(int));
	for(int i= 0; i<3; i++)
	{
		for (int j=0;j<4; j++)
		{
			printf("%d",B[i][j]);
		}
		cout<<endl;
	}
	
//	Double Pointer
	int **C;
	C = (int **)malloc(3*sizeof(int *));
	C[0] = (int *)malloc(4*sizeof(int));
	C[1] = (int *)malloc(4*sizeof(int));
	C[2] = (int *)malloc(4*sizeof(int));
}

//matrix addition,subtration
#include<stdio.h>
#include<conio.h>
void main()
{
	
	int A[3][3],B[3][3],C[3][3];
	int i,j,choice;
	printf("\n\n\t 3*3 MATRIX \n\n");
	
	printf("\n\t ENTER VALUE OF 3*3 MATRIX IN MATRIX (A)\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\t ENTER A[%d][%d] VALUE : ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n\t ENTER VALUE OF 3*3 MATRIX IN MATRIX (B)\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\t ENTER B[%d][%d] VALUE : ",i,j);
			scanf("%d",&B[i][j]);
		}
	}

	printf("\n\n------MATRIX-A---------------\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",A[i][j]);
		}
		printf("\n\n");
	}
	
	printf("\n\n------MATRIX-B---------------\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",B[i][j]);
		}
		printf("\n\n");
	}
	
	printf("\n\n\t ENTER-1 : ADDITION");
	printf("\n\n\t ENTER-2 : SUBTRATION");
	printf("\n\n\t ENTER YOUR CHOICE : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("\n\n------(MATRIX-A + MATRIX-B)---------------\n\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf("\t %d",A[i][j]+B[i][j]);
				}
				printf("\n\n");
			}
			break;
		case 2 :
			printf("\n\n------(MATRIX-A - MATRIX-B)---------------\n\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf("\t %d",A[i][j]-B[i][j]);
				}
				printf("\n\n");
			}
			break;
			
		default :
			printf("\n\n\t INVALIED CHOICE...");
			break;
	}
	getch();
}

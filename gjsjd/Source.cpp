#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <time.h>
/*2. ��������� ������� �������������� k-� ������ � �����
��������� k-�� ������� 0.*/
void scanArray(int* matrix, int rows, int cols);
void memoryAllocation(int* matrix, int rows, int cols);

int main()
{
	system("chcp 1251 > nul");
	int* matrix = NULL;
	printf("������� ���-�� ����� � ��������\n");
	int rows, cols;
	scanf("%i%i", &rows, &cols);
	memoryAllocation(matrix, rows, cols);
	scanArray(matrix, rows, cols);

	
	//free
	return 0;
}
void memoryAllocation(int* matrix, int rows, int cols)
{
	*matrix = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < rows; i++)
		matrix = (int*)malloc(cols * sizeof(int*));


}
void scanArray(int* matrix, int rows, int cols)
{
	for(int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j ++)
		{
			scanf("%i", (matrix)[rows][cols]);
		}
}




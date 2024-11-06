#include <iostream>

void DeletePartOfArray(int *&mas, int& size, int new_size)
{
	int* mas2 = NULL;
	mas2 = (int*)malloc(sizeof(int) * new_size);
	if (mas2 == NULL) exit(1);

	for (int i = 0; i < new_size; i++)
	{
		mas2[i] = mas[i] + 1;
	}

	free(mas);
	mas = mas2;
}

int main()
{
	int size = 10;
	int* mas = NULL;
	mas = (int*)malloc(sizeof(int) * size);
	if (mas == NULL) exit(1);

	for (int i = 0; i < size; i++)
	{
		mas[i] = i;
		printf("%i ", mas[i]);
	}
	printf("\n");

	DeletePartOfArray(mas, size, 5);

	for (int i = 0; i < 5; i++)
	{
		printf("%i ", mas[i]);
	}

	free(mas);
	return 0;
}
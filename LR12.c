//������������ ������ 12. ������� 3. ������� ������� (T02-01c). Dimini Inc. (c)2013
#include <stdio.h>//����������� ���������� �����/������
#include <string.h>//����������� ���������� ������ �� ��������
#include <stdlib.h>//����������� ����������� ����������
#include <time.h>//����������� ���������� ����/�������

#define NUMBER 21//������� ������������� ����� �������� � ������

int search(char *string, int *ii); //��������� �������
int fillarray(int *array, int *quantity);
int printarray(int *array, int *quantity);
int replace(int *array, int *quantity, int *i, int *k);
int remove(int *array, int *quantity, int *i, int *k);

int main(void)//������� �������
{
	int i,k,quantity;//����������� ����������
	long int array[100000];
	printf("Enter i and k:");
	scanf("%ld %ld",&i, &k);
	fillarray();//���������� ������� ���������� �������
	printf("Array:\n");
	printarray();
	replace(&i,&k);
	remove(&i,&k);
	printf("Array after actions:\n");
	printarray();
	fflush(stdin);//�������� �������� ������������
	getchar();
	return 0;
}

int fillarray()//���������� ������� ���������� �������
{
	int j;//����������� ����������
	int stime;
	long int ltime;
	ltime=time(NULL);//�������� ��������� ������������������ �����
	stime=(unsigned) ltime/2;
	srand(stime);
	for (j = 1; j <= 26; j++)
	{
		array[j]=-RAND_MAX+2*rand();//���������� �������
	}
}

int printarray()//����� ����� ���������� ������������ ��������
{
	int j;//����������� ����������
	for (j = 1; j <= 26; j++)//���� �� ����� ��������
	{
		printf("%8ld",array[j]);//����� �������� ��������
	}
	printf("\n\n");//������� � ��������� ������
}

int replace(int *i, int *k)
{
	array[
}

int remove(int *i, int *k)
{

}

//������������ ������ 12. ������� 3. ������� ������� (T02-01c). Dimini Inc. (c)2013
#include <stdio.h>//����������� ���������� �����/������
#include <string.h>//����������� ���������� ������ �� ��������
#include <stdlib.h>//����������� ����������� ����������
#include <time.h>//����������� ���������� ����/�������

int fillarray(long int *array, int *quantity);
int printarray(long int *array, int *quantity);
int arrayreplace(long int *array, int *quantity, int *i);
int arrayremove(long int *array, int *quantity, int *k);


int main(void)//������� �������
{
	int i,k,quantity;//����������� ����������
	long int array[100002];
	printf("Enter position of element to be replaced with last element of array,position of element to be deleted from array and quantity of elements in array:");//������ �� ����
	scanf("%ld %ld %ld",&i, &k, &quantity);//���������� ��������
	if (quantity>100000)//������������ ����� ������� ��������
	{
		printf("You can't use array with more than 100000 elements");
	}
	else
	{
		if ((i>quantity)||(k>quantity))//��������, ��� ������ ��������� �� ����������� ���������� ���������
		{
			printf("Positions of elements must be less or equal to quantity");
		}
		else
		{
			fillarray(array,&quantity);//���������� ������� ���������� �������
			printf("Array:\n");//��������������� �����
			printarray(array,&quantity);//����� �������
			arrayreplace(array,&quantity,&i);//������ ��������
			printf("Array after replace:\n");//��������������� �����
			printarray(array,&quantity);//����� ����������� �������
			arrayremove(array,&quantity,&k);//�������� ��������
			printf("Array after actions:\n");//��������������� �����
			printarray(array,&quantity);//����� ����������� �������
		}
	}
	fflush(stdin);//�������� �������� ������������
	getchar();
	return 0;
}

int fillarray(long int *array,int *quantity)//���������� ������� ���������� �������
{
	int j;//����������� ����������
	int stime;
	long int ltime;
	ltime=time(NULL);//�������� ��������� ������������������ �����
	stime=(unsigned) ltime/2;
	srand(stime);
	for (j = 1; j <= *quantity; j++)
	{
		array[j]=1+19*rand()/RAND_MAX;//���������� �������
	}
}


int printarray(long int *array,int *quantity)//����� �������
{
	int j;//����������� ����������
	for (j = 1; j <= *quantity; j++)//���� �� ���������
	{
		printf("%8ld",array[j]);//����� �������� ��������
	}
	printf("\n");//������� � ��������� ������
}

int arrayreplace(long int *array, int *quantity, int *i)//������ ��������
{
	array[0]=array[*quantity];//�������� ����������� ������ ����� ������ ����������
	array[*quantity]=array[*i];
	array[*i]=array[0];
}

int arrayremove(long int *array, int *quantity, int *k)//�������� ��������
{
	int j;//����������� ����������
	*quantity=*quantity-1;//��������� ���������� ���������
	for (j = *k; j <= *quantity; j++)//���� �� ���������
	{
		array[j]=array[j+1];//������ �������� ���������
	}
}


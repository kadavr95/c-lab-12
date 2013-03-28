//Лабораторная работа 12. Вариант 3. Яскович Дмитрий (T02-01c). Dimini Inc. (c)2013
#include <stdio.h>//подключение библиотеки ввода/вывода
#include <string.h>//подключение библиотеки работы со строками
#include <stdlib.h>//подключение стандартной библиотеки
#include <time.h>//подключение библиотеки даты/времени

int fillarray(long int *array, int *quantity);
int printarray(long int *array, int *quantity);
int arrayreplace(long int *array, int *quantity, int *i);
int arrayremove(long int *array, int *quantity, int *k);


int main(void)//главная функция
{
	int i,k,quantity;//определение переменных
	long int array[100002];
	printf("Enter position of element to be replaced with last element of array,position of element to be deleted from array and quantity of elements in array:");//запрос на ввод
	scanf("%ld %ld %ld",&i, &k, &quantity);//считывание значений
	if (quantity>100000)//отбрасывание очень больших массивов
	{
		printf("You can't use array with more than 100000 elements");
	}
	else
	{
		if ((i>quantity)||(k>quantity))//проверка, что номера элементов не превосходят количества элементов
		{
			printf("Positions of elements must be less or equal to quantity");
		}
		else
		{
			fillarray(array,&quantity);//заполнение массива случайными числами
			printf("Array:\n");//вспомогательный вывод
			printarray(array,&quantity);//вывод массива
			arrayreplace(array,&quantity,&i);//замена элемента
			printf("Array after replace:\n");//вспомогательный вывод
			printarray(array,&quantity);//вывод полученного массива
			arrayremove(array,&quantity,&k);//удаление элемента
			printf("Array after actions:\n");//вспомогательный вывод
			printarray(array,&quantity);//вывод полученного массива
		}
	}
	fflush(stdin);//ожидание действий пользователя
	getchar();
	return 0;
}

int fillarray(long int *array,int *quantity)//заполнение массива случайными числами
{
	int j;//определение переменных
	int stime;
	long int ltime;
	ltime=time(NULL);//создание случайной последовательности чисел
	stime=(unsigned) ltime/2;
	srand(stime);
	for (j = 1; j <= *quantity; j++)
	{
		array[j]=1+19*rand()/RAND_MAX;//заполнение массива
	}
}


int printarray(long int *array,int *quantity)//вывод массива
{
	int j;//определение переменных
	for (j = 1; j <= *quantity; j++)//цикл по элементам
	{
		printf("%8ld",array[j]);//вывод текущего элемента
	}
	printf("\n");//переход к следующей строке
}

int arrayreplace(long int *array, int *quantity, int *i)//замена элемента
{
	array[0]=array[*quantity];//нехитрые манипуляции замены через третью переменную
	array[*quantity]=array[*i];
	array[*i]=array[0];
}

int arrayremove(long int *array, int *quantity, int *k)//удаление элемента
{
	int j;//определение переменных
	*quantity=*quantity-1;//изменение количества элементов
	for (j = *k; j <= *quantity; j++)//цикл по элементам
	{
		array[j]=array[j+1];//замена элемента следующим
	}
}


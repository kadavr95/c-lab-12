//Ћабораторна€ работа 12. ¬ариант 3. яскович ƒмитрий (T02-01c). Dimini Inc. (c)2013
#include <stdio.h>//подключение библиотеки ввода/вывода
#include <string.h>//подключение библиотеки работы со строками
#include <stdlib.h>//подключение стандартной библиотеки
#include <time.h>//подключение библиотеки даты/времени

#define NUMBER 21//задание максимального числа символов в числах

int search(char *string, int *ii); //прототипы функций
int fillarray(int *array, int *quantity);
int printarray(int *array, int *quantity);
int replace(int *array, int *quantity, int *i, int *k);
int remove(int *array, int *quantity, int *i, int *k);

int main(void)//главна€ функци€
{
	int i,k,quantity;//определение переменных
	long int array[100000];
	printf("Enter i and k:");
	scanf("%ld %ld",&i, &k);
	fillarray();//заполнение массива случайными числами
	printf("Array:\n");
	printarray();
	replace(&i,&k);
	remove(&i,&k);
	printf("Array after actions:\n");
	printarray();
	fflush(stdin);//ожидание действий пользовател€
	getchar();
	return 0;
}

int fillarray()//заполнение массива случайными числами
{
	int j;//определение переменных
	int stime;
	long int ltime;
	ltime=time(NULL);//создание случайной последовательности чисел
	stime=(unsigned) ltime/2;
	srand(stime);
	for (j = 1; j <= 26; j++)
	{
		array[j]=-RAND_MAX+2*rand();//заполнение массива
	}
}

int printarray()//вывод строк содержащих максимальные элементы
{
	int j;//определение переменных
	for (j = 1; j <= 26; j++)//цикл по числу столбцов
	{
		printf("%8ld",array[j]);//вывод текущего элемента
	}
	printf("\n\n");//переход к следующей строке
}

int replace(int *i, int *k)
{
	array[
}

int remove(int *i, int *k)
{

}

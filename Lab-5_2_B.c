#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include <time.h>
const int  Low=-100, High=100;

int size = 0;
int num = 0;
int d = 1;

int chcp, chcpOut = 0;
int main(void)
{
// память chcp
	chcp = GetConsoleCP();
	chcpOut = GetConsoleOutputCP();

// UTF-8
	SetConsoleCP(65001);                
	SetConsoleOutputCP(65001);
//

printf("\r\nРозмір масиву = ");
scanf ("%d", &size);

int a[size];
int i =0;
    srand(time(0));
    for (int i=0; i<size; i++)
    a[i]=Low + rand() % (High - Low + 1);

int bil0=0;

do
{
    if (a[i]>0)
        bil0++;
    i++;
}
while (i<size);
system("cls");
printf("\r\n1) Кількість додатних елементів масиву = %d\r\n", bil0);


    for (i=1; i < size; i++)
    {
        if (abs(a[i]) <= abs(a[num]))
            num = i;
    }


for (i=0; i<num; i++)
d = d * a[i];
printf("\r\n2) Добуток елементів масиву, \r\n   розташованих до мінімального\r\n   за модулем елемента:%d\r\n", d);

// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}
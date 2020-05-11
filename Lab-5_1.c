#include <stdio.h>
#include <conio.h>
#include <windows.h>

int s = 0;
int size = 0;
int zz = 0;

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

printf("\r\nВведіть масив цілих чисел:\r\n");
do
{
    if (s<size)
        scanf ("%d", &a[s]);
    if (a[s] == 0)
    {
        zz = 1;
    }
    s++;
}
while (s<size);

int men0, bil0=0;
int i, j=0;

do
{
    if (a[i]>0)
        bil0++;
    i++;
}
while (i<size);
system("cls");
printf("*************************************\r\n");
printf("* Кількість додатних елементів  = %d *\r\n", bil0);

do
{
    if (a[j]<0)
        men0++;
    j++;
}
while (j<size);
printf("* Кількість від'ємних елементів = %d *\r\n", men0);
printf("*************************************\r\n");

if (men0<=bil0)
{
	printf("\r\n%c1%c\r\n", '"', '"');
}else printf("\r\n%c0%c\r\n", '"', '"');


if (zz == 1)
{
printf("\r\nПорядкові номери нулів:");
for (int i = 0; i < size; i++)
{
    if (i+1 == size && a[i]==0)
    {
        printf(" %d.", i+1);
    } else if (a[i] == 0) printf(" %d,", i+1);

}
}
// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int i = 0;
int j = 0;
int num = 0;
int n = 0;
int m = 0;

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
printf("\r\nВведіть: ");
printf("\r\nКількість рядків: ");
scanf("%d", &n);
printf("Кількість стовпців: ");
scanf("%d", &m);
printf("\r\n");


int n = 3;
int m = 4;
int a[n][m];
for (int i = 0; i < n; i++)
for (int j = 0; j < m; j++) {
printf("A[%d][%d]=", i, j);
scanf("%d", &a[i][j]); }


int d[m];
int i,j=0;

for(j=0;j<m;j++)
{
d[j]=1; for(i=0;i<n;i++)

if(a[i][j]!=0)

d[j]*=a[i][j];
}
///////////////

for (i=0; i < m; i++) {
        if (d[i] < d[num])
            num = i;
    }
printf("\r\nДобуток мінімальних елементів = %d\r\n",d[num]);
// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}
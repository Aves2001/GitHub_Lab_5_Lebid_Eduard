#include <stdio.h>
#include <conio.h>
#include <windows.h>
const int Low=-100, High=100; 

int i = 0;
int j = 0;
int num = 0;
int n = 0;
int m = 0;
int temp = 0;

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
    scanf ("%d", &n);
    printf("Кількість стовпців: ");
    scanf ("%d", &m);

int a[n][m];

    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            a[i][j]=Low + rand() % (High - Low + 1);
        }
    }

printf("\r\n\nДо сортування:\r\n");

for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("a[%d][%d]=%d\t", i, j, a[i][j]); printf("\n");
    }

////////////
for (int q=0; q<n; q++)
{
    for (int j = 0; j < m; j++)
    {
        for (int i = 1; i < n; i++)
        {
            if (a[i-1][j] < a[i][j])
            {
                temp = a[i-1][j];
                a[i-1][j] = a[i][j];
                a[i][j] = temp;
            }
        }
    }
}
////////////
printf("\r\n\nПісля сортування:\r\n");
for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("a[%d][%d]=%d\t", i, j, a[i][j]); printf("\n");
    }

// Вертаєм chcp
    SetConsoleCP(chcp);                
    SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}
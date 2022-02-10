#include <stdio.h>

#include <conio.h>

void main()

{

int i, j, m, n, k, a[5][5], b[5][5], c[5][5] = {0};

clrscr();

printf("\t\t\t **** MATRIX MULTIPLICATION **** \n");

printf("\nEnter order of matrix (m*n): ");

scanf("%d%d",&m,&n);

printf("\n");

for (i = 0; i < m; i++)

{

for (j = 0; j < n; j++)

{

printf("\nEnter elements of Matrix A [%d][%d]: ",i+1,j+1);

scanf("\n\t%d", &a[i][j]);

}

}

printf("\n");

for (i = 0; i < m; i++)

{

for (j = 0; j < n; j++)

{

printf("\nEnter elements of Matrix B [%d][%d]: ",i+1,j+1);

scanf("\t%d", &b[i][j]);

}

}

printf("\n The resultant Matrix :\n ");

for (i = 0; i < m; i++)

{

for (j = 0; j < n; j++)

{

for (k = 0; k < n; k++)

c[i][j] += a[i][k] *b[k][j];

printf("\t%d", c[i][j]);

}

printf("\n");

}

getch();

}

#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], sum[100][100], i, j ,mul[100][100],k;
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]); 
      if (j == c - 1) {
        printf("\n\n");
      }
    }
    
printf("multiply of the matrix=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    

}    
}    
}    
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}  

  return 0;
}

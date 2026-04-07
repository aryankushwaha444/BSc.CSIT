#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
  int A[MAX_ROWS][MAX_COLS], B[MAX_ROWS][MAX_COLS];
  int m, n, p;

  printf("Enter the dimensions of the first matrix (m x n): ");
  scanf("%d%d", &m, &n);

  printf("Enter the elements of the first matrix row by row:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  printf("Enter the dimensions of the second matrix (n x p): ");
  scanf("%d%d", &n, &p);

  printf("Enter the elements of the second matrix row by row:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < p; j++) {
      scanf("%d", &B[i][j]);
    }
  }

  int C[MAX_ROWS][MAX_COLS];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < p; j++) {
      C[i][j] = 0;
      for (int k = 0; k < n; k++) {
        C[i][j] += A[i][k] || B[k][j];
      }
    }
  }

  printf("The product of the two matrices is:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < p; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
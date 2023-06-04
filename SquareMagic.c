#include <stdio.h>
#include <stdbool.h>

bool is_magic_square(int arr[][100], int n) {

    if (n < 1)
        return false;

  
    int target_sum = 0;
    for (int i = 0; i < n; i++)
        target_sum += arr[0][i];
        
    for (int i = 0; i < n; i++) {
        int row_sum = 0;
        for (int j = 0; j < n; j++)
            row_sum += arr[i][j];

        if (row_sum != target_sum)
            return false;
    }
    for (int j = 0; j < n; j++)
    {
        int col_sum = 0;
        for (int i = 0; i < n; i++)
            col_sum += arr[i][j];

        if (col_sum != target_sum)
            return false;
    }

    int diagonal_sum1 = 0;
    int diagonal_sum2 = 0;
    for (int i = 0; i < n; i++) {
        diagonal_sum1 += arr[i][i];
        diagonal_sum2 += arr[i][n - i - 1];
    }
    if (diagonal_sum1 != target_sum || diagonal_sum2 != target_sum)
        return false;

    return true;
}

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d",&n);

    int arr[100][100];

    printf("Enter the elements of the square matrix:\n");
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<n;j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    if (is_magic_square(arr,n))
        printf("The matrix is a magic square\n");
    else
        printf("The matrix is not a magic square\n");

    return 0;
}

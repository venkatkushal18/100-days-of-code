/*Q72: Find the sum of all elements in a matrix.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, cols, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("Sum of all elements = %d", sum);

    return 0;
}
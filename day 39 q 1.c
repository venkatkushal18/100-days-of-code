/*Q77: Check if the elements on the diagonal of a matrix are distinct.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int main()
{
    int a[100][100];
    int rows, cols;
    int flag = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = i + 1; j < rows; j++)
        {
            if(a[i][i] == a[j][j])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}
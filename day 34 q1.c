/*Q67: Insert an element in an array at a given position.


Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>

int main()
{
    int n, a[100], pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position and element: ");
    scanf("%d %d", &pos, &element);

    for(int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = element;
    n++;

    printf("Array after insertion: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
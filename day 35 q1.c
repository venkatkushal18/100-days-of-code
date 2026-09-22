/*Q69: Find the second largest element in an array.


Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>

int main()
{
    int n, a[100];
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second largest element = %d", second);

    return 0;
}
/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.


Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>
#include <string.h>

int main()
{
    enum TrafficLight
    {
        RED,
        YELLOW,
        GREEN
    };

    char light[20];
    enum TrafficLight signal;

    scanf("%s", light);

    if (strcmp(light, "RED") == 0)
        signal = RED;
    else if (strcmp(light, "YELLOW") == 0)
        signal = YELLOW;
    else if (strcmp(light, "GREEN") == 0)
        signal = GREEN;
    else
    {
        printf("Invalid signal");
        return 0;
    }

    switch (signal)
    {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}
#include<stdio.h>

void increaseSensor(int);

int main()
{
    int sensorValue = 50;

    printf("Before function: %d\n",sensorValue);

    increaseSensor(sensorValue);

    printf("After function: %d\n",sensorValue);

    return 0;
}

void increaseSensor(int value)
{
    value = value + 20;

    printf("Inside function: %d\n",value);
}

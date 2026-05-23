#include<stdio.h>

void updateBattery(int *);

int main()
{
    int batteryLevel = 60;

    printf("Before update: %d%%\n",batteryLevel);

    updateBattery(&batteryLevel);

    printf("After update: %d%%\n",batteryLevel);

    return 0;
}

void updateBattery(int *battery)
{
    *battery = *battery + 20;

    printf("Charging...\n");
    printf("Inside function: %d%%\n",*battery);
}

#include <stdio.h>

int main() {
    int highest = 0;
    int current = 0;
    printf("Enter the highest rainfall ever recorded in one season for the country: ");
    scanf("%d", &highest);

    printf("Enter the current rainfall for the country: ");
    scanf("%d", &current);

    /* Compare the current and the highest rainfall */
    if (current > highest) {
        printf("The current rainfall is the highest ever recorded: %d", current);
        highest = current;
    } 
    
    if (current < highest) {
        printf("The current rainfall is not the highest ever recorded, the highest rainfall is: %d", highest);
    } 
    if (current == highest) {
        printf("The current rainfall is equal to the highest ever recorded, which is: %d", highest);
    }

    return 0;
}
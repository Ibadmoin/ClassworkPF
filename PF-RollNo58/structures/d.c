#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CRICKETERS 3

struct cricketer {
    char name[50];
    int age;
    int matchesPlayed;
    float averageRuns;
};

// Comparison function for qsort()
int compareCricketers(const void *a, const void *b) {
    const struct cricketer *cricketerA = (const struct cricketer *)a;
    const struct cricketer *cricketerB = (const struct cricketer *)b;

    if (cricketerA->averageRuns < cricketerB->averageRuns) {
        return -1;
    } else if (cricketerA->averageRuns > cricketerB->averageRuns) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    struct cricketer cricketers[MAX_CRICKETERS];

    // Read cricketer information
    for (int i = 0; i < MAX_CRICKETERS; i++) {
        printf("Enter details for Cricketer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", cricketers[i].name);
        printf("Age: ");
        scanf("%d", &cricketers[i].age);
        printf("Matches Played: ");
        scanf("%d", &cricketers[i].matchesPlayed);
        printf("Average Runs: ");
        scanf("%f", &cricketers[i].averageRuns);
    }

    // Sort cricketers by average runs
    qsort(cricketers, MAX_CRICKETERS, sizeof(struct cricketer), compareCricketers);

    // Print sorted cricketers
    printf("\nCricketers Sorted by Average Runs:\n");
    for (int i = 0; i < MAX_CRICKETERS; i++) {
        printf("Cricketer %d:\n", i + 1);
        printf("Name: %s\n", cricketers[i].name);
        printf("Age: %d\n", cricketers[i].age);
        printf("Matches Played: %d\n", cricketers[i].matchesPlayed);
        printf("Average Runs: %.2f\n", cricketers[i].averageRuns);
        printf("--------------------\n");
    }

    return 0;
}

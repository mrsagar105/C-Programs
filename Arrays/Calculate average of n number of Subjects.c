// Calculate average of n number of subjects

#include <stdio.h>

int main()
{
    int n, sum = 0, average;
    int marks[10];

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    printf("Enter marks for each subject:\n");
    
    // storing marks in array
    for(int i = 0; i < n; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);

        // adding the marks entered by the user in sum variable
        sum = sum + marks[i];
    }

    average = sum/n;
    printf("Average of all subjects: %d", average);

    return 0;
}

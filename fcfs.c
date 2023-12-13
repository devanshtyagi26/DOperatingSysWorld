#include<stdio.h>
void main()
{
    int bt[50], wt[80], at[80], wat[30], ft[80], tat[80];
    int i, n;
    float awt, att, sum = 0, sum1 = 0;
    char p[10][5];

    printf("\nEnter the number of processes: ");
    scanf("%d", &n);

    printf("\nEnter the process name and burst-time:\n");
    for (i = 0; i < n; i++)
        scanf("%s %d", p[i], &bt[i]);

    printf("\nEnter the arrival-time:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &at[i]);

    wt[0] = 0;

    for (i = 1; i <= n; i++)
        wt[i] = wt[i - 1] + bt[i - 1]; // Corrected indexing

    ft[0] = bt[0];

    for (i = 1; i < n; i++) // Corrected indexing
        ft[i] = ft[i - 1] + bt[i];

    printf("\n\n\t\t\tGANTT CHART\n");
    printf("\n\n");
    for (i = 0; i < n; i++)
        printf("| %s\t\t", p[i]);
    printf("|\n");
    printf("\n");

    for (i = 0; i < n; i++)
        printf("%d\t\t", wt[i]);

    printf("%d", ft[n - 1] + bt[n - 1]); // Corrected indexing
    printf("\n\n\n");

    for (i = 0; i < n; i++)
        wat[i] = wt[i] - at[i];

    for (i = 0; i < n; i++)
        tat[i] = ft[i] - at[i];

    printf("\n\t\t\t FIRST COME FIRST SERVE\n");
    printf("\n Process \t Burst-time \t Arrival-time \t Waiting-time \t Finish-time \t Turnaround-time\n");

    for (i = 0; i < n; i++)
        printf("\n\n %s \t\t %d\t\t %d \t\t %d\t\t %d \t\t%d", p[i], bt[i], at[i], wat[i], ft[i], tat[i]);

    for (i = 0; i < n; i++)
        sum = sum + wat[i];
    awt = sum / n;

    for (i = 0; i < n; i++)
        sum1 = sum1 + bt[i] + wat[i];
    att = sum1 / n;

    printf("\n\nAverage waiting time: %f", awt);
    printf("\n\nAverage turnaround time: %f", att);
    printf("\n");
}
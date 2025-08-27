#include <stdio.h>

int main() {
	int at[15], bt[15], ct[15], wt[15], tat[15], rt[15], start[15];

	printf("Enter the number of process: ");
	int n;
	scanf("%d", &n);

// 	printf("Enter the arrival time of all the process: ");
// 	for(int i = 0; i < n; i++) {
// 		scanf("%d", &at[i]);
// 	}

	printf("Enter Burst time of all the process: ");
	for(int i = 0; i < n; i++) {
		scanf("%d",&bt[i]);
	}

	// first process
    start[0] = 0;
	ct[0] = start[0] + bt[0];
	
	// calculate for the rest
	
	for(int i = 1; i < n; i++) {
// 		if(at[i] > ct[i-1]) {
// 			start[i] = at[i];
// 		}
// 		else {
// 			start[i] = ct[i-1];
// 		}
        start[i] = ct[i-1];
		ct[i] = start[i] + bt[i];
	}
	float totalWT = 0, totalTAT = 0, totalRT = 0;
	for(int i = 0; i < n; i++) {
		tat[i] = ct[i] - 0; // turnaround time
		wt[i] = tat[i] - bt[i]; // waiting time
		rt[i] = start[i] - 0; // response time
		totalWT += wt[i];
		totalTAT += tat[i];
		totalRT += rt[i];
	}
	
	// print table
	
	printf("PNo\tBT\tST\tCT\tTAT\tWT\tRT\n");
	for(int i = 0; i < n; i++) {
		printf("P[%d]\t%d\t%d\t%d\t%d\t%d\t%d\n", i+1, bt[i], start[i], ct[i], tat[i], wt[i], rt[i]);
	}
	
	printf("Avg Waiting time = %.2f\n", totalWT/n);
	printf("Avg Turn Around time = %.2f\n", totalTAT/n);
	printf("Avg Response time = %.2f\n", totalRT/n);

}

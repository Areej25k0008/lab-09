#include <stdio.h>
void findTwoRoads(int arr[], int n, int target) 
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) 
		{
            if (arr[i] + arr[j] == target) 
			{
                printf("Road %d and Road %d match the target.\n", i, j);
                return; // since only one pair matches
            }
        }
    }
}
int main() 
{
    int n;
    printf("Enter number of roads: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter vehicle counts for each road:\n");
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter target vehicle count: ");
    scanf("%d", &target);
    findTwoRoads(arr, n, target);
    return 0;
}


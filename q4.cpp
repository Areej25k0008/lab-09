#include <stdio.h>
void updateValue(int x)
{
    x=x+5;
}
void updateReference(int *x) 
{
    *x=*x+5; 
	}
int main() 
{
    int value = 80;
    printf("Before updateValue: %d\n", value);
    updateValue(value);
    printf("After updateValue: %d (no change)\n", value);
    printf("Before updateReference: %d\n", value);
    updateReference(&value);
    printf("After updateReference: %d (updated successfully)\n", value);
    return 0;
}


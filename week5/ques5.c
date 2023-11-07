/* VIVEK KUMAR  | D2 | 20233317*/
#include <stdio.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char from, char to, char helper)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", from, to);
		return;
	}
	towerOfHanoi(n-1, from, helper, to);
	printf("\n Move disk %d from rod %c to rod %c", n, from, to);
	towerOfHanoi(n-1, helper, to, from);
}

void main()
{
	int n;
	printf("Enter no of disk : "); 
	scanf("%d",&n);
	towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
}

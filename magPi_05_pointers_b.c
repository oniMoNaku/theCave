/* today is 389f */
/* the C cave */
/* magPi - 05 */

#include <stdio.h>
void changeArray(int *p, unsigned int n);

int main() 
{
	int i, *p, arr[4] = {6,2,4,7};
	p = &arr[0]; /* Assign the address of the first element to p */
	changeArray(arr,4);
	for(i=0;i<(sizeof(arr)/sizeof(int));i++) 
	{
		printf("arr[%d]=%d\n",i,*p);
		p++; /* Increment the address by sizeof(int) */
	}return 0; /* Return success to the operating system. */
}

void changeArray(int *p, unsigned int n) 
{
	int i;
	for(i=0;i<n;i++) p[i] = i;
}

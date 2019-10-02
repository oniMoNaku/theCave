/* today is 389f */
/* the C cave */
/* magPi - 05 */

#include <stdlib.h>
int newMask();


int main()
{
	srand(1234567); /* Set the seed once */
	int mask = newMask(); /* Get a new mask each time it is used. */
	return 0;
}

int newMask() 
{
	int mask = (double)rand()/RAND_MAX*254+1; /* Number between 1 and 255 */
	return mask;
} 

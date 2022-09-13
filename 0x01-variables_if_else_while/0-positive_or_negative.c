#include <stdlib.h>
#include <time.h>
#include <studio.h>

/**
* main - print if the number is positive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{                                             
int n;

srand(time(0));
 n = rand() - RAND_MAX / 2;
   /* your code goes there */
 if (n > 0)
{
         printf("%i is positive/n", n);
}
else if (n == 0)
{
         printf("%i is zero/n" , n);
}
else if (n < 0)
{
         printf("%i is negative/n" , n);
 Return (0);
}
<<<<<<< HEAD

=======
 
>>>>>>> 2146ce35d31e2727b004e7c3ded9547e85e5924b

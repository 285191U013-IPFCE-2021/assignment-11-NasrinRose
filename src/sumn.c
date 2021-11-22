#include "sumn.h"

#include<stdio.h>
#include<assert.h>
/* sum of the first n positive odd numbers.*/
int sumn (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return (n*2-1)+sumn(n-1);
  else
    return 1;
}

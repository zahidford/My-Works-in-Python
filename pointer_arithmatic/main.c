#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int arraySum (int array[],const int n);
    int values[10]={1,1,1,1,1,1,1,1,1,0};
    printf("The Sum is %i\n",arraySum(values,10));

    return 0;
}

int arraySum (int array[],const int n)

{
    int sum=0,*ptr;
    int *const arrayEnd = array + n;
    for (ptr=array; ptr<arrayEnd;++ptr)
    sum +=*ptr;
    return sum;

}

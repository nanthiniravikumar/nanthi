#include <stdio.h>
int main()
{
  int g, h, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&g);
        h = 1;
    while (h<=g)
    {
        sum += h;
        ++h;
    }
      printf("Sum = %d",sum);
       return 0;
}


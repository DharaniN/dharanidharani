#include <stdio.h>
void main()
{
  int i,n,fact=1;
  printf("Enter a number:\n");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
    fact=fact*i;
    printf("%d=%d\n",n,fact);
  }
}

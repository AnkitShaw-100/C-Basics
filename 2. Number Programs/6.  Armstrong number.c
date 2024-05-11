//Armstrong Number
#include<stdio.h>
#include<math.h>
void main()
{
    int n, m, r, c=0, copy, copy_2;
    printf("Enter a number : ");
    scanf("%d",&n);
    copy = n;
    copy_2 = n;
    while(n > 0)
    {
      r = n % 10;
      c++;
      n = n / 10;
    }
    while(copy > 0)
    {
        r = copy % 10;
        m = m + pow(r,c);
        copy = copy / 10;
    }
    if(copy_2 == m)
      {
        printf("Given number is a Armstrong number ");
      }
    else
    {
        printf("Given number is a NOT a Armstrong number ");
    }
}
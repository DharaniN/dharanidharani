#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100],s2[100],n=0;
    int i;
    printf("Enter the string:");
    scanf("%s",s1);
    for(i=strlen(s1)-1;i>=0;i--)
    {
    s2[n]=s1[i];
    n++;
        
    }
      printf("%s",s2);
      getch();
    
}

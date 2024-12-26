#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
  char c,s[100],sen[100],g;
  scanf("%c",&c);
  scanf("%s",s);
  scanf("%c",&g);
  scanf("%[^\n]s",sen);
  printf("%c\n%s\n%s",c,s,sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

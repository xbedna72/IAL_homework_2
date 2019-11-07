#include <stdio.h>
#include <stdlib.h>

void Print(int *i)
{
  printf("Rekurzion time!!! %d \n", *i);

  if(*i == 4)
  {
    (*i)++;
    Print(i);
  }
  printf("ENDING\n");
}

int main(){
  int i = 0;

  Print(&i);

  printf("ByeBye\n");

  return 0;
}

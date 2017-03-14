#include <stdio.h>
#include <stdlib.h>

#include "NumberGenerator.hh"
#include "BasicSequence.hh"


int main(int argc,char **argv)
{
  if (argc != 2) printf("Usage: main <number of thingos>");

  BasicSequence gen;
  for (int i = 0;i < 1000;i++)
  {
    gen.setSeed(rand());
    for (int u = 0;u < 10;u++) printf("%d",gen.next());
    printf("\n");
  }

  return 0;
}

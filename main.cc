#include <stdio.h>
#include <stdlib.h>

#include "NumberGenerator.hh"
#include "BasicSequence.hh"


/**
 * this is where the program starts and all that
 */
int main(int argc,char **argv)
{
  // Check the arguments.
  if (argc != 3)
  {
    printf("Usage: main <sequence length> <sequence count>\n");
    exit(-1);
  }

  int sequenceLength = atoi(argv[1]);
  int nSequences = atoi(argv[2]);

  BasicSequence gen;
  for (int i = 0;i < nSequences;i++)
  {
    gen.setSeed(rand());
    for (int u = 0;u < sequenceLength;u++) printf("%d",gen.next());
    printf("\n");
  }

  return 0;
}

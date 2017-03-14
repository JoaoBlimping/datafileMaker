#include "BasicSequence.hh"



void BasicSequence::setSeed(int seed)
{
  this->seed = seed;
}


uint8_t BasicSequence::nextByte()
{
  this->seed++;
  return this->seed % 3 + 1;
}

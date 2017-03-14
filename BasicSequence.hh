#ifndef BASIC_SEQUENCE_H
#define BASIC_SEQUENCE_H


#include <stdint.h>

#include "NumberGenerator.hh"


/**
 * yeah this one just does one two three ayyyyy
 */
class BasicSequence: public NumberGenerator
{
public:
  virtual void setSeed(int seed);

  virtual uint8_t next();

private:
  int seed;
};




#endif

#ifndef NUMBER_GENERATOR_H
#define NUMBER_GENERATOR_H


#include <stdint.h>


/**
 * This is the interface for number generators
 */
class NumberGenerator
{
public:
  /**
   * sets the seed for the number generator at the moment
   * seed is the value of the new seed
   */
  virtual void setSeed(int seed)=0;

  /**
   * gets the next value from the generator
   */
  uint8_t next()=0;

private:
  uint8_t byte;
  uint8_t count = 0;
};



#endif

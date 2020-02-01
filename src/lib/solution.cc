#include "solution.h"

int Solution::c_FindSize()
{
  return sizeof(c_array)/sizeof(c_array[0]);
}

int Solution::i_FindSize()
{
  return sizeof(i_array)/sizeof(i_array[0]);
}

int Solution::f_FindSize()
{
  return sizeof(f_array)/sizeof(f_array[0]);
}
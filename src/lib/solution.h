#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  int c_FindSize();
  int i_FindSize();
  int f_FindSize();
private:
  char c_array[5]={'a','p','p','l','e'};
  int i_array[3]={1,6,8};
  float f_array[4]={(float)2.22,(float)3.33,(float)4.0,(float)10.01};
};

#endif
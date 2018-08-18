/*----------------------------------------------------------------
Copyright (c) 2018 Author: Jagadeesh Vasudevamurthy
file: magicsquaretest.cpp

On linux:
g++ magicsquare.cpp magicsquaretest.cpp
valgrind a.out

-----------------------------------------------------------------*/

/*----------------------------------------------------------------
This file test magicsquare object
-----------------------------------------------------------------*/

/*----------------------------------------------------------------
All includes here
-----------------------------------------------------------------*/
#include "magicsquare.h"

/*----------------------------------------------------------------
main
-----------------------------------------------------------------*/
int main() {
  for (int i = 3; i < 100; i+=2) {
    magicsquare a;
    a.print_magic_square(i);
  }
  return 0;
}

//EOF


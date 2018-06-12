#include <stdio.h>
#include <string.h>
#include "encrypt.h"

int main(int argc, char* argv[])
{
   int arg = 1;
   while (arg < argc)
  {
    encrypt(3, argv[arg]);
    arg++;
  }



}

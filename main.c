#include <stdio.h>
#include "glauber.h"

int main(int argc, char *argv[]) {

  double gl;
  gl = woods_saxon(1, 2, 1, 2, 1);
  printf("Glauber gives %f\n", gl);

  return 0;
}

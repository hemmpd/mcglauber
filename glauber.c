#include <stdio.h>
#include <math.h>

#include "glauber.h"

double woods_saxon(double rho0, double w, double r, double R, double a) {
  return rho0*(1+(w*r*r)/(R*R))/(1+exp((r-R)/a));
}

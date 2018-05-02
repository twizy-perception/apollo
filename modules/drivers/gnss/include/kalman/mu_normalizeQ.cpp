//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: mu_normalizeQ.cpp
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 27-Apr-2018 11:56:12
//

// Include Files
#include <cmath>
#include "rt_nonfinite.h"
#include "time_update.h"
#include "mu_normalizeQ.h"

// Function Definitions

//
// MU_NORMALIZEQ  Normalize the quaternion
// Arguments    : double x[4]
// Return Type  : void
//
void mu_normalizeQ(double x[4])
{
  double y;
  double scale;
  int k;
  double absxk;
  double t;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 4; k++) {
    absxk = std::abs(x[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = 1.0 + y * t * t;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  y = scale * std::sqrt(y);
  for (k = 0; k < 4; k++) {
    x[k] /= y;
  }

  if (x[0] < 0.0) {
    for (k = 0; k < 4; k++) {
      x[k] = -x[k];
    }
  }
}

//
// File trailer for mu_normalizeQ.cpp
//
// [EOF]
//

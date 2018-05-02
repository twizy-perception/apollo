//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: time_update.cpp
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 27-Apr-2018 11:56:12
//

// Include Files
#include <cmath>
#include "rt_nonfinite.h"
#include "time_update.h"
#include "Gt.h"
#include "Ft.h"
#include "mu_normalizeQ.h"
#include "norm.h"

// Function Definitions

//
// Time update step
// Arguments    : double x[8]
//                double P[64]
//                double T
//                const double gyr[3]
//                const double acc[3]
//                const double Ra[9]
//                const double Rw[9]
// Return Type  : void
//
void time_update(double x[8], double P[64], double T, const double gyr[3], const
                 double acc[3], const double Ra[9], const double Rw[9])
{
  double Rnb[9];
  int i;
  int i2;
  double c;
  double Rbn[9];
  double y;
  double v;
  double b_c;
  static const signed char a[3] = { 0, 1, 0 };

  static const double b[3] = { 0.0, 0.0, 9.82 };

  double b_y[3];
  double b_x;
  double q[4];
  double b_q[4];
  double b_Rnb[3];
  double c_x[8];
  double c_Rnb[3];
  double dv6[64];
  double dv7[64];
  double dv8[48];
  double dv9[48];
  double dv10[64];
  double b_Ra[36];
  int i3;
  double dv11[48];
  double dv12[64];

  //  calc acc
  //  Gravity vector in navigation-frame
  //  The matrix Q(q)
  Rnb[0] = 2.0 * (x[4] * x[4] + x[5] * x[5]) - 1.0;
  Rnb[3] = 2.0 * (x[5] * x[6] - x[4] * x[7]);
  Rnb[6] = 2.0 * (x[5] * x[7] + x[4] * x[6]);
  Rnb[1] = 2.0 * (x[5] * x[6] + x[4] * x[7]);
  Rnb[4] = 2.0 * (x[4] * x[4] + x[6] * x[6]) - 1.0;
  Rnb[7] = 2.0 * (x[6] * x[7] - x[4] * x[5]);
  Rnb[2] = 2.0 * (x[5] * x[7] - x[4] * x[6]);
  Rnb[5] = 2.0 * (x[6] * x[7] + x[4] * x[5]);
  Rnb[8] = 2.0 * (x[4] * x[4] + x[7] * x[7]) - 1.0;

  //  Rotation matrix from body-frame to navigation-frame
  for (i = 0; i < 3; i++) {
    for (i2 = 0; i2 < 3; i2++) {
      Rbn[i2 + 3 * i] = Rnb[i + 3 * i2];
    }
  }

  //  Rotaion matrix from n-frame to b-frame
  //  Update pos
  c = T * T;

  //  Update v
  y = 0.0;
  for (i = 0; i < 3; i++) {
    b_c = 0.0;
    for (i2 = 0; i2 < 3; i2++) {
      b_c += Rbn[i + 3 * i2] * b[i2];
    }

    y += (double)a[i] * (acc[i] - b_c);
  }

  v = x[3] + y * T;

  //  Update quaternion orientation
  y = T / 2.0;
  for (i = 0; i < 3; i++) {
    b_y[i] = y * gyr[i];
  }

  y = norm(b_y);
  b_x = std::sin(norm(b_y));
  q[0] = std::cos(norm(b_y));
  for (i = 0; i < 3; i++) {
    q[i + 1] = b_y[i] / y * b_x;
  }

  mu_normalizeQ(q);
  b_c = 0.0;
  b_x = x[4];
  b_y[0] = x[6] * q[3] - x[7] * q[2];
  b_y[1] = x[7] * q[1] - x[5] * q[3];
  b_y[2] = x[5] * q[2] - x[6] * q[1];
  for (i = 0; i < 3; i++) {
    b_c += x[5 + i] * q[i + 1];
    b_q[i + 1] = (b_x * q[1 + i] + q[0] * x[i + 5]) + b_y[i];
  }

  b_q[0] = x[4] * q[0] - b_c;
  mu_normalizeQ(b_q);

  //  Update the state vector
  b_y[0] = 0.0;
  b_y[1] = x[3];
  b_y[2] = 0.0;
  y = 0.0;
  for (i = 0; i < 3; i++) {
    b_Rnb[i] = 0.0;
    b_c = 0.0;
    for (i2 = 0; i2 < 3; i2++) {
      b_c += Rbn[i + 3 * i2] * b[i2];
      b_Rnb[i] += Rnb[i + 3 * i2] * b_y[i2];
    }

    y += (double)a[i] * (acc[i] - b_c);
  }

  b_y[0] = 0.0;
  b_y[1] = y;
  b_y[2] = 0.0;
  for (i = 0; i < 3; i++) {
    c_Rnb[i] = 0.0;
    for (i2 = 0; i2 < 3; i2++) {
      c_Rnb[i] += Rnb[i + 3 * i2] * b_y[i2];
    }

    c_x[i] = (x[i] + b_Rnb[i] * T) + c_Rnb[i] * c / 2.0;
  }

  c_x[3] = v;
  for (i = 0; i < 4; i++) {
    c_x[i + 4] = b_q[i];
  }

  //  Den här är vi lite osäkra på
  //  P = FPF' + GQG'
  Ft(T, acc, gyr, b_q, v, dv6);
  Ft(T, acc, gyr, b_q, v, dv7);
  Gt(T, gyr, b_q, dv8);
  Gt(T, gyr, b_q, dv9);
  for (i = 0; i < 8; i++) {
    x[i] = c_x[i];
    for (i2 = 0; i2 < 8; i2++) {
      dv10[i + (i2 << 3)] = 0.0;
      for (i3 = 0; i3 < 8; i3++) {
        dv10[i + (i2 << 3)] += dv6[i + (i3 << 3)] * P[i3 + (i2 << 3)];
      }
    }
  }

  for (i = 0; i < 3; i++) {
    for (i2 = 0; i2 < 3; i2++) {
      b_Ra[i2 + 6 * i] = Ra[i2 + 3 * i];
      b_Ra[i2 + 6 * (i + 3)] = 0.0;
      b_Ra[(i2 + 6 * i) + 3] = 0.0;
      b_Ra[(i2 + 6 * (i + 3)) + 3] = Rw[i2 + 3 * i];
    }
  }

  for (i = 0; i < 8; i++) {
    for (i2 = 0; i2 < 6; i2++) {
      dv11[i + (i2 << 3)] = 0.0;
      for (i3 = 0; i3 < 6; i3++) {
        dv11[i + (i2 << 3)] += dv8[i + (i3 << 3)] * b_Ra[i3 + 6 * i2];
      }
    }

    for (i2 = 0; i2 < 8; i2++) {
      dv6[i + (i2 << 3)] = 0.0;
      for (i3 = 0; i3 < 8; i3++) {
        dv6[i + (i2 << 3)] += dv10[i + (i3 << 3)] * dv7[i2 + (i3 << 3)];
      }

      dv12[i + (i2 << 3)] = 0.0;
      for (i3 = 0; i3 < 6; i3++) {
        dv12[i + (i2 << 3)] += dv11[i + (i3 << 3)] * dv9[i2 + (i3 << 3)];
      }
    }
  }

  for (i = 0; i < 8; i++) {
    for (i2 = 0; i2 < 8; i2++) {
      P[i2 + (i << 3)] = dv6[i2 + (i << 3)] + dv12[i2 + (i << 3)];
    }
  }
}

//
// File trailer for time_update.cpp
//
// [EOF]
//

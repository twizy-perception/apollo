//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: time_update.h
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 27-Apr-2018 11:56:12
//
#ifndef TIME_UPDATE_H
#define TIME_UPDATE_H

// Include Files
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "time_update_types.h"

// Function Declarations
extern void time_update(double x[8], double P[64], double T, const double gyr[3],
  const double acc[3], const double Ra[9], const double Rw[9]);

#endif

//
// File trailer for time_update.h
//
// [EOF]
//

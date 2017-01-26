#ifndef HOUGHPARAMS_H
#define HOUGHPARAMS_H

typedef struct HoughParams
{
  bool enabledHoughBool;
  bool enabledBlurBool;
  double dpDbl, minDistDbl, param1Dbl, param2Dbl, pixelSizeDbl;
  int minRadiusI, maxRadiusI, blurKSizeI, blurSigmaI;
} HoughParams;

#endif

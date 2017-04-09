#ifndef __X_TIME_H__
#define __X_TIME_H__

#include "xconfig.h"

#ifdef __cplusplus
extern "C" {
#endif

void xTimeInit();
void xTimeUpdate();
float xTimeGetDeltaTime();
int xTimeFpsApprox();
float xTimeSecPassed();

#ifdef __cplusplus
}
#endif

#endif

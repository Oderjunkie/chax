#include "staticadd.h"
#include "staticneg.h"

#ifndef _chax_staticsub
#define _chax_staticsub(lhs, rhs) _chax_staticadd(lhs, _chax_staticneg(rhs))
#endif

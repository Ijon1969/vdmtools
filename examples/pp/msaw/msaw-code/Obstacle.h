//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at Wed 05-Nov-97 by the VDM++toC++ Code Generator
// (v6.0e - Tue 04-Nov-97)
//
// Supported compilers:
// 	g++ version 2.7.2 on SunOS4, SunOS5, Linux, HP-UX10
// 	Dec cxx version 5.5 on Alpha OSF1
// 	VC++ version 5.0 on Windows95, Windows NT
//

#ifndef _Obstacle_h
#define _Obstacle_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "CGBase.h"
#include "MSAWTypes.h"



class vdm_Obstacle : public virtual vdm_MSAWTypes {
public:

  virtual vdm_Obstacle * Get_vdm_Obstacle() { return this; }

  ObjectRef Self() { return ObjectRef(Get_vdm_Obstacle()); }

  int vdm_GetId() { return VDM_Obstacle; }
  virtual Bool vdm_Intersection(const ObjectRef &) =0;
   vdm_Obstacle();

  virtual ~vdm_Obstacle() {}
};

#endif


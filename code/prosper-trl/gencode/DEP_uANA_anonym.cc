//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at Tue 02-Nov-99 by the VDM-SLtoC++ Code Generator
// (v3.3 - Mon 22-Mar-99)
//
// Supported compilers:
// 	egcs version 1.1 on SunOS4, SunOS5, Linux, HP-UX10
// 	VC++ version 6.0 on Windows95, Windows NT
//



#include "DEP_uANA_userdef.h"
#include "metaiv.h"
#include "DEP_uANA.h"
#include "AS.h"
#include "CI.h"
#include "HOL.h"
#include "REP.h"
#include "TRL_uTAR_uDEF.h"
#include "TRL_uTAR_uEXPR.h"
#include "TRL_uTAR_uPAT.h"
#include "TRL_uTAR_uTYPE.h"
#if !DEF_type_7AS_NameC7AS_NameC2P && DECL_type_7AS_NameC7AS_NameC2P
#define DEF_type_7AS_NameC7AS_NameC2P 1

void type_7AS_NameC7AS_NameC2P::Init(TYPE_DEP_uANA_Vertex p1, TYPE_DEP_uANA_Vertex p2) {
  SetField(1, p1);
  SetField(2, p2);
}

TYPE_DEP_uANA_Vertex type_7AS_NameC7AS_NameC2P::get_1() const { return (TYPE_DEP_uANA_Vertex) GetField(1); }

void type_7AS_NameC7AS_NameC2P::set_1(const TYPE_DEP_uANA_Vertex &p) { SetField(1, p); }

TYPE_DEP_uANA_Vertex type_7AS_NameC7AS_NameC2P::get_2() const { return (TYPE_DEP_uANA_Vertex) GetField(2); }

void type_7AS_NameC7AS_NameC2P::set_2(const TYPE_DEP_uANA_Vertex &p) { SetField(2, p); }
#endif


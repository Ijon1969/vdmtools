//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at Wed 05-Apr-00 by the VDM-SLtoC++ Code Generator
// (v3.3.2 - Thu 02-Dec-99)
//
// Supported compilers:
// 	egcs version 1.1 on SunOS4, SunOS5, Linux, HP-UX10
// 	VC++ version 6.0 on Windows95, Windows NT
//



#include "HOL_userdef.h"
#include "metaiv.h"
#include "HOL.h"
#if !DEF_type_dd2P && DECL_type_dd2P
#define DEF_type_dd2P 1

void type_dd2P::Init(TYPE_HOL_term p1, TYPE_HOL_term p2) {
  SetField(1, p1);
  SetField(2, p2);
}

TYPE_HOL_term type_dd2P::get_1() const { return (TYPE_HOL_term) GetField(1); }

void type_dd2P::set_1(const TYPE_HOL_term &p) { SetField(1, p); }

TYPE_HOL_term type_dd2P::get_2() const { return (TYPE_HOL_term) GetField(2); }

void type_dd2P::set_2(const TYPE_HOL_term &p) { SetField(2, p); }
#endif


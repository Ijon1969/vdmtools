//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at Wed 13-Oct-99 by the VDM-SLtoC++ Code Generator
// (v3.3 - Mon 22-Mar-99)
//
// Supported compilers:
// 	egcs version 1.1 on SunOS4, SunOS5, Linux, HP-UX10
// 	VC++ version 6.0 on Windows95, Windows NT
//

#ifndef _TRL_uTRA_uPAT_anonym_h
#define _TRL_uTRA_uPAT_anonym_h

#include "TRL_uTRA_uPAT_userdef.h"
#include "metaiv.h"
class type_FL;
class type_18TRL_uTAR_uPAT_BINDCL;
class type_18TRL_uTAR_uPAT_BINDCLL;
#ifndef TAG_type_FL
#define TAG_type_FL (TAG_TRL_uTRA_uPAT + 1)
#endif

#ifndef TAG_type_18TRL_uTAR_uPAT_BINDCL
#define TAG_type_18TRL_uTAR_uPAT_BINDCL (TAG_TRL_uTRA_uPAT + 2)
#endif

#ifndef TAG_type_18TRL_uTAR_uPAT_BINDCLL
#define TAG_type_18TRL_uTAR_uPAT_BINDCLL (TAG_TRL_uTRA_uPAT + 3)
#endif


#include "AS_anonym.h"
#include "CI_anonym.h"
#include "HOL_anonym.h"
#include "REP_anonym.h"
#include "TRL_uTAR_uDEF_anonym.h"
#include "TRL_uTAR_uEXPR_anonym.h"
#include "TRL_uTAR_uPAT_anonym.h"
#include "TRL_uTAR_uTYPE_anonym.h"
#include "TRL_uTRA_uEXPR_anonym.h"
#include "TRL_uTRA_uTYPE_anonym.h"
#ifndef DECL_type_FL
#define DECL_type_FL 1

class type_FL : public SEQ<Generic> {
public:

  type_FL() : SEQ<Generic>() {}

  type_FL(const SEQ<Generic> &c) : SEQ<Generic>(c) {}

  type_FL(const Generic &c) : SEQ<Generic>(c) {}

  const char * GetTypeName() const { return "type_FL"; }
} ;
#endif

#ifndef DECL_type_18TRL_uTAR_uPAT_BINDCL
#define DECL_type_18TRL_uTAR_uPAT_BINDCL 1

class type_18TRL_uTAR_uPAT_BINDCL : public SEQ<TYPE_TRL_uTAR_uPAT_BIND> {
public:

  type_18TRL_uTAR_uPAT_BINDCL() : SEQ<TYPE_TRL_uTAR_uPAT_BIND>() {}

  type_18TRL_uTAR_uPAT_BINDCL(const SEQ<TYPE_TRL_uTAR_uPAT_BIND> &c) : SEQ<TYPE_TRL_uTAR_uPAT_BIND>(c) {}

  type_18TRL_uTAR_uPAT_BINDCL(const Generic &c) : SEQ<TYPE_TRL_uTAR_uPAT_BIND>(c) {}

  const char * GetTypeName() const { return "type_18TRL_uTAR_uPAT_BINDCL"; }
} ;
#endif

#ifndef DECL_type_18TRL_uTAR_uPAT_BINDCLL
#define DECL_type_18TRL_uTAR_uPAT_BINDCLL 1

class type_18TRL_uTAR_uPAT_BINDCLL : public SEQ<type_18TRL_uTAR_uPAT_BINDCL> {
public:

  type_18TRL_uTAR_uPAT_BINDCLL() : SEQ<type_18TRL_uTAR_uPAT_BINDCL>() {}

  type_18TRL_uTAR_uPAT_BINDCLL(const SEQ<type_18TRL_uTAR_uPAT_BINDCL> &c) : SEQ<type_18TRL_uTAR_uPAT_BINDCL>(c) {}

  type_18TRL_uTAR_uPAT_BINDCLL(const Generic &c) : SEQ<type_18TRL_uTAR_uPAT_BINDCL>(c) {}

  const char * GetTypeName() const { return "type_18TRL_uTAR_uPAT_BINDCLL"; }
} ;
#endif


#endif


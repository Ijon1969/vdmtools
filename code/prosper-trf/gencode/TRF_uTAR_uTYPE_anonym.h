//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at Thu 21-Oct-99 by the VDM-SLtoC++ Code Generator
// (v3.3 - Mon 22-Mar-99)
//
// Supported compilers:
// 	egcs version 1.1 on SunOS4, SunOS5, Linux, HP-UX10
// 	VC++ version 6.0 on Windows95, Windows NT
//

#ifndef _TRF_uTAR_uTYPE_anonym_h
#define _TRF_uTAR_uTYPE_anonym_h

#include "TRF_uTAR_uTYPE_userdef.h"
#include "metaiv.h"
class type_FL;
class type_cL;
class type_cLL;
#define TYPE_TRF_uTAR_uTYPE_UnionType TYPE_AS_UnionType
#define TYPE_TRF_uTAR_uTYPE_TypeVar TYPE_AS_TypeVar
#define TYPE_TRF_uTAR_uTYPE_TypeName TYPE_AS_TypeName
#define TYPE_TRF_uTAR_uTYPE_Type Record
#define TYPE_TRF_uTAR_uTYPE_TotalFnType TYPE_AS_TotalFnType
#define TYPE_TRF_uTAR_uTYPE_SetType TYPE_AS_SetType
#define TYPE_TRF_uTAR_uTYPE_SeqType Record
#define TYPE_TRF_uTAR_uTYPE_Seq1Type TYPE_AS_Seq1Type
#define TYPE_TRF_uTAR_uTYPE_Seq0Type TYPE_AS_Seq0Type
#define TYPE_TRF_uTAR_uTYPE_QuoteType TYPE_AS_QuoteType
#define TYPE_TRF_uTAR_uTYPE_ProductType TYPE_AS_ProductType
#define TYPE_TRF_uTAR_uTYPE_PartialFnType TYPE_AS_PartialFnType
#define TYPE_TRF_uTAR_uTYPE_OptionalType TYPE_AS_OptionalType
#define TYPE_TRF_uTAR_uTYPE_OpType TYPE_AS_OpType
#define TYPE_TRF_uTAR_uTYPE_Name TYPE_AS_Name
#define TYPE_TRF_uTAR_uTYPE_MapType Record
#define TYPE_TRF_uTAR_uTYPE_InjectiveMapType TYPE_AS_InjectiveMapType
#define TYPE_TRF_uTAR_uTYPE_Ids type_cLL
#define TYPE_TRF_uTAR_uTYPE_GeneralMapType TYPE_AS_GeneralMapType
#define TYPE_TRF_uTAR_uTYPE_FnType Record
#define TYPE_TRF_uTAR_uTYPE_Field TYPE_AS_Field
#define TYPE_TRF_uTAR_uTYPE_DiscretionaryType type_FL
#define TYPE_TRF_uTAR_uTYPE_CompositeType TYPE_AS_CompositeType
#define TYPE_TRF_uTAR_uTYPE_BracketedType TYPE_AS_BracketedType
#define TYPE_TRF_uTAR_uTYPE_BasicType TYPE_AS_BasicType
#ifndef TAG_type_FL
#define TAG_type_FL (TAG_TRF_uTAR_uTYPE + 1)
#endif

#ifndef TAG_type_cL
#define TAG_type_cL (TAG_TRF_uTAR_uTYPE + 2)
#endif

#ifndef TAG_type_cLL
#define TAG_type_cLL (TAG_TRF_uTAR_uTYPE + 3)
#endif


#include "AS_anonym.h"
#include "CI_anonym.h"
#include "REP_anonym.h"
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

#ifndef DECL_type_cL
#define DECL_type_cL 1

class type_cL : public SEQ<Char> {
public:

  type_cL() : SEQ<Char>() {}

  type_cL(const SEQ<Char> &c) : SEQ<Char>(c) {}

  type_cL(const Generic &c) : SEQ<Char>(c) {}

  const char * GetTypeName() const { return "type_cL"; }
} ;
#endif

#ifndef DECL_type_cLL
#define DECL_type_cLL 1

class type_cLL : public SEQ<type_cL> {
public:

  type_cLL() : SEQ<type_cL>() {}

  type_cLL(const SEQ<type_cL> &c) : SEQ<type_cL>(c) {}

  type_cLL(const Generic &c) : SEQ<type_cL>(c) {}

  const char * GetTypeName() const { return "type_cLL"; }
} ;
#endif


#endif


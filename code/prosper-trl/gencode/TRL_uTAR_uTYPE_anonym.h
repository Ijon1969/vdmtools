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

#ifndef _TRL_uTAR_uTYPE_anonym_h
#define _TRL_uTAR_uTYPE_anonym_h

#include "TRL_uTAR_uTYPE_userdef.h"
#include "metaiv.h"
class TYPE_TRL_uTAR_uTYPE_TYPE;
class TYPE_TRL_uTAR_uTYPE_FIELD;
class type_cL;
class type_cLS;
class type_19TRL_uTAR_uTYPE_TYPECL;
class type_20TRL_uTAR_uTYPE_FIELDCL;
class type_cLL;
#define TYPE_TRL_uTAR_uTYPE_string type_cL
#define TYPE_TRL_uTAR_uTYPE_UnionType TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_TypeVar TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_TypeName TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_Type TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_TotalFnType TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_SetType TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_SeqType TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_Seq1Type TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_Seq0Type TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_QuoteType TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_ProductType TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_PartialFnType TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_OptionalType TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_OpType TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_Name type_cL
#define TYPE_TRL_uTAR_uTYPE_MapType TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_InjectiveMapType TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_Ids type_cL
#define TYPE_TRL_uTAR_uTYPE_GeneralMapType TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_FnType TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_Field TYPE_TRL_uTAR_uTYPE_FIELD
#define TYPE_TRL_uTAR_uTYPE_DiscretionaryType type_19TRL_uTAR_uTYPE_TYPECL
#define TYPE_TRL_uTAR_uTYPE_CompositeType TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_BracketedType TYPE_TRL_uTAR_uTYPE_TYPE
#define TYPE_TRL_uTAR_uTYPE_BasicType TYPE_TRL_uTAR_uTYPE_TYPE
#ifndef TAG_type_cL
#define TAG_type_cL (TAG_TRL_uTAR_uTYPE + 1)
#endif

#ifndef TAG_type_cLS
#define TAG_type_cLS (TAG_TRL_uTAR_uTYPE + 2)
#endif

#ifndef TAG_type_19TRL_uTAR_uTYPE_TYPECL
#define TAG_type_19TRL_uTAR_uTYPE_TYPECL (TAG_TRL_uTAR_uTYPE + 3)
#endif

#ifndef TAG_type_20TRL_uTAR_uTYPE_FIELDCL
#define TAG_type_20TRL_uTAR_uTYPE_FIELDCL (TAG_TRL_uTAR_uTYPE + 4)
#endif

#ifndef TAG_type_cLL
#define TAG_type_cLL (TAG_TRL_uTAR_uTYPE + 5)
#endif


#include "AS_anonym.h"
#include "CI_anonym.h"
#include "HOL_anonym.h"
#include "REP_anonym.h"
#ifndef TAG_TYPE_TRL_uTAR_uTYPE_TYPE
#define TAG_TYPE_TRL_uTAR_uTYPE_TYPE (TAG_TRL_uTAR_uTYPE + 6)
#endif

#ifndef TAG_TYPE_TRL_uTAR_uTYPE_FIELD
#define TAG_TYPE_TRL_uTAR_uTYPE_FIELD (TAG_TRL_uTAR_uTYPE + 7)
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

#ifndef DECL_type_cLS
#define DECL_type_cLS 1

class type_cLS : public SET<type_cL> {
public:

  type_cLS() : SET<type_cL>() {}

  type_cLS(const SET<type_cL> &c) : SET<type_cL>(c) {}

  type_cLS(const Generic &c) : SET<type_cL>(c) {}

  const char * GetTypeName() const { return "type_cLS"; }
} ;
#endif

#ifndef DECL_type_19TRL_uTAR_uTYPE_TYPECL
#define DECL_type_19TRL_uTAR_uTYPE_TYPECL 1

class type_19TRL_uTAR_uTYPE_TYPECL : public SEQ<TYPE_TRL_uTAR_uTYPE_TYPE> {
public:

  type_19TRL_uTAR_uTYPE_TYPECL() : SEQ<TYPE_TRL_uTAR_uTYPE_TYPE>() {}

  type_19TRL_uTAR_uTYPE_TYPECL(const SEQ<TYPE_TRL_uTAR_uTYPE_TYPE> &c) : SEQ<TYPE_TRL_uTAR_uTYPE_TYPE>(c) {}

  type_19TRL_uTAR_uTYPE_TYPECL(const Generic &c) : SEQ<TYPE_TRL_uTAR_uTYPE_TYPE>(c) {}

  const char * GetTypeName() const { return "type_19TRL_uTAR_uTYPE_TYPECL"; }
} ;
#endif

#ifndef DECL_type_20TRL_uTAR_uTYPE_FIELDCL
#define DECL_type_20TRL_uTAR_uTYPE_FIELDCL 1

class type_20TRL_uTAR_uTYPE_FIELDCL : public SEQ<TYPE_TRL_uTAR_uTYPE_FIELD> {
public:

  type_20TRL_uTAR_uTYPE_FIELDCL() : SEQ<TYPE_TRL_uTAR_uTYPE_FIELD>() {}

  type_20TRL_uTAR_uTYPE_FIELDCL(const SEQ<TYPE_TRL_uTAR_uTYPE_FIELD> &c) : SEQ<TYPE_TRL_uTAR_uTYPE_FIELD>(c) {}

  type_20TRL_uTAR_uTYPE_FIELDCL(const Generic &c) : SEQ<TYPE_TRL_uTAR_uTYPE_FIELD>(c) {}

  const char * GetTypeName() const { return "type_20TRL_uTAR_uTYPE_FIELDCL"; }
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


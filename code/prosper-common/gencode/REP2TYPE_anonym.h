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

#ifndef _REP2TYPE_anonym_h
#define _REP2TYPE_anonym_h

#include "REP2TYPE_userdef.h"
#include "metaiv.h"
extern const Quote quote_EMPTYMAPTYPEREP;
extern const Quote quote_EMPTYSEQTYPEREP;
extern const Quote quote_EMPTYSETTYPEREP;
class type_typevariableS;
class type_typevariableL;
#define TYPE_REP2TYPE_Type Record
#define TYPE_REP2TYPE_EmptyKind Generic
#ifndef TAG_type_typevariableS
#define TAG_type_typevariableS (TAG_REP2TYPE + 1)
#endif

#ifndef TAG_type_typevariableL
#define TAG_type_typevariableL (TAG_REP2TYPE + 2)
#endif

#ifndef TAG_quote_EMPTYMAPTYPEREP
#define TAG_quote_EMPTYMAPTYPEREP (TAG_REP2TYPE + 3)
#endif

#ifndef TAG_quote_EMPTYSEQTYPEREP
#define TAG_quote_EMPTYSEQTYPEREP (TAG_REP2TYPE + 4)
#endif

#ifndef TAG_quote_EMPTYSETTYPEREP
#define TAG_quote_EMPTYSETTYPEREP (TAG_REP2TYPE + 5)
#endif


#include "AS_anonym.h"
#include "CI_anonym.h"
#include "REP_anonym.h"
#ifndef DECL_type_typevariableS
#define DECL_type_typevariableS 1

class type_typevariableS : public SET<Generic> {
public:

  type_typevariableS() : SET<Generic>() {}

  type_typevariableS(const SET<Generic> &c) : SET<Generic>(c) {}

  type_typevariableS(const Generic &c) : SET<Generic>(c) {}

  const char * GetTypeName() const { return "type_typevariableS"; }
} ;
#endif

#ifndef DECL_type_typevariableL
#define DECL_type_typevariableL 1

class type_typevariableL : public SEQ<Generic> {
public:

  type_typevariableL() : SEQ<Generic>() {}

  type_typevariableL(const SEQ<Generic> &c) : SEQ<Generic>(c) {}

  type_typevariableL(const Generic &c) : SEQ<Generic>(c) {}

  const char * GetTypeName() const { return "type_typevariableL"; }
} ;
#endif


#endif


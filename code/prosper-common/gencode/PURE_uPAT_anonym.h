//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at Thu 25-Mar-99 by the VDM-SLtoC++ Code Generator
// (v3.3 - Mon 22-Mar-99)
//
// Supported compilers:
// 	egcs version 1.1 on SunOS4, SunOS5, Linux, HP-UX10
// 	VC++ version 6.0 on Windows95, Windows NT
//

#ifndef _PURE_uPAT_anonym_h
#define _PURE_uPAT_anonym_h

#include "PURE_uPAT_userdef.h"
#include "metaiv.h"
class type_7AS_NameCS;
class type_F7AS_NameCS7AS_NameCS3P;
class type_FL;
class type_FL7AS_NameCS7AS_NameCS3P;
class type_14AS_MultSetBindC7AS_NameCS7AS_NameCS3P;
class type_15AS_MultTypeBindC7AS_NameCS7AS_NameCS3P;
class type_10AS_SetBindC7AS_NameCS7AS_NameCS3P;
class type_11AS_TypeBindC7AS_NameCS7AS_NameCS3P;
#define TYPE_PURE_uPAT_Identifiers type_7AS_NameCS
#ifndef TAG_type_7AS_NameCS
#define TAG_type_7AS_NameCS (TAG_PURE_uPAT + 1)
#endif

#ifndef TAG_type_F7AS_NameCS7AS_NameCS3P
#define TAG_type_F7AS_NameCS7AS_NameCS3P (TAG_PURE_uPAT + 2)
#endif

#ifndef TAG_type_FL
#define TAG_type_FL (TAG_PURE_uPAT + 3)
#endif

#ifndef TAG_type_FL7AS_NameCS7AS_NameCS3P
#define TAG_type_FL7AS_NameCS7AS_NameCS3P (TAG_PURE_uPAT + 4)
#endif

#ifndef TAG_type_14AS_MultSetBindC7AS_NameCS7AS_NameCS3P
#define TAG_type_14AS_MultSetBindC7AS_NameCS7AS_NameCS3P (TAG_PURE_uPAT + 5)
#endif

#ifndef TAG_type_15AS_MultTypeBindC7AS_NameCS7AS_NameCS3P
#define TAG_type_15AS_MultTypeBindC7AS_NameCS7AS_NameCS3P (TAG_PURE_uPAT + 6)
#endif

#ifndef TAG_type_10AS_SetBindC7AS_NameCS7AS_NameCS3P
#define TAG_type_10AS_SetBindC7AS_NameCS7AS_NameCS3P (TAG_PURE_uPAT + 7)
#endif

#ifndef TAG_type_11AS_TypeBindC7AS_NameCS7AS_NameCS3P
#define TAG_type_11AS_TypeBindC7AS_NameCS7AS_NameCS3P (TAG_PURE_uPAT + 8)
#endif


#include "AS_anonym.h"
#include "CI_anonym.h"
#include "FRESH_anonym.h"
#include "REP_anonym.h"
#ifndef DECL_type_7AS_NameCS
#define DECL_type_7AS_NameCS 1

class type_7AS_NameCS : public SET<TYPE_AS_Name> {
public:

  type_7AS_NameCS() : SET<TYPE_AS_Name>() {}

  type_7AS_NameCS(const SET<TYPE_AS_Name> &c) : SET<TYPE_AS_Name>(c) {}

  type_7AS_NameCS(const Generic &c) : SET<TYPE_AS_Name>(c) {}

  const char * GetTypeName() const { return "type_7AS_NameCS"; }
} ;
#endif

#ifndef DECL_type_F7AS_NameCS7AS_NameCS3P
#define DECL_type_F7AS_NameCS7AS_NameCS3P 1

class type_F7AS_NameCS7AS_NameCS3P : public Tuple {
public:

  type_F7AS_NameCS7AS_NameCS3P() : Tuple(3) {}
  void Init(TYPE_AS_Bind p2, TYPE_PURE_uPAT_Identifiers p3, TYPE_PURE_uPAT_Identifiers p4);

  type_F7AS_NameCS7AS_NameCS3P(const Generic &c) : Tuple(c) {}

  const char * GetTypeName() const { return "type_F7AS_NameCS7AS_NameCS3P"; }
  TYPE_AS_Bind get_1() const;
  void set_1(const TYPE_AS_Bind &p);
  TYPE_PURE_uPAT_Identifiers get_2() const;
  void set_2(const TYPE_PURE_uPAT_Identifiers &p);
  TYPE_PURE_uPAT_Identifiers get_3() const;
  void set_3(const TYPE_PURE_uPAT_Identifiers &p);
} ;
#endif

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

#ifndef DECL_type_FL7AS_NameCS7AS_NameCS3P
#define DECL_type_FL7AS_NameCS7AS_NameCS3P 1

class type_FL7AS_NameCS7AS_NameCS3P : public Tuple {
public:

  type_FL7AS_NameCS7AS_NameCS3P() : Tuple(3) {}
  void Init(TYPE_AS_BindList p2, TYPE_PURE_uPAT_Identifiers p3, TYPE_PURE_uPAT_Identifiers p4);

  type_FL7AS_NameCS7AS_NameCS3P(const Generic &c) : Tuple(c) {}

  const char * GetTypeName() const { return "type_FL7AS_NameCS7AS_NameCS3P"; }
  TYPE_AS_BindList get_1() const;
  void set_1(const TYPE_AS_BindList &p);
  TYPE_PURE_uPAT_Identifiers get_2() const;
  void set_2(const TYPE_PURE_uPAT_Identifiers &p);
  TYPE_PURE_uPAT_Identifiers get_3() const;
  void set_3(const TYPE_PURE_uPAT_Identifiers &p);
} ;
#endif

#ifndef DECL_type_14AS_MultSetBindC7AS_NameCS7AS_NameCS3P
#define DECL_type_14AS_MultSetBindC7AS_NameCS7AS_NameCS3P 1

class type_14AS_MultSetBindC7AS_NameCS7AS_NameCS3P : public Tuple {
public:

  type_14AS_MultSetBindC7AS_NameCS7AS_NameCS3P() : Tuple(3) {}
  void Init(TYPE_AS_MultSetBind p2, TYPE_PURE_uPAT_Identifiers p3, TYPE_PURE_uPAT_Identifiers p4);

  type_14AS_MultSetBindC7AS_NameCS7AS_NameCS3P(const Generic &c) : Tuple(c) {}

  const char * GetTypeName() const { return "type_14AS_MultSetBindC7AS_NameCS7AS_NameCS3P"; }
  TYPE_AS_MultSetBind get_1() const;
  void set_1(const TYPE_AS_MultSetBind &p);
  TYPE_PURE_uPAT_Identifiers get_2() const;
  void set_2(const TYPE_PURE_uPAT_Identifiers &p);
  TYPE_PURE_uPAT_Identifiers get_3() const;
  void set_3(const TYPE_PURE_uPAT_Identifiers &p);
} ;
#endif

#ifndef DECL_type_15AS_MultTypeBindC7AS_NameCS7AS_NameCS3P
#define DECL_type_15AS_MultTypeBindC7AS_NameCS7AS_NameCS3P 1

class type_15AS_MultTypeBindC7AS_NameCS7AS_NameCS3P : public Tuple {
public:

  type_15AS_MultTypeBindC7AS_NameCS7AS_NameCS3P() : Tuple(3) {}
  void Init(TYPE_AS_MultTypeBind p2, TYPE_PURE_uPAT_Identifiers p3, TYPE_PURE_uPAT_Identifiers p4);

  type_15AS_MultTypeBindC7AS_NameCS7AS_NameCS3P(const Generic &c) : Tuple(c) {}

  const char * GetTypeName() const { return "type_15AS_MultTypeBindC7AS_NameCS7AS_NameCS3P"; }
  TYPE_AS_MultTypeBind get_1() const;
  void set_1(const TYPE_AS_MultTypeBind &p);
  TYPE_PURE_uPAT_Identifiers get_2() const;
  void set_2(const TYPE_PURE_uPAT_Identifiers &p);
  TYPE_PURE_uPAT_Identifiers get_3() const;
  void set_3(const TYPE_PURE_uPAT_Identifiers &p);
} ;
#endif

#ifndef DECL_type_10AS_SetBindC7AS_NameCS7AS_NameCS3P
#define DECL_type_10AS_SetBindC7AS_NameCS7AS_NameCS3P 1

class type_10AS_SetBindC7AS_NameCS7AS_NameCS3P : public Tuple {
public:

  type_10AS_SetBindC7AS_NameCS7AS_NameCS3P() : Tuple(3) {}
  void Init(TYPE_AS_SetBind p2, TYPE_PURE_uPAT_Identifiers p3, TYPE_PURE_uPAT_Identifiers p4);

  type_10AS_SetBindC7AS_NameCS7AS_NameCS3P(const Generic &c) : Tuple(c) {}

  const char * GetTypeName() const { return "type_10AS_SetBindC7AS_NameCS7AS_NameCS3P"; }
  TYPE_AS_SetBind get_1() const;
  void set_1(const TYPE_AS_SetBind &p);
  TYPE_PURE_uPAT_Identifiers get_2() const;
  void set_2(const TYPE_PURE_uPAT_Identifiers &p);
  TYPE_PURE_uPAT_Identifiers get_3() const;
  void set_3(const TYPE_PURE_uPAT_Identifiers &p);
} ;
#endif

#ifndef DECL_type_11AS_TypeBindC7AS_NameCS7AS_NameCS3P
#define DECL_type_11AS_TypeBindC7AS_NameCS7AS_NameCS3P 1

class type_11AS_TypeBindC7AS_NameCS7AS_NameCS3P : public Tuple {
public:

  type_11AS_TypeBindC7AS_NameCS7AS_NameCS3P() : Tuple(3) {}
  void Init(TYPE_AS_TypeBind p2, TYPE_PURE_uPAT_Identifiers p3, TYPE_PURE_uPAT_Identifiers p4);

  type_11AS_TypeBindC7AS_NameCS7AS_NameCS3P(const Generic &c) : Tuple(c) {}

  const char * GetTypeName() const { return "type_11AS_TypeBindC7AS_NameCS7AS_NameCS3P"; }
  TYPE_AS_TypeBind get_1() const;
  void set_1(const TYPE_AS_TypeBind &p);
  TYPE_PURE_uPAT_Identifiers get_2() const;
  void set_2(const TYPE_PURE_uPAT_Identifiers &p);
  TYPE_PURE_uPAT_Identifiers get_3() const;
  void set_3(const TYPE_PURE_uPAT_Identifiers &p);
} ;
#endif


#endif


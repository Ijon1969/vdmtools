//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at Fri 29-Oct-99 by the VDM-SLtoC++ Code Generator
// (v3.3 - Mon 22-Mar-99)
//
// Supported compilers:
// 	egcs version 1.1 on SunOS4, SunOS5, Linux, HP-UX10
// 	VC++ version 6.0 on Windows95, Windows NT
//



#include "TRL_uTAR_uEXPR_userdef.h"
#include "metaiv.h"
#include "TRL_uTAR_uEXPR.h"
#include "AS.h"
#include "CI.h"
#include "CI_uAUX.h"
#include "HOL.h"
#include "REP.h"
#include "REP2TYPE.h"
#include "SPEC_uAST.h"
#include "TRANS.h"
#include "TRL_uTAR_uDEF.h"
#include "TRL_uTAR_uPAT.h"
#include "TRL_uTAR_uTYPE.h"
#include "TRL_uTRA_uTYPE.h"
#if !DEF_quote_AND && DECL_quote_AND
#define DEF_quote_AND 1
const Quote quote_AND("AND");
#endif

#if !DEF_quote_COMPOSE && DECL_quote_COMPOSE
#define DEF_quote_COMPOSE 1
const Quote quote_COMPOSE("COMPOSE");
#endif

#if !DEF_quote_EQ && DECL_quote_EQ
#define DEF_quote_EQ 1
const Quote quote_EQ("EQ");
#endif

#if !DEF_quote_EQUIV && DECL_quote_EQUIV
#define DEF_quote_EQUIV 1
const Quote quote_EQUIV("EQUIV");
#endif

#if !DEF_quote_IMPLY && DECL_quote_IMPLY
#define DEF_quote_IMPLY 1
const Quote quote_IMPLY("IMPLY");
#endif

#if !DEF_quote_INSET && DECL_quote_INSET
#define DEF_quote_INSET 1
const Quote quote_INSET("INSET");
#endif

#if !DEF_quote_INTDIV && DECL_quote_INTDIV
#define DEF_quote_INTDIV 1
const Quote quote_INTDIV("INTDIV");
#endif

#if !DEF_quote_MAPDOMRESTBY && DECL_quote_MAPDOMRESTBY
#define DEF_quote_MAPDOMRESTBY 1
const Quote quote_MAPDOMRESTBY("MAPDOMRESTBY");
#endif

#if !DEF_quote_MAPDOMRESTTO && DECL_quote_MAPDOMRESTTO
#define DEF_quote_MAPDOMRESTTO 1
const Quote quote_MAPDOMRESTTO("MAPDOMRESTTO");
#endif

#if !DEF_quote_MAPMERGE && DECL_quote_MAPMERGE
#define DEF_quote_MAPMERGE 1
const Quote quote_MAPMERGE("MAPMERGE");
#endif

#if !DEF_quote_MAPRNGRESTBY && DECL_quote_MAPRNGRESTBY
#define DEF_quote_MAPRNGRESTBY 1
const Quote quote_MAPRNGRESTBY("MAPRNGRESTBY");
#endif

#if !DEF_quote_MAPRNGRESTTO && DECL_quote_MAPRNGRESTTO
#define DEF_quote_MAPRNGRESTTO 1
const Quote quote_MAPRNGRESTTO("MAPRNGRESTTO");
#endif

#if !DEF_quote_NE && DECL_quote_NE
#define DEF_quote_NE 1
const Quote quote_NE("NE");
#endif

#if !DEF_quote_NOTINSET && DECL_quote_NOTINSET
#define DEF_quote_NOTINSET 1
const Quote quote_NOTINSET("NOTINSET");
#endif

#if !DEF_quote_NUMDIV && DECL_quote_NUMDIV
#define DEF_quote_NUMDIV 1
const Quote quote_NUMDIV("NUMDIV");
#endif

#if !DEF_quote_NUMEXP && DECL_quote_NUMEXP
#define DEF_quote_NUMEXP 1
const Quote quote_NUMEXP("NUMEXP");
#endif

#if !DEF_quote_NUMGE && DECL_quote_NUMGE
#define DEF_quote_NUMGE 1
const Quote quote_NUMGE("NUMGE");
#endif

#if !DEF_quote_NUMGT && DECL_quote_NUMGT
#define DEF_quote_NUMGT 1
const Quote quote_NUMGT("NUMGT");
#endif

#if !DEF_quote_NUMLE && DECL_quote_NUMLE
#define DEF_quote_NUMLE 1
const Quote quote_NUMLE("NUMLE");
#endif

#if !DEF_quote_NUMLT && DECL_quote_NUMLT
#define DEF_quote_NUMLT 1
const Quote quote_NUMLT("NUMLT");
#endif

#if !DEF_quote_NUMMINUS && DECL_quote_NUMMINUS
#define DEF_quote_NUMMINUS 1
const Quote quote_NUMMINUS("NUMMINUS");
#endif

#if !DEF_quote_NUMMOD && DECL_quote_NUMMOD
#define DEF_quote_NUMMOD 1
const Quote quote_NUMMOD("NUMMOD");
#endif

#if !DEF_quote_NUMMULT && DECL_quote_NUMMULT
#define DEF_quote_NUMMULT 1
const Quote quote_NUMMULT("NUMMULT");
#endif

#if !DEF_quote_NUMPLUS && DECL_quote_NUMPLUS
#define DEF_quote_NUMPLUS 1
const Quote quote_NUMPLUS("NUMPLUS");
#endif

#if !DEF_quote_NUMREM && DECL_quote_NUMREM
#define DEF_quote_NUMREM 1
const Quote quote_NUMREM("NUMREM");
#endif

#if !DEF_quote_OR && DECL_quote_OR
#define DEF_quote_OR 1
const Quote quote_OR("OR");
#endif

#if !DEF_quote_PROPERSUBSET && DECL_quote_PROPERSUBSET
#define DEF_quote_PROPERSUBSET 1
const Quote quote_PROPERSUBSET("PROPERSUBSET");
#endif

#if !DEF_quote_SEQCONC && DECL_quote_SEQCONC
#define DEF_quote_SEQCONC 1
const Quote quote_SEQCONC("SEQCONC");
#endif

#if !DEF_quote_SETINTERSECT && DECL_quote_SETINTERSECT
#define DEF_quote_SETINTERSECT 1
const Quote quote_SETINTERSECT("SETINTERSECT");
#endif

#if !DEF_quote_SETMINUS && DECL_quote_SETMINUS
#define DEF_quote_SETMINUS 1
const Quote quote_SETMINUS("SETMINUS");
#endif

#if !DEF_quote_SETUNION && DECL_quote_SETUNION
#define DEF_quote_SETUNION 1
const Quote quote_SETUNION("SETUNION");
#endif

#if !DEF_quote_SUBSET && DECL_quote_SUBSET
#define DEF_quote_SUBSET 1
const Quote quote_SUBSET("SUBSET");
#endif

#if !DEF_quote_FLOOR && DECL_quote_FLOOR
#define DEF_quote_FLOOR 1
const Quote quote_FLOOR("FLOOR");
#endif

#if !DEF_quote_MAPDISTRMERGE && DECL_quote_MAPDISTRMERGE
#define DEF_quote_MAPDISTRMERGE 1
const Quote quote_MAPDISTRMERGE("MAPDISTRMERGE");
#endif

#if !DEF_quote_MAPDOM && DECL_quote_MAPDOM
#define DEF_quote_MAPDOM 1
const Quote quote_MAPDOM("MAPDOM");
#endif

#if !DEF_quote_MAPRNG && DECL_quote_MAPRNG
#define DEF_quote_MAPRNG 1
const Quote quote_MAPRNG("MAPRNG");
#endif

#if !DEF_quote_NOT && DECL_quote_NOT
#define DEF_quote_NOT 1
const Quote quote_NOT("NOT");
#endif

#if !DEF_quote_NUMABS && DECL_quote_NUMABS
#define DEF_quote_NUMABS 1
const Quote quote_NUMABS("NUMABS");
#endif

#if !DEF_quote_SEQDISTRCONC && DECL_quote_SEQDISTRCONC
#define DEF_quote_SEQDISTRCONC 1
const Quote quote_SEQDISTRCONC("SEQDISTRCONC");
#endif

#if !DEF_quote_SEQELEMS && DECL_quote_SEQELEMS
#define DEF_quote_SEQELEMS 1
const Quote quote_SEQELEMS("SEQELEMS");
#endif

#if !DEF_quote_SEQHEAD && DECL_quote_SEQHEAD
#define DEF_quote_SEQHEAD 1
const Quote quote_SEQHEAD("SEQHEAD");
#endif

#if !DEF_quote_SEQINDICES && DECL_quote_SEQINDICES
#define DEF_quote_SEQINDICES 1
const Quote quote_SEQINDICES("SEQINDICES");
#endif

#if !DEF_quote_SEQLEN && DECL_quote_SEQLEN
#define DEF_quote_SEQLEN 1
const Quote quote_SEQLEN("SEQLEN");
#endif

#if !DEF_quote_SEQTAIL && DECL_quote_SEQTAIL
#define DEF_quote_SEQTAIL 1
const Quote quote_SEQTAIL("SEQTAIL");
#endif

#if !DEF_quote_SETCARD && DECL_quote_SETCARD
#define DEF_quote_SETCARD 1
const Quote quote_SETCARD("SETCARD");
#endif

#if !DEF_quote_SETDISTRINTERSECT && DECL_quote_SETDISTRINTERSECT
#define DEF_quote_SETDISTRINTERSECT 1
const Quote quote_SETDISTRINTERSECT("SETDISTRINTERSECT");
#endif

#if !DEF_quote_SETDISTRUNION && DECL_quote_SETDISTRUNION
#define DEF_quote_SETDISTRUNION 1
const Quote quote_SETDISTRUNION("SETDISTRUNION");
#endif

#if !DEF_quote_SETPOWER && DECL_quote_SETPOWER
#define DEF_quote_SETPOWER 1
const Quote quote_SETPOWER("SETPOWER");
#endif

#if !DEF_quote_ALL && DECL_quote_ALL
#define DEF_quote_ALL 1
const Quote quote_ALL("ALL");
#endif

#if !DEF_quote_EXISTS && DECL_quote_EXISTS
#define DEF_quote_EXISTS 1
const Quote quote_EXISTS("EXISTS");
#endif

#if !DEF_type_FF2P && DECL_type_FF2P
#define DEF_type_FF2P 1

void type_FF2P::Init(TYPE_HOL_term p1, TYPE_HOL_term p2) {
  SetField(1, p1);
  SetField(2, p2);
}

TYPE_HOL_term type_FF2P::get_1() const { return (TYPE_HOL_term) GetField(1); }

void type_FF2P::set_1(const TYPE_HOL_term &p) { SetField(1, p); }

TYPE_HOL_term type_FF2P::get_2() const { return (TYPE_HOL_term) GetField(2); }

void type_FF2P::set_2(const TYPE_HOL_term &p) { SetField(2, p); }
#endif

#if !DEF_type_F19TRL_uTAR_uEXPR_EXPRC2P && DECL_type_F19TRL_uTAR_uEXPR_EXPRC2P
#define DEF_type_F19TRL_uTAR_uEXPR_EXPRC2P 1

void type_F19TRL_uTAR_uEXPR_EXPRC2P::Init(TYPE_TRL_uTAR_uPAT_PatternBind p1, TYPE_TRL_uTAR_uEXPR_Expr p2) {
  SetField(1, p1);
  SetField(2, p2);
}

TYPE_TRL_uTAR_uPAT_PatternBind type_F19TRL_uTAR_uEXPR_EXPRC2P::get_1() const { return (TYPE_TRL_uTAR_uPAT_PatternBind) GetField(1); }

void type_F19TRL_uTAR_uEXPR_EXPRC2P::set_1(const TYPE_TRL_uTAR_uPAT_PatternBind &p) { SetField(1, p); }

TYPE_TRL_uTAR_uEXPR_Expr type_F19TRL_uTAR_uEXPR_EXPRC2P::get_2() const { return (TYPE_TRL_uTAR_uEXPR_Expr) GetField(2); }

void type_F19TRL_uTAR_uEXPR_EXPRC2P::set_2(const TYPE_TRL_uTAR_uEXPR_Expr &p) { SetField(2, p); }
#endif


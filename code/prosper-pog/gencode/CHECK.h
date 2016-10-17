//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at Mon 05-Jul-99 by the VDM-SLtoC++ Code Generator
// (v3.3 - Mon 22-Mar-99)
//
// Supported compilers:
// 	egcs version 1.1 on SunOS4, SunOS5, Linux, HP-UX10
// 	VC++ version 6.0 on Windows95, Windows NT
//

#ifndef _CHECK_h
#define _CHECK_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "AS.h"
#include "CAST.h"
#include "CI.h"
#include "CI_uAUX.h"
#include "FRESH.h"
#include "GEN_uINV.h"
#include "GEN_uPO.h"
#include "POGTP.h"
#include "PURE_uPAT.h"
#include "REP.h"
#include "REP2TYPE.h"
#include "TYPE2REP.h"
#include "CHECK_anonym.h"
;
void init_CHECK();
type_21POGTP_ProofObligationCL vdm_CHECK_BinaryOperatorSubtype(const TYPE_AS_BinaryExpr &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_FS vdm_CHECK_FilterEmptyReps(const type_FS &);
type_21POGTP_ProofObligationCL vdm_CHECK_FuncRngSubtypeOfDom(const TYPE_AS_Expr &, const TYPE_AS_Type &, const TYPE_AS_Expr &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_CI_ContextId &, const TYPE_POGTP_Context &);
Bool vdm_CHECK_pre_FuncRngSubtypeOfDom(const TYPE_AS_Expr &, const TYPE_AS_Type &, const TYPE_AS_Expr &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_CI_ContextId &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_FuncRngSubtypeOfDomEndo(const TYPE_AS_Expr &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_CI_ContextId &, const TYPE_POGTP_Context &);
Bool vdm_CHECK_pre_FuncRngSubtypeOfDomEndo(const TYPE_AS_Expr &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_CI_ContextId &, const TYPE_POGTP_Context &);
Generic vdm_CHECK_GetComposeOverlap(const TYPE_AS_Name &, const TYPE_REP_TypeRep &);
Generic vdm_CHECK_GetComposeOverlapWithFieldSelectors(const TYPE_REP_TypeRep &, const type_7AS_NameCS &);
Generic vdm_CHECK_GetFuncOverlap(const TYPE_REP_TypeRep &, const Int &);
Generic vdm_CHECK_GetOverlap(const TYPE_REP_TypeRep &, const TYPE_CHECK_TypeAbbrev &);
type_iS vdm_CHECK_GetProdArities(const TYPE_AS_Type &);
Generic vdm_CHECK_GetProdOverlap(const TYPE_REP_TypeRep &);
Generic vdm_CHECK_GetSetOverlap(const TYPE_REP_TypeRep &);
TYPE_CHECK_TypeAbbrev vdm_CHECK_GetTypeAbbrev(const TYPE_CHECK_TypeAbbrev &, const TYPE_AS_Expr &);
TYPE_CHECK_TypeAbbrev vdm_CHECK_GetTypeAbbrevArg(const TYPE_CHECK_TypeAbbrev &, const TYPE_AS_Expr &, const Int &);
TYPE_CHECK_TypeAbbrev vdm_CHECK_GetTypeAbbrevFromSet(const TYPE_CHECK_TypeAbbrev &, const type_US &);
TYPE_CHECK_TypeAbbrev vdm_CHECK_GetTypeAbbrevFromTypeRep(const TYPE_CHECK_TypeAbbrev &, const TYPE_REP_TypeRep &);
TYPE_CHECK_TypeAbbrev vdm_CHECK_GetTypeAbbrevFromTypeRepArg(const TYPE_CHECK_TypeAbbrev &, const TYPE_REP_TypeRep &, const Int &);
Bool vdm_CHECK_IsBaseAsSubtype(const TYPE_REP_TypeRep &, const TYPE_AS_Type &);
Bool vdm_CHECK_IsBaseSubtype(const TYPE_REP_TypeRep &, const TYPE_REP_TypeRep &);
Bool vdm_CHECK_IsBaseSubtypeAS(const TYPE_AS_Type &, const TYPE_AS_Type &);
Bool vdm_CHECK_IsBaseSubtypeTypeAbbrev(const TYPE_REP_TypeRep &, const TYPE_CHECK_TypeAbbrev &);
Bool vdm_CHECK_IsSubtype(const TYPE_REP_TypeRep &, const TYPE_REP_TypeRep &, const type_15REP_TypeNameRepC15REP_TypeNameRepC2PS &);
Bool vdm_CHECK_IsSubtypeBasicTypes(const TYPE_REP_BasicTypeRep &, const TYPE_REP_BasicTypeRep &);
type_21POGTP_ProofObligationCL vdm_CHECK_MapRngSubtypeOfDom(const TYPE_AS_Expr &, const TYPE_AS_Type &, const TYPE_AS_Expr &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_CI_ContextId &, const TYPE_POGTP_Context &);
Bool vdm_CHECK_pre_MapRngSubtypeOfDom(const TYPE_AS_Expr &, const TYPE_AS_Type &, const TYPE_AS_Expr &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_CI_ContextId &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_MapRngSubtypeOfDomEndo(const TYPE_AS_Expr &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_CI_ContextId &, const TYPE_POGTP_Context &);
Bool vdm_CHECK_pre_MapRngSubtypeOfDomEndo(const TYPE_AS_Expr &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_CI_ContextId &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_PatternSubtype(const TYPE_AS_Pattern &, const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_PatternSubtypeOf(const TYPE_AS_Pattern &, const Generic &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_PatternSubtypeOfSetOfType(const TYPE_AS_Pattern &, const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_PrefixOperatorSubtype(const TYPE_AS_PrefixExpr &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_typevariableL vdm_CHECK_SetToSeq(const type_typevariableS &);
type_21POGTP_ProofObligationCL vdm_CHECK_Subtype(const TYPE_AS_Expr &, const TYPE_AS_Type &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeComposition(const TYPE_AS_Expr &, const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_CI_ContextId &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeForApplication(const TYPE_AS_Expr &, const type_FL &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeForEquality(const TYPE_AS_Expr &, const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_CI_ContextId &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeForFieldSelect(const TYPE_AS_Expr &, const TYPE_AS_Name &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeForFuncApplicationArg(const TYPE_AS_Expr &, const type_FL &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
Bool vdm_CHECK_pre_SubtypeForFuncApplicationArg(const TYPE_AS_Expr &, const type_FL &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeForFuncApplicationUnion(const TYPE_AS_Expr &, const type_FL &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeForMapApplicationArg(const TYPE_AS_Expr &, const type_FL &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
Bool vdm_CHECK_pre_SubtypeForMapApplicationArg(const TYPE_AS_Expr &, const type_FL &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeForMapApplicationUnion(const TYPE_AS_Expr &, const type_FL &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeForPreCond(const TYPE_AS_Expr &, const type_FL &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
Bool vdm_CHECK_pre_SubtypeForPreCond(const TYPE_AS_Expr &, const type_FL &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeForPreCondApplication(const TYPE_AS_Expr &, const type_FL &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeForSeqApplicationArg(const TYPE_AS_Expr &, const type_FL &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
Bool vdm_CHECK_pre_SubtypeForSeqApplicationArg(const TYPE_AS_Expr &, const type_FL &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeForSeqApplicationUnion(const TYPE_AS_Expr &, const type_FL &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeForTupleSelect(const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeFunctionComposition(const TYPE_AS_Expr &, const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_CI_ContextId &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeIteration(const TYPE_AS_Expr &, const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_CI_ContextId &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeMapComposition(const TYPE_AS_Expr &, const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_CI_ContextId &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOf(const Generic &, const Generic &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfBoolean(const Generic &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfExpr(const TYPE_AS_Expr &, const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfInMap(const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfInteger(const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfMap(const TYPE_AS_Expr &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfNat(const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfNatOne(const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfPattern(const TYPE_AS_Expr &, const TYPE_AS_Pattern &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfReal(const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfSeq(const TYPE_AS_Expr &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfSeqOrMap(const TYPE_AS_Expr &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfSet(const TYPE_AS_Expr &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfSetOfMap(const TYPE_AS_Expr &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfSetOfReal(const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfSetOfType(const TYPE_AS_Expr &, const TYPE_AS_Expr &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfTypeAbbrev(const Generic &, const TYPE_CHECK_TypeAbbrev &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeOfTypeRep(const TYPE_AS_Expr &, const TYPE_REP_TypeRep &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeRecordModifications(const TYPE_AS_Expr &, const type_21AS_RecordModificationCL &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
Bool vdm_CHECK_pre_SubtypeRecordModifications(const TYPE_AS_Expr &, const type_21AS_RecordModificationCL &, const TYPE_AS_Type &, const type_7AS_NameCS &, const TYPE_POGTP_Context &);
type_21POGTP_ProofObligationCL vdm_CHECK_SubtypeRecordModifier(const TYPE_AS_Expr &, const type_21AS_RecordModificationCL &, const type_7AS_NameCS &, const TYPE_CI_ContextId &, const TYPE_POGTP_Context &);
TYPE_AS_Type vdm_CHECK_TypeAbbrev2Type(const TYPE_CHECK_TypeAbbrev &);

#endif


//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at Mon 11-Oct-99 by the VDM-SLtoC++ Code Generator
// (v3.3 - Mon 22-Mar-99)
//
// Supported compilers:
// 	egcs version 1.1 on SunOS4, SunOS5, Linux, HP-UX10
// 	VC++ version 6.0 on Windows95, Windows NT
//

#ifndef _PP_uTAR_uEXPR_h
#define _PP_uTAR_uEXPR_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "AS.h"
#include "CI.h"
#include "PP_uTAR_uDEF.h"
#include "PP_uTAR_uPAT.h"
#include "PP_uTAR_uTYPE.h"
#include "REP.h"
#include "PP_uTAR_uEXPR_anonym.h"
enum  {
  vdm_PP_uTAR_uEXPR_ELSEIFEXPR = TAG_TYPE_PP_uTAR_uEXPR_ELSEIFEXPR,
  length_PP_uTAR_uEXPR_ELSEIFEXPR = 2,
  pos_PP_uTAR_uEXPR_ELSEIFEXPR_test = 1,
  pos_PP_uTAR_uEXPR_ELSEIFEXPR_cons = 2
};

class TYPE_PP_uTAR_uEXPR_ELSEIFEXPR : public Record {
public:

  TYPE_PP_uTAR_uEXPR_ELSEIFEXPR() : Record(TAG_TYPE_PP_uTAR_uEXPR_ELSEIFEXPR, 2) {}
  void Init(TYPE_PP_uTAR_uEXPR_EXPR p2, TYPE_PP_uTAR_uEXPR_EXPR p3);

  TYPE_PP_uTAR_uEXPR_ELSEIFEXPR(const Generic &c) : Record(c) {}

  const char * GetTypeName() const { return "TYPE_PP_uTAR_uEXPR_ELSEIFEXPR"; }
  TYPE_PP_uTAR_uEXPR_EXPR get_test() const;
  void set_test(const TYPE_PP_uTAR_uEXPR_EXPR &p);
  TYPE_PP_uTAR_uEXPR_EXPR get_cons() const;
  void set_cons(const TYPE_PP_uTAR_uEXPR_EXPR &p);
} ;
void init_PP_uTAR_uEXPR();
TYPE_PP_uTAR_uEXPR_string vdm_PP_uTAR_uEXPR_List2CommaList(const type_cLL &);
TYPE_PP_uTAR_uEXPR_string vdm_PP_uTAR_uEXPR_List2SeparatorList(const TYPE_PP_uTAR_uEXPR_string &, const type_cLL &);
TYPE_PP_uTAR_uEXPR_string vdm_PP_uTAR_uEXPR_Nat2str(const Int &);
type_cLcL2P vdm_PP_uTAR_uEXPR_Real2str(const Real &);
Bool vdm_PP_uTAR_uEXPR_pre_Real2str(const Real &);
TYPE_PP_uTAR_uEXPR_AllOrExistsExpr vdm_PP_uTAR_uEXPR_tar_uAllOrExistsExpr(const TYPE_AS_AllOrExistsQuantifier &, const TYPE_PP_uTAR_uPAT_BindList &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_ApplyExpr vdm_PP_uTAR_uEXPR_tar_uApplyExpr(const TYPE_AS_ApplyExpr &, const TYPE_PP_uTAR_uEXPR_Expr &, const type_cLL &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_BinaryExpr vdm_PP_uTAR_uEXPR_tar_uBinaryExpr(const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_AS_BinaryOp &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_BoolLit vdm_PP_uTAR_uEXPR_tar_uBoolLit(const Bool &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_BracketedExpr vdm_PP_uTAR_uEXPR_tar_uBracketedExpr(const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_CaseAltn vdm_PP_uTAR_uEXPR_tar_uCaseAltn(const type_cLL &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_CasesExpr vdm_PP_uTAR_uEXPR_tar_uCasesExpr(const TYPE_PP_uTAR_uEXPR_Expr &, const type_cLL &, const Generic &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_CharLit vdm_PP_uTAR_uEXPR_tar_uCharLit(const Char &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_DefExpr vdm_PP_uTAR_uEXPR_tar_uDefExpr(const type_cLcL2PL &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_ElseifExpr vdm_PP_uTAR_uEXPR_tar_uElseIfExpr(const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_ExistsUniqueExpr vdm_PP_uTAR_uEXPR_tar_uExistsUniqueExpr(const TYPE_PP_uTAR_uPAT_Bind &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_FctTypeInstExpr vdm_PP_uTAR_uEXPR_tar_uFctTypeInstExpr(const TYPE_PP_uTAR_uEXPR_NameName &, const type_cLL &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_Expr vdm_PP_uTAR_uEXPR_tar_uFieldSelectExpr(const TYPE_AS_FieldSelectExpr &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_PP_uTAR_uEXPR_NameName &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_Ids vdm_PP_uTAR_uEXPR_tar_uIds(const TYPE_AS_Ids &);
Bool vdm_PP_uTAR_uEXPR_pre_tar_uIds(const TYPE_AS_Ids &);
TYPE_PP_uTAR_uEXPR_IfExpr vdm_PP_uTAR_uEXPR_tar_uIfExpr(const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_PP_uTAR_uEXPR_Expr &, const type_24PP_uTAR_uEXPR_ELSEIFEXPRCL &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_IotaExpr vdm_PP_uTAR_uEXPR_tar_uIotaExpr(const TYPE_PP_uTAR_uPAT_Bind &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_IsExpr vdm_PP_uTAR_uEXPR_tar_uIsExpr(const type_cL &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_LambdaExpr vdm_PP_uTAR_uEXPR_tar_uLambdaExpr(const type_cLL &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_LetBeSTExpr vdm_PP_uTAR_uEXPR_tar_uLetBeSTExpr(const TYPE_PP_uTAR_uPAT_Bind &, const Generic &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_LetExpr vdm_PP_uTAR_uEXPR_tar_uLetExpr(const type_cLL &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_MapComprehensionExpr vdm_PP_uTAR_uEXPR_tar_uMapComprehensionExpr(const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_PP_uTAR_uPAT_BindList &, const Generic &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_MapEnumerationExpr vdm_PP_uTAR_uEXPR_tar_uMapEnumerationExpr(const type_cLL &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_MapInverseExpr vdm_PP_uTAR_uEXPR_tar_uMapInverseExpr(const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_Maplet vdm_PP_uTAR_uEXPR_tar_uMaplet(const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_NameExpr vdm_PP_uTAR_uEXPR_tar_uNameExpr(const TYPE_PP_uTAR_uEXPR_Ids &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_NameName vdm_PP_uTAR_uEXPR_tar_uNameName(const TYPE_PP_uTAR_uEXPR_Ids &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_NameType vdm_PP_uTAR_uEXPR_tar_uNameType(const TYPE_PP_uTAR_uEXPR_Ids &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_NilLit vdm_PP_uTAR_uEXPR_tar_uNilLit(const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_PreConditionApplyExpr vdm_PP_uTAR_uEXPR_tar_uPreConditionApplyExpr(const TYPE_AS_PreConditionApplyExpr &, const TYPE_PP_uTAR_uEXPR_Expr &, const type_cLL &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_PrefixExpr vdm_PP_uTAR_uEXPR_tar_uPrefixExpr(const TYPE_AS_PrefixExpr &, const TYPE_AS_UnaryOp &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_QuoteLit vdm_PP_uTAR_uEXPR_tar_uQuoteLit(const type_cL &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_RealLit vdm_PP_uTAR_uEXPR_tar_uRealLit(const Real &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_RecordConstructorExpr vdm_PP_uTAR_uEXPR_tar_uRecordConstructorExpr(const TYPE_PP_uTAR_uEXPR_NameName &, const type_cLL &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_RecordModification vdm_PP_uTAR_uEXPR_tar_uRecordModification(const TYPE_PP_uTAR_uEXPR_NameName &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_RecordModifierExpr vdm_PP_uTAR_uEXPR_tar_uRecordModifierExpr(const TYPE_PP_uTAR_uEXPR_Expr &, const type_cLL &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_SeqComprehensionExpr vdm_PP_uTAR_uEXPR_tar_uSeqComprehensionExpr(const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_PP_uTAR_uPAT_Bind &, const Generic &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_SeqEnumerationExpr vdm_PP_uTAR_uEXPR_tar_uSeqEnumerationExpr(const type_cLL &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_SeqModifyMapOverrideExpr vdm_PP_uTAR_uEXPR_tar_uSeqModifyMapOverrideExpr(const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_SetComprehensionExpr vdm_PP_uTAR_uEXPR_tar_uSetComprehensionExpr(const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_PP_uTAR_uPAT_BindList &, const Generic &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_SetEnumerationExpr vdm_PP_uTAR_uEXPR_tar_uSetEnumerationExpr(const type_cLL &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_SetRangeExpr vdm_PP_uTAR_uEXPR_tar_uSetRangeExpr(const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_SubSequenceExpr vdm_PP_uTAR_uEXPR_tar_uSubSequenceExpr(const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_TextLit vdm_PP_uTAR_uEXPR_tar_uTextLit(const type_cL &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_TokenConstructorExpr vdm_PP_uTAR_uEXPR_tar_uTokenConstructorExpr(const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_TupleConstructorExpr vdm_PP_uTAR_uEXPR_tar_uTupleConstructorExpr(const type_cLL &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_Expr vdm_PP_uTAR_uEXPR_tar_uTupleSelectExpr(const TYPE_AS_TupleSelectExpr &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_IsExpr vdm_PP_uTAR_uEXPR_tar_uTypeJudgementExpr(const TYPE_PP_uTAR_uEXPR_Expr &, const TYPE_PP_uTAR_uTYPE_Type &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uEXPR_UndefinedExpr vdm_PP_uTAR_uEXPR_tar_uUndefinedExpr(const TYPE_CI_ContextId &);

#endif


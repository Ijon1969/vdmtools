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

#ifndef _PP_uTAR_uTYPE_h
#define _PP_uTAR_uTYPE_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "AS.h"
#include "CI.h"
#include "REP.h"
#include "PP_uTAR_uTYPE_anonym.h"
;
void init_PP_uTAR_uTYPE();
TYPE_PP_uTAR_uTYPE_string vdm_PP_uTAR_uTYPE_List2SeparatorList(const TYPE_PP_uTAR_uTYPE_string &, const type_cLL &);
TYPE_PP_uTAR_uTYPE_BasicType vdm_PP_uTAR_uTYPE_tar_uBooleanType(const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_BracketedType vdm_PP_uTAR_uTYPE_tar_uBracketedType(const TYPE_PP_uTAR_uTYPE_Type &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_BasicType vdm_PP_uTAR_uTYPE_tar_uCharType(const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_CompositeType vdm_PP_uTAR_uTYPE_tar_uCompositeType(const TYPE_PP_uTAR_uTYPE_Ids &, const type_cLL &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_Field vdm_PP_uTAR_uTYPE_tar_uField(const Generic &, const TYPE_PP_uTAR_uTYPE_Type &, const Bool &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_GeneralMapType vdm_PP_uTAR_uTYPE_tar_uGeneralMapType(const TYPE_PP_uTAR_uTYPE_Type &, const TYPE_PP_uTAR_uTYPE_Type &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_Ids vdm_PP_uTAR_uTYPE_tar_uIds(const TYPE_AS_Ids &);
Bool vdm_PP_uTAR_uTYPE_pre_tar_uIds(const TYPE_AS_Ids &);
TYPE_PP_uTAR_uTYPE_InjectiveMapType vdm_PP_uTAR_uTYPE_tar_uInjectiveMapType(const TYPE_PP_uTAR_uTYPE_Type &, const TYPE_PP_uTAR_uTYPE_Type &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_BasicType vdm_PP_uTAR_uTYPE_tar_uIntegerType(const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_Name vdm_PP_uTAR_uTYPE_tar_uName(const TYPE_PP_uTAR_uTYPE_Ids &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_BasicType vdm_PP_uTAR_uTYPE_tar_uNatOneType(const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_BasicType vdm_PP_uTAR_uTYPE_tar_uNatType(const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_OptionalType vdm_PP_uTAR_uTYPE_tar_uOptionalType(const TYPE_PP_uTAR_uTYPE_Type &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_PartialFnType vdm_PP_uTAR_uTYPE_tar_uPartialFnType(const type_cLL &, const TYPE_PP_uTAR_uTYPE_Type &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_ProductType vdm_PP_uTAR_uTYPE_tar_uProductType(const type_cLL &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_QuoteType vdm_PP_uTAR_uTYPE_tar_uQuoteType(const TYPE_AS_QuoteLit &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_BasicType vdm_PP_uTAR_uTYPE_tar_uRatType(const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_BasicType vdm_PP_uTAR_uTYPE_tar_uRealType(const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_Seq0Type vdm_PP_uTAR_uTYPE_tar_uSeq0Type(const TYPE_PP_uTAR_uTYPE_Type &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_Seq1Type vdm_PP_uTAR_uTYPE_tar_uSeq1Type(const TYPE_PP_uTAR_uTYPE_Type &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_SetType vdm_PP_uTAR_uTYPE_tar_uSetType(const TYPE_PP_uTAR_uTYPE_Type &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_BasicType vdm_PP_uTAR_uTYPE_tar_uTokenType(const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_TotalFnType vdm_PP_uTAR_uTYPE_tar_uTotalFnType(const type_cLL &, const TYPE_PP_uTAR_uTYPE_Type &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_TypeName vdm_PP_uTAR_uTYPE_tar_uTypeName(const TYPE_PP_uTAR_uTYPE_Ids &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_TypeVar vdm_PP_uTAR_uTYPE_tar_uTypeVar(const TYPE_PP_uTAR_uTYPE_Ids &, const TYPE_CI_ContextId &);
TYPE_PP_uTAR_uTYPE_UnionType vdm_PP_uTAR_uTYPE_tar_uUnionType(const type_cLL &, const TYPE_CI_ContextId &);

#endif


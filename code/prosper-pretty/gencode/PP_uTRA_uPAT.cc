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



#include "PP_uTRA_uPAT.h"
static TYPE_PP_uTAR_uPAT_MatchVal vdm_PP_uTRA_uPAT_trv_uMatchVal(const TYPE_AS_MatchVal &);
static TYPE_PP_uTAR_uPAT_MultBind vdm_PP_uTRA_uPAT_trv_uMultBind(const TYPE_AS_MultBind &);
static TYPE_PP_uTAR_uPAT_MultSetBind vdm_PP_uTRA_uPAT_trv_uMultSetBind(const TYPE_AS_MultSetBind &);
static TYPE_PP_uTAR_uPAT_MultTypeBind vdm_PP_uTRA_uPAT_trv_uMultTypeBind(const TYPE_AS_MultTypeBind &);
static TYPE_PP_uTAR_uPAT_PatternName vdm_PP_uTRA_uPAT_trv_uPatternName(const TYPE_AS_PatternName &);
static TYPE_PP_uTAR_uPAT_RecordPattern vdm_PP_uTRA_uPAT_trv_uRecordPattern(const TYPE_AS_RecordPattern &);
static TYPE_PP_uTAR_uPAT_SeqConcPattern vdm_PP_uTRA_uPAT_trv_uSeqConcPattern(const TYPE_AS_SeqConcPattern &);
static TYPE_PP_uTAR_uPAT_SeqEnumPattern vdm_PP_uTRA_uPAT_trv_uSeqEnumPattern(const TYPE_AS_SeqEnumPattern &);
static TYPE_PP_uTAR_uPAT_SetEnumPattern vdm_PP_uTRA_uPAT_trv_uSetEnumPattern(const TYPE_AS_SetEnumPattern &);
static TYPE_PP_uTAR_uPAT_SetUnionPattern vdm_PP_uTRA_uPAT_trv_uSetUnionPattern(const TYPE_AS_SetUnionPattern &);
static TYPE_PP_uTAR_uPAT_TuplePattern vdm_PP_uTRA_uPAT_trv_uTuplePattern(const TYPE_AS_TuplePattern &);

void init_PP_uTRA_uPAT_VDMLib() {
  VDMGetDefaultRecInfoMap().NewTag(TOKEN, 1);
  VDMGetDefaultRecInfoMap().SetSymTag(TOKEN, "token");
}
#ifdef DEF_PP_uTRA_uPAT_USERIMPL

#include "PP_uTRA_uPAT_userimpl.cc"

#endif


void init_PP_uTRA_uPAT() { init_PP_uTRA_uPAT_VDMLib(); }
#ifndef DEF_PP_uTRA_uPAT_trv_uBind

TYPE_PP_uTAR_uPAT_Bind vdm_PP_uTRA_uPAT_trv_uBind(const TYPE_AS_Bind &vdm_PP_uTRA_uPAT_bind) {
  Sequence varRes_3;
  bool succ_4 = true;
  {
    succ_4 = true;
    if (vdm_PP_uTRA_uPAT_bind.IsRecord() && vdm_AS_SetBind == ((Record) vdm_PP_uTRA_uPAT_bind).GetTag()) {
      Sequence e_l_7;
      for (int i_8 = 1; i_8 <= ((Record) vdm_PP_uTRA_uPAT_bind).Length(); i_8++) 
        e_l_7.ImpAppend(((Record) vdm_PP_uTRA_uPAT_bind).GetField(i_8));
      if (succ_4 = 3 == (Int) e_l_7.Length()) {}
    }
    else 
      succ_4 = false;
    if (succ_4) 
      varRes_3 = vdm_PP_uTRA_uPAT_trv_uSetBind((Generic) vdm_PP_uTRA_uPAT_bind);
  }
  if (!succ_4) {
    succ_4 = true;
    if (vdm_PP_uTRA_uPAT_bind.IsRecord() && vdm_AS_TypeBind == ((Record) vdm_PP_uTRA_uPAT_bind).GetTag()) {
      Sequence e_l_10;
      for (int i_11 = 1; i_11 <= ((Record) vdm_PP_uTRA_uPAT_bind).Length(); i_11++) 
        e_l_10.ImpAppend(((Record) vdm_PP_uTRA_uPAT_bind).GetField(i_11));
      if (succ_4 = 3 == (Int) e_l_10.Length()) {}
    }
    else 
      succ_4 = false;
    if (succ_4) 
      varRes_3 = vdm_PP_uTRA_uPAT_trv_uTypeBind((Generic) vdm_PP_uTRA_uPAT_bind);
  }
  if (!succ_4) 
    RunTime("No \'others\' branch in CasesExpr");
  return (Generic) varRes_3;
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uBindList

TYPE_PP_uTAR_uPAT_BindList vdm_PP_uTRA_uPAT_trv_uBindList(const TYPE_AS_BindList &vdm_PP_uTRA_uPAT_binds) {
  Sequence varRes_3;
  Sequence par_4;
  {
    Sequence res_l_5;
    Set resBind_s_7;
    Set riseq_11;
    int max_12 = (Int) vdm_PP_uTRA_uPAT_binds.Length();
    for (int i_13 = 1; i_13 <= max_12; i_13++) 
      riseq_11.Insert((Int) i_13);
    resBind_s_7 = riseq_11;
    Sequence bind_l_6;
    if ((Int) resBind_s_7.Card() != (Int) 0) 
      bind_l_6 = Sort(resBind_s_7);
    bool succ_8 = true;
    Int vdm_PP_uTRA_uPAT_i;
    Generic tmpe_19;
    for (int i_18 = bind_l_6.First(tmpe_19); i_18; i_18 = bind_l_6.Next(tmpe_19)) {
      Int e_9 = tmpe_19;
      vdm_PP_uTRA_uPAT_i = e_9;
      if (succ_8) 
        res_l_5.ImpAppend(vdm_PP_uTRA_uPAT_trv_uMultBind((Generic) (Record) vdm_PP_uTRA_uPAT_binds[vdm_PP_uTRA_uPAT_i.GetValue()]));
    }
    par_4 = res_l_5;
  }
  varRes_3 = vdm_PP_uTAR_uPAT_tar_uBindList((Generic) par_4);
  return (Generic) varRes_3;
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uMatchVal

TYPE_PP_uTAR_uPAT_MatchVal vdm_PP_uTRA_uPAT_trv_uMatchVal(const TYPE_AS_MatchVal &var_1_1) {
  Int vdm_PP_uTRA_uPAT_cid;
  Record vdm_PP_uTRA_uPAT_val;
  bool succ_2 = true;
  if (var_1_1.IsRecord() && vdm_AS_MatchVal == var_1_1.GetTag()) {
    Sequence e_l_7;
    for (int i_8 = 1; i_8 <= var_1_1.Length(); i_8++) 
      e_l_7.ImpAppend(var_1_1.GetField(i_8));
    if (succ_2 = 2 == (Int) e_l_7.Length()) {
      vdm_PP_uTRA_uPAT_val = (Generic) e_l_7.Hd();
      vdm_PP_uTRA_uPAT_cid = (Generic) e_l_7[2];
    }
  }
  else 
    succ_2 = false;
  if (!succ_2) 
    RunTime("Pattern Match in Function Apply in function : trv_uMatchVal failed");
  return (Generic) vdm_PP_uTAR_uPAT_tar_uMatchVal((Generic) vdm_PP_uTRA_uEXPR_trv_uExpr((Generic) vdm_PP_uTRA_uPAT_val), (Generic) vdm_PP_uTRA_uPAT_cid);
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uMultBind

TYPE_PP_uTAR_uPAT_MultBind vdm_PP_uTRA_uPAT_trv_uMultBind(const TYPE_AS_MultBind &vdm_PP_uTRA_uPAT_mbinds) {
  Sequence varRes_3;
  bool succ_4 = true;
  {
    succ_4 = true;
    if (vdm_PP_uTRA_uPAT_mbinds.IsRecord() && vdm_AS_MultSetBind == ((Record) vdm_PP_uTRA_uPAT_mbinds).GetTag()) {
      Sequence e_l_7;
      for (int i_8 = 1; i_8 <= ((Record) vdm_PP_uTRA_uPAT_mbinds).Length(); i_8++) 
        e_l_7.ImpAppend(((Record) vdm_PP_uTRA_uPAT_mbinds).GetField(i_8));
      if (succ_4 = 3 == (Int) e_l_7.Length()) {}
    }
    else 
      succ_4 = false;
    if (succ_4) 
      varRes_3 = vdm_PP_uTRA_uPAT_trv_uMultSetBind((Generic) vdm_PP_uTRA_uPAT_mbinds);
  }
  if (!succ_4) {
    succ_4 = true;
    if (vdm_PP_uTRA_uPAT_mbinds.IsRecord() && vdm_AS_MultTypeBind == ((Record) vdm_PP_uTRA_uPAT_mbinds).GetTag()) {
      Sequence e_l_10;
      for (int i_11 = 1; i_11 <= ((Record) vdm_PP_uTRA_uPAT_mbinds).Length(); i_11++) 
        e_l_10.ImpAppend(((Record) vdm_PP_uTRA_uPAT_mbinds).GetField(i_11));
      if (succ_4 = 3 == (Int) e_l_10.Length()) {}
    }
    else 
      succ_4 = false;
    if (succ_4) 
      varRes_3 = vdm_PP_uTRA_uPAT_trv_uMultTypeBind((Generic) vdm_PP_uTRA_uPAT_mbinds);
  }
  if (!succ_4) 
    RunTime("No \'others\' branch in CasesExpr");
  return (Generic) varRes_3;
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uMultSetBind

TYPE_PP_uTAR_uPAT_MultSetBind vdm_PP_uTRA_uPAT_trv_uMultSetBind(const TYPE_AS_MultSetBind &var_1_1) {
  Int vdm_PP_uTRA_uPAT_cid;
  Record vdm_PP_uTRA_uPAT_expr;
  Sequence vdm_PP_uTRA_uPAT_pats;
  bool succ_2 = true;
  if (var_1_1.IsRecord() && vdm_AS_MultSetBind == var_1_1.GetTag()) {
    Sequence e_l_23;
    for (int i_24 = 1; i_24 <= var_1_1.Length(); i_24++) 
      e_l_23.ImpAppend(var_1_1.GetField(i_24));
    if (succ_2 = 3 == (Int) e_l_23.Length()) {
      vdm_PP_uTRA_uPAT_pats = (Generic) e_l_23.Hd();
      vdm_PP_uTRA_uPAT_expr = (Generic) e_l_23[2];
      vdm_PP_uTRA_uPAT_cid = (Generic) e_l_23[3];
    }
  }
  else 
    succ_2 = false;
  if (!succ_2) 
    RunTime("Pattern Match in Function Apply in function : trv_uMultSetBind failed");
  Sequence varRes_3;
  Sequence par_4;
  {
    Sequence res_l_5;
    Set resBind_s_7;
    Set riseq_11;
    int max_12 = (Int) vdm_PP_uTRA_uPAT_pats.Length();
    for (int i_13 = 1; i_13 <= max_12; i_13++) 
      riseq_11.Insert((Int) i_13);
    resBind_s_7 = riseq_11;
    Sequence bind_l_6;
    if ((Int) resBind_s_7.Card() != (Int) 0) 
      bind_l_6 = Sort(resBind_s_7);
    bool succ_8 = true;
    Int vdm_PP_uTRA_uPAT_i;
    Generic tmpe_19;
    for (int i_18 = bind_l_6.First(tmpe_19); i_18; i_18 = bind_l_6.Next(tmpe_19)) {
      Int e_9 = tmpe_19;
      vdm_PP_uTRA_uPAT_i = e_9;
      if (succ_8) 
        res_l_5.ImpAppend(vdm_PP_uTRA_uPAT_trv_uPattern((Generic) (Record) vdm_PP_uTRA_uPAT_pats[vdm_PP_uTRA_uPAT_i.GetValue()]));
    }
    par_4 = res_l_5;
  }
  varRes_3 = vdm_PP_uTAR_uPAT_tar_uMultSetBind((Generic) par_4, (Generic) vdm_PP_uTRA_uEXPR_trv_uExpr((Generic) vdm_PP_uTRA_uPAT_expr), (Generic) vdm_PP_uTRA_uPAT_cid);
  return (Generic) varRes_3;
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uMultTypeBind

TYPE_PP_uTAR_uPAT_MultTypeBind vdm_PP_uTRA_uPAT_trv_uMultTypeBind(const TYPE_AS_MultTypeBind &var_1_1) {
  Int vdm_PP_uTRA_uPAT_cid;
  Sequence vdm_PP_uTRA_uPAT_pats;
  Record vdm_PP_uTRA_uPAT_tp;
  bool succ_2 = true;
  if (var_1_1.IsRecord() && vdm_AS_MultTypeBind == var_1_1.GetTag()) {
    Sequence e_l_24;
    for (int i_25 = 1; i_25 <= var_1_1.Length(); i_25++) 
      e_l_24.ImpAppend(var_1_1.GetField(i_25));
    if (succ_2 = 3 == (Int) e_l_24.Length()) {
      vdm_PP_uTRA_uPAT_pats = (Generic) e_l_24.Hd();
      vdm_PP_uTRA_uPAT_tp = (Generic) e_l_24[2];
      vdm_PP_uTRA_uPAT_cid = (Generic) e_l_24[3];
    }
  }
  else 
    succ_2 = false;
  if (!succ_2) 
    RunTime("Pattern Match in Function Apply in function : trv_uMultTypeBind failed");
  Sequence varRes_3;
  Sequence par_4;
  {
    Sequence res_l_5;
    Set resBind_s_7;
    Set riseq_11;
    int max_12 = (Int) vdm_PP_uTRA_uPAT_pats.Length();
    for (int i_13 = 1; i_13 <= max_12; i_13++) 
      riseq_11.Insert((Int) i_13);
    resBind_s_7 = riseq_11;
    Sequence bind_l_6;
    if ((Int) resBind_s_7.Card() != (Int) 0) 
      bind_l_6 = Sort(resBind_s_7);
    bool succ_8 = true;
    Int vdm_PP_uTRA_uPAT_i;
    Generic tmpe_19;
    for (int i_18 = bind_l_6.First(tmpe_19); i_18; i_18 = bind_l_6.Next(tmpe_19)) {
      Int e_9 = tmpe_19;
      vdm_PP_uTRA_uPAT_i = e_9;
      if (succ_8) 
        res_l_5.ImpAppend(vdm_PP_uTRA_uPAT_trv_uPattern((Generic) (Record) vdm_PP_uTRA_uPAT_pats[vdm_PP_uTRA_uPAT_i.GetValue()]));
    }
    par_4 = res_l_5;
  }
  varRes_3 = vdm_PP_uTAR_uPAT_tar_uMultTypeBind((Generic) par_4, (Generic) vdm_PP_uTRA_uPAT_tp, (Generic) vdm_PP_uTRA_uTYPE_trv_uType((Generic) vdm_PP_uTRA_uPAT_tp), (Generic) vdm_PP_uTRA_uPAT_cid);
  return (Generic) varRes_3;
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uPattern

TYPE_PP_uTAR_uPAT_Pattern vdm_PP_uTRA_uPAT_trv_uPattern(const TYPE_AS_Pattern &vdm_PP_uTRA_uPAT_pat) {
  Generic varRes_3;
  bool succ_4 = true;
  {
    succ_4 = true;
    if (vdm_PP_uTRA_uPAT_pat.IsRecord() && vdm_AS_PatternName == ((Record) vdm_PP_uTRA_uPAT_pat).GetTag()) {
      Sequence e_l_7;
      for (int i_8 = 1; i_8 <= ((Record) vdm_PP_uTRA_uPAT_pat).Length(); i_8++) 
        e_l_7.ImpAppend(((Record) vdm_PP_uTRA_uPAT_pat).GetField(i_8));
      if (succ_4 = 2 == (Int) e_l_7.Length()) {}
    }
    else 
      succ_4 = false;
    if (succ_4) 
      varRes_3 = vdm_PP_uTRA_uPAT_trv_uPatternName((Generic) vdm_PP_uTRA_uPAT_pat);
  }
  if (!succ_4) {
    succ_4 = true;
    if (vdm_PP_uTRA_uPAT_pat.IsRecord() && vdm_AS_MatchVal == ((Record) vdm_PP_uTRA_uPAT_pat).GetTag()) {
      Sequence e_l_10;
      for (int i_11 = 1; i_11 <= ((Record) vdm_PP_uTRA_uPAT_pat).Length(); i_11++) 
        e_l_10.ImpAppend(((Record) vdm_PP_uTRA_uPAT_pat).GetField(i_11));
      if (succ_4 = 2 == (Int) e_l_10.Length()) {}
    }
    else 
      succ_4 = false;
    if (succ_4) 
      varRes_3 = vdm_PP_uTRA_uPAT_trv_uMatchVal((Generic) vdm_PP_uTRA_uPAT_pat);
  }
  if (!succ_4) {
    succ_4 = true;
    if (vdm_PP_uTRA_uPAT_pat.IsRecord() && vdm_AS_SetEnumPattern == ((Record) vdm_PP_uTRA_uPAT_pat).GetTag()) {
      Sequence e_l_13;
      for (int i_14 = 1; i_14 <= ((Record) vdm_PP_uTRA_uPAT_pat).Length(); i_14++) 
        e_l_13.ImpAppend(((Record) vdm_PP_uTRA_uPAT_pat).GetField(i_14));
      if (succ_4 = 2 == (Int) e_l_13.Length()) {}
    }
    else 
      succ_4 = false;
    if (succ_4) 
      varRes_3 = vdm_PP_uTRA_uPAT_trv_uSetEnumPattern((Generic) vdm_PP_uTRA_uPAT_pat);
  }
  if (!succ_4) {
    succ_4 = true;
    if (vdm_PP_uTRA_uPAT_pat.IsRecord() && vdm_AS_SetUnionPattern == ((Record) vdm_PP_uTRA_uPAT_pat).GetTag()) {
      Sequence e_l_16;
      for (int i_17 = 1; i_17 <= ((Record) vdm_PP_uTRA_uPAT_pat).Length(); i_17++) 
        e_l_16.ImpAppend(((Record) vdm_PP_uTRA_uPAT_pat).GetField(i_17));
      if (succ_4 = 3 == (Int) e_l_16.Length()) {}
    }
    else 
      succ_4 = false;
    if (succ_4) 
      varRes_3 = vdm_PP_uTRA_uPAT_trv_uSetUnionPattern((Generic) vdm_PP_uTRA_uPAT_pat);
  }
  if (!succ_4) {
    succ_4 = true;
    if (vdm_PP_uTRA_uPAT_pat.IsRecord() && vdm_AS_SeqEnumPattern == ((Record) vdm_PP_uTRA_uPAT_pat).GetTag()) {
      Sequence e_l_19;
      for (int i_20 = 1; i_20 <= ((Record) vdm_PP_uTRA_uPAT_pat).Length(); i_20++) 
        e_l_19.ImpAppend(((Record) vdm_PP_uTRA_uPAT_pat).GetField(i_20));
      if (succ_4 = 2 == (Int) e_l_19.Length()) {}
    }
    else 
      succ_4 = false;
    if (succ_4) 
      varRes_3 = vdm_PP_uTRA_uPAT_trv_uSeqEnumPattern((Generic) vdm_PP_uTRA_uPAT_pat);
  }
  if (!succ_4) {
    succ_4 = true;
    if (vdm_PP_uTRA_uPAT_pat.IsRecord() && vdm_AS_SeqConcPattern == ((Record) vdm_PP_uTRA_uPAT_pat).GetTag()) {
      Sequence e_l_22;
      for (int i_23 = 1; i_23 <= ((Record) vdm_PP_uTRA_uPAT_pat).Length(); i_23++) 
        e_l_22.ImpAppend(((Record) vdm_PP_uTRA_uPAT_pat).GetField(i_23));
      if (succ_4 = 3 == (Int) e_l_22.Length()) {}
    }
    else 
      succ_4 = false;
    if (succ_4) 
      varRes_3 = vdm_PP_uTRA_uPAT_trv_uSeqConcPattern((Generic) vdm_PP_uTRA_uPAT_pat);
  }
  if (!succ_4) {
    succ_4 = true;
    if (vdm_PP_uTRA_uPAT_pat.IsRecord() && vdm_AS_RecordPattern == ((Record) vdm_PP_uTRA_uPAT_pat).GetTag()) {
      Sequence e_l_25;
      for (int i_26 = 1; i_26 <= ((Record) vdm_PP_uTRA_uPAT_pat).Length(); i_26++) 
        e_l_25.ImpAppend(((Record) vdm_PP_uTRA_uPAT_pat).GetField(i_26));
      if (succ_4 = 3 == (Int) e_l_25.Length()) {}
    }
    else 
      succ_4 = false;
    if (succ_4) 
      varRes_3 = vdm_PP_uTRA_uPAT_trv_uRecordPattern((Generic) vdm_PP_uTRA_uPAT_pat);
  }
  if (!succ_4) {
    succ_4 = true;
    if (vdm_PP_uTRA_uPAT_pat.IsRecord() && vdm_AS_TuplePattern == ((Record) vdm_PP_uTRA_uPAT_pat).GetTag()) {
      Sequence e_l_28;
      for (int i_29 = 1; i_29 <= ((Record) vdm_PP_uTRA_uPAT_pat).Length(); i_29++) 
        e_l_28.ImpAppend(((Record) vdm_PP_uTRA_uPAT_pat).GetField(i_29));
      if (succ_4 = 2 == (Int) e_l_28.Length()) {}
    }
    else 
      succ_4 = false;
    if (succ_4) 
      varRes_3 = vdm_PP_uTRA_uPAT_trv_uTuplePattern((Generic) vdm_PP_uTRA_uPAT_pat);
  }
  if (!succ_4) 
    RunTime("Can not evaluate an undefined expression");
  return (Generic) varRes_3;
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uPatternBind

TYPE_PP_uTAR_uPAT_PatternBind vdm_PP_uTRA_uPAT_trv_uPatternBind(const TYPE_AS_PatternBind &vdm_PP_uTRA_uPAT_patbind) {
  Sequence varRes_3;
  bool succ_4 = true;
  {
    succ_4 = true;
    if (vdm_PP_uTRA_uPAT_patbind.IsRecord() && vdm_AS_SetBind == ((Record) vdm_PP_uTRA_uPAT_patbind).GetTag()) {
      Sequence e_l_7;
      for (int i_8 = 1; i_8 <= ((Record) vdm_PP_uTRA_uPAT_patbind).Length(); i_8++) 
        e_l_7.ImpAppend(((Record) vdm_PP_uTRA_uPAT_patbind).GetField(i_8));
      if (succ_4 = 3 == (Int) e_l_7.Length()) {}
    }
    else 
      succ_4 = false;
    if (succ_4) 
      varRes_3 = vdm_PP_uTRA_uPAT_trv_uSetBind((Generic) vdm_PP_uTRA_uPAT_patbind);
  }
  if (!succ_4) {
    succ_4 = true;
    if (vdm_PP_uTRA_uPAT_patbind.IsRecord() && vdm_AS_TypeBind == ((Record) vdm_PP_uTRA_uPAT_patbind).GetTag()) {
      Sequence e_l_10;
      for (int i_11 = 1; i_11 <= ((Record) vdm_PP_uTRA_uPAT_patbind).Length(); i_11++) 
        e_l_10.ImpAppend(((Record) vdm_PP_uTRA_uPAT_patbind).GetField(i_11));
      if (succ_4 = 3 == (Int) e_l_10.Length()) {}
    }
    else 
      succ_4 = false;
    if (succ_4) 
      varRes_3 = vdm_PP_uTRA_uPAT_trv_uTypeBind((Generic) vdm_PP_uTRA_uPAT_patbind);
  }
  if (!succ_4) 
    varRes_3 = vdm_PP_uTRA_uPAT_trv_uPattern((Generic) vdm_PP_uTRA_uPAT_patbind);
  return (Generic) varRes_3;
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uPatternName

TYPE_PP_uTAR_uPAT_PatternName vdm_PP_uTRA_uPAT_trv_uPatternName(const TYPE_AS_PatternName &var_1_1) {
  Int vdm_PP_uTRA_uPAT_cid;
  Generic vdm_PP_uTRA_uPAT_nm;
  bool succ_2 = true;
  if (var_1_1.IsRecord() && vdm_AS_PatternName == var_1_1.GetTag()) {
    Sequence e_l_13;
    for (int i_14 = 1; i_14 <= var_1_1.Length(); i_14++) 
      e_l_13.ImpAppend(var_1_1.GetField(i_14));
    if (succ_2 = 2 == (Int) e_l_13.Length()) {
      vdm_PP_uTRA_uPAT_nm = (Generic) e_l_13.Hd();
      vdm_PP_uTRA_uPAT_cid = (Generic) e_l_13[2];
    }
  }
  else 
    succ_2 = false;
  if (!succ_2) 
    RunTime("Pattern Match in Function Apply in function : trv_uPatternName failed");
  Sequence varRes_3;
  {
    Generic vdm_PP_uTRA_uPAT_trv_unm;
    if (((Bool) (vdm_PP_uTRA_uPAT_nm == Nil())).GetValue()) 
      vdm_PP_uTRA_uPAT_trv_unm = Nil();
    else 
      vdm_PP_uTRA_uPAT_trv_unm = vdm_PP_uTRA_uEXPR_trv_uNameExpr((Generic) vdm_PP_uTRA_uPAT_nm);
    varRes_3 = vdm_PP_uTAR_uPAT_tar_uPatternName((Generic) vdm_PP_uTRA_uPAT_trv_unm, (Generic) vdm_PP_uTRA_uPAT_cid);
  }
  return (Generic) varRes_3;
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uRecordPattern

TYPE_PP_uTAR_uPAT_RecordPattern vdm_PP_uTRA_uPAT_trv_uRecordPattern(const TYPE_AS_RecordPattern &var_1_1) {
  Int vdm_PP_uTRA_uPAT_cid;
  Sequence vdm_PP_uTRA_uPAT_flds;
  Record vdm_PP_uTRA_uPAT_nm(vdm_AS_Name, length_AS_Name);
  bool succ_2 = true;
  if (var_1_1.IsRecord() && vdm_AS_RecordPattern == var_1_1.GetTag()) {
    Sequence e_l_23;
    for (int i_24 = 1; i_24 <= var_1_1.Length(); i_24++) 
      e_l_23.ImpAppend(var_1_1.GetField(i_24));
    if (succ_2 = 3 == (Int) e_l_23.Length()) {
      vdm_PP_uTRA_uPAT_nm = (Generic) e_l_23.Hd();
      vdm_PP_uTRA_uPAT_flds = (Generic) e_l_23[2];
      vdm_PP_uTRA_uPAT_cid = (Generic) e_l_23[3];
    }
  }
  else 
    succ_2 = false;
  if (!succ_2) 
    RunTime("Pattern Match in Function Apply in function : trv_uRecordPattern failed");
  Sequence varRes_3;
  Sequence par_6;
  {
    Sequence res_l_7;
    Set resBind_s_9;
    Set riseq_13;
    int max_14 = (Int) vdm_PP_uTRA_uPAT_flds.Length();
    for (int i_15 = 1; i_15 <= max_14; i_15++) 
      riseq_13.Insert((Int) i_15);
    resBind_s_9 = riseq_13;
    Sequence bind_l_8;
    if ((Int) resBind_s_9.Card() != (Int) 0) 
      bind_l_8 = Sort(resBind_s_9);
    bool succ_10 = true;
    Int vdm_PP_uTRA_uPAT_i;
    Generic tmpe_21;
    for (int i_20 = bind_l_8.First(tmpe_21); i_20; i_20 = bind_l_8.Next(tmpe_21)) {
      Int e_11 = tmpe_21;
      vdm_PP_uTRA_uPAT_i = e_11;
      if (succ_10) 
        res_l_7.ImpAppend(vdm_PP_uTRA_uPAT_trv_uPattern((Generic) (Record) vdm_PP_uTRA_uPAT_flds[vdm_PP_uTRA_uPAT_i.GetValue()]));
    }
    par_6 = res_l_7;
  }
  varRes_3 = vdm_PP_uTAR_uPAT_tar_uRecordPattern((Generic) vdm_PP_uTRA_uEXPR_trv_uNameName((Generic) vdm_PP_uTRA_uPAT_nm), (Generic) par_6, (Generic) vdm_PP_uTRA_uPAT_cid);
  return (Generic) varRes_3;
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uSeqConcPattern

TYPE_PP_uTAR_uPAT_SeqConcPattern vdm_PP_uTRA_uPAT_trv_uSeqConcPattern(const TYPE_AS_SeqConcPattern &var_1_1) {
  Int vdm_PP_uTRA_uPAT_cid;
  Record vdm_PP_uTRA_uPAT_lp;
  Record vdm_PP_uTRA_uPAT_rp;
  bool succ_2 = true;
  if (var_1_1.IsRecord() && vdm_AS_SeqConcPattern == var_1_1.GetTag()) {
    Sequence e_l_9;
    for (int i_10 = 1; i_10 <= var_1_1.Length(); i_10++) 
      e_l_9.ImpAppend(var_1_1.GetField(i_10));
    if (succ_2 = 3 == (Int) e_l_9.Length()) {
      vdm_PP_uTRA_uPAT_lp = (Generic) e_l_9.Hd();
      vdm_PP_uTRA_uPAT_rp = (Generic) e_l_9[2];
      vdm_PP_uTRA_uPAT_cid = (Generic) e_l_9[3];
    }
  }
  else 
    succ_2 = false;
  if (!succ_2) 
    RunTime("Pattern Match in Function Apply in function : trv_uSeqConcPattern failed");
  return (Generic) vdm_PP_uTAR_uPAT_tar_uSeqConcPattern((Generic) vdm_PP_uTRA_uPAT_trv_uPattern((Generic) vdm_PP_uTRA_uPAT_lp), (Generic) vdm_PP_uTRA_uPAT_trv_uPattern((Generic) vdm_PP_uTRA_uPAT_rp), (Generic) vdm_PP_uTRA_uPAT_cid);
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uSeqEnumPattern

TYPE_PP_uTAR_uPAT_SeqEnumPattern vdm_PP_uTRA_uPAT_trv_uSeqEnumPattern(const TYPE_AS_SeqEnumPattern &var_1_1) {
  Int vdm_PP_uTRA_uPAT_cid;
  Sequence vdm_PP_uTRA_uPAT_els;
  bool succ_2 = true;
  if (var_1_1.IsRecord() && vdm_AS_SeqEnumPattern == var_1_1.GetTag()) {
    Sequence e_l_21;
    for (int i_22 = 1; i_22 <= var_1_1.Length(); i_22++) 
      e_l_21.ImpAppend(var_1_1.GetField(i_22));
    if (succ_2 = 2 == (Int) e_l_21.Length()) {
      vdm_PP_uTRA_uPAT_els = (Generic) e_l_21.Hd();
      vdm_PP_uTRA_uPAT_cid = (Generic) e_l_21[2];
    }
  }
  else 
    succ_2 = false;
  if (!succ_2) 
    RunTime("Pattern Match in Function Apply in function : trv_uSeqEnumPattern failed");
  Sequence varRes_3;
  Sequence par_4;
  {
    Sequence res_l_5;
    Set resBind_s_7;
    Set riseq_11;
    int max_12 = (Int) vdm_PP_uTRA_uPAT_els.Length();
    for (int i_13 = 1; i_13 <= max_12; i_13++) 
      riseq_11.Insert((Int) i_13);
    resBind_s_7 = riseq_11;
    Sequence bind_l_6;
    if ((Int) resBind_s_7.Card() != (Int) 0) 
      bind_l_6 = Sort(resBind_s_7);
    bool succ_8 = true;
    Int vdm_PP_uTRA_uPAT_i;
    Generic tmpe_19;
    for (int i_18 = bind_l_6.First(tmpe_19); i_18; i_18 = bind_l_6.Next(tmpe_19)) {
      Int e_9 = tmpe_19;
      vdm_PP_uTRA_uPAT_i = e_9;
      if (succ_8) 
        res_l_5.ImpAppend(vdm_PP_uTRA_uPAT_trv_uPattern((Generic) (Record) vdm_PP_uTRA_uPAT_els[vdm_PP_uTRA_uPAT_i.GetValue()]));
    }
    par_4 = res_l_5;
  }
  varRes_3 = vdm_PP_uTAR_uPAT_tar_uSeqEnumPattern((Generic) par_4, (Generic) vdm_PP_uTRA_uPAT_cid);
  return (Generic) varRes_3;
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uSetBind

TYPE_PP_uTAR_uPAT_SetBind vdm_PP_uTRA_uPAT_trv_uSetBind(const TYPE_AS_SetBind &var_1_1) {
  Int vdm_PP_uTRA_uPAT_cid;
  Record vdm_PP_uTRA_uPAT_expr;
  Record vdm_PP_uTRA_uPAT_pat;
  bool succ_2 = true;
  if (var_1_1.IsRecord() && vdm_AS_SetBind == var_1_1.GetTag()) {
    Sequence e_l_9;
    for (int i_10 = 1; i_10 <= var_1_1.Length(); i_10++) 
      e_l_9.ImpAppend(var_1_1.GetField(i_10));
    if (succ_2 = 3 == (Int) e_l_9.Length()) {
      vdm_PP_uTRA_uPAT_pat = (Generic) e_l_9.Hd();
      vdm_PP_uTRA_uPAT_expr = (Generic) e_l_9[2];
      vdm_PP_uTRA_uPAT_cid = (Generic) e_l_9[3];
    }
  }
  else 
    succ_2 = false;
  if (!succ_2) 
    RunTime("Pattern Match in Function Apply in function : trv_uSetBind failed");
  return (Generic) vdm_PP_uTAR_uPAT_tar_uSetBind((Generic) vdm_PP_uTRA_uPAT_trv_uPattern((Generic) vdm_PP_uTRA_uPAT_pat), (Generic) vdm_PP_uTRA_uEXPR_trv_uExpr((Generic) vdm_PP_uTRA_uPAT_expr), (Generic) vdm_PP_uTRA_uPAT_cid);
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uSetEnumPattern

TYPE_PP_uTAR_uPAT_SetEnumPattern vdm_PP_uTRA_uPAT_trv_uSetEnumPattern(const TYPE_AS_SetEnumPattern &var_1_1) {
  Int vdm_PP_uTRA_uPAT_cid;
  Sequence vdm_PP_uTRA_uPAT_els;
  bool succ_2 = true;
  if (var_1_1.IsRecord() && vdm_AS_SetEnumPattern == var_1_1.GetTag()) {
    Sequence e_l_21;
    for (int i_22 = 1; i_22 <= var_1_1.Length(); i_22++) 
      e_l_21.ImpAppend(var_1_1.GetField(i_22));
    if (succ_2 = 2 == (Int) e_l_21.Length()) {
      vdm_PP_uTRA_uPAT_els = (Generic) e_l_21.Hd();
      vdm_PP_uTRA_uPAT_cid = (Generic) e_l_21[2];
    }
  }
  else 
    succ_2 = false;
  if (!succ_2) 
    RunTime("Pattern Match in Function Apply in function : trv_uSetEnumPattern failed");
  Sequence varRes_3;
  Sequence par_4;
  {
    Sequence res_l_5;
    Set resBind_s_7;
    Set riseq_11;
    int max_12 = (Int) vdm_PP_uTRA_uPAT_els.Length();
    for (int i_13 = 1; i_13 <= max_12; i_13++) 
      riseq_11.Insert((Int) i_13);
    resBind_s_7 = riseq_11;
    Sequence bind_l_6;
    if ((Int) resBind_s_7.Card() != (Int) 0) 
      bind_l_6 = Sort(resBind_s_7);
    bool succ_8 = true;
    Int vdm_PP_uTRA_uPAT_i;
    Generic tmpe_19;
    for (int i_18 = bind_l_6.First(tmpe_19); i_18; i_18 = bind_l_6.Next(tmpe_19)) {
      Int e_9 = tmpe_19;
      vdm_PP_uTRA_uPAT_i = e_9;
      if (succ_8) 
        res_l_5.ImpAppend(vdm_PP_uTRA_uPAT_trv_uPattern((Generic) (Record) vdm_PP_uTRA_uPAT_els[vdm_PP_uTRA_uPAT_i.GetValue()]));
    }
    par_4 = res_l_5;
  }
  varRes_3 = vdm_PP_uTAR_uPAT_tar_uSetEnumPattern((Generic) par_4, (Generic) vdm_PP_uTRA_uPAT_cid);
  return (Generic) varRes_3;
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uSetUnionPattern

TYPE_PP_uTAR_uPAT_SetUnionPattern vdm_PP_uTRA_uPAT_trv_uSetUnionPattern(const TYPE_AS_SetUnionPattern &var_1_1) {
  Int vdm_PP_uTRA_uPAT_cid;
  Record vdm_PP_uTRA_uPAT_lp;
  Record vdm_PP_uTRA_uPAT_rp;
  bool succ_2 = true;
  if (var_1_1.IsRecord() && vdm_AS_SetUnionPattern == var_1_1.GetTag()) {
    Sequence e_l_9;
    for (int i_10 = 1; i_10 <= var_1_1.Length(); i_10++) 
      e_l_9.ImpAppend(var_1_1.GetField(i_10));
    if (succ_2 = 3 == (Int) e_l_9.Length()) {
      vdm_PP_uTRA_uPAT_lp = (Generic) e_l_9.Hd();
      vdm_PP_uTRA_uPAT_rp = (Generic) e_l_9[2];
      vdm_PP_uTRA_uPAT_cid = (Generic) e_l_9[3];
    }
  }
  else 
    succ_2 = false;
  if (!succ_2) 
    RunTime("Pattern Match in Function Apply in function : trv_uSetUnionPattern failed");
  return (Generic) vdm_PP_uTAR_uPAT_tar_uSetUnionPattern((Generic) vdm_PP_uTRA_uPAT_trv_uPattern((Generic) vdm_PP_uTRA_uPAT_lp), (Generic) vdm_PP_uTRA_uPAT_trv_uPattern((Generic) vdm_PP_uTRA_uPAT_rp), (Generic) vdm_PP_uTRA_uPAT_cid);
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uTuplePattern

TYPE_PP_uTAR_uPAT_TuplePattern vdm_PP_uTRA_uPAT_trv_uTuplePattern(const TYPE_AS_TuplePattern &var_1_1) {
  Int vdm_PP_uTRA_uPAT_cid;
  Sequence vdm_PP_uTRA_uPAT_flds;
  bool succ_2 = true;
  if (var_1_1.IsRecord() && vdm_AS_TuplePattern == var_1_1.GetTag()) {
    Sequence e_l_21;
    for (int i_22 = 1; i_22 <= var_1_1.Length(); i_22++) 
      e_l_21.ImpAppend(var_1_1.GetField(i_22));
    if (succ_2 = 2 == (Int) e_l_21.Length()) {
      vdm_PP_uTRA_uPAT_flds = (Generic) e_l_21.Hd();
      vdm_PP_uTRA_uPAT_cid = (Generic) e_l_21[2];
    }
  }
  else 
    succ_2 = false;
  if (!succ_2) 
    RunTime("Pattern Match in Function Apply in function : trv_uTuplePattern failed");
  Sequence varRes_3;
  Sequence par_4;
  {
    Sequence res_l_5;
    Set resBind_s_7;
    Set riseq_11;
    int max_12 = (Int) vdm_PP_uTRA_uPAT_flds.Length();
    for (int i_13 = 1; i_13 <= max_12; i_13++) 
      riseq_11.Insert((Int) i_13);
    resBind_s_7 = riseq_11;
    Sequence bind_l_6;
    if ((Int) resBind_s_7.Card() != (Int) 0) 
      bind_l_6 = Sort(resBind_s_7);
    bool succ_8 = true;
    Int vdm_PP_uTRA_uPAT_i;
    Generic tmpe_19;
    for (int i_18 = bind_l_6.First(tmpe_19); i_18; i_18 = bind_l_6.Next(tmpe_19)) {
      Int e_9 = tmpe_19;
      vdm_PP_uTRA_uPAT_i = e_9;
      if (succ_8) 
        res_l_5.ImpAppend(vdm_PP_uTRA_uPAT_trv_uPattern((Generic) (Record) vdm_PP_uTRA_uPAT_flds[vdm_PP_uTRA_uPAT_i.GetValue()]));
    }
    par_4 = res_l_5;
  }
  varRes_3 = vdm_PP_uTAR_uPAT_tar_uTuplePattern((Generic) par_4, (Generic) vdm_PP_uTRA_uPAT_cid);
  return (Generic) varRes_3;
}
#endif

#ifndef DEF_PP_uTRA_uPAT_trv_uTypeBind

TYPE_PP_uTAR_uPAT_TypeBind vdm_PP_uTRA_uPAT_trv_uTypeBind(const TYPE_AS_TypeBind &var_1_1) {
  Int vdm_PP_uTRA_uPAT_cid;
  Record vdm_PP_uTRA_uPAT_pat;
  Record vdm_PP_uTRA_uPAT_tp;
  bool succ_2 = true;
  if (var_1_1.IsRecord() && vdm_AS_TypeBind == var_1_1.GetTag()) {
    Sequence e_l_10;
    for (int i_11 = 1; i_11 <= var_1_1.Length(); i_11++) 
      e_l_10.ImpAppend(var_1_1.GetField(i_11));
    if (succ_2 = 3 == (Int) e_l_10.Length()) {
      vdm_PP_uTRA_uPAT_pat = (Generic) e_l_10.Hd();
      vdm_PP_uTRA_uPAT_tp = (Generic) e_l_10[2];
      vdm_PP_uTRA_uPAT_cid = (Generic) e_l_10[3];
    }
  }
  else 
    succ_2 = false;
  if (!succ_2) 
    RunTime("Pattern Match in Function Apply in function : trv_uTypeBind failed");
  return (Generic) vdm_PP_uTAR_uPAT_tar_uTypeBind((Generic) vdm_PP_uTRA_uPAT_trv_uPattern((Generic) vdm_PP_uTRA_uPAT_pat), (Generic) vdm_PP_uTRA_uPAT_tp, (Generic) vdm_PP_uTRA_uTYPE_trv_uType((Generic) vdm_PP_uTRA_uPAT_tp), (Generic) vdm_PP_uTRA_uPAT_cid);
}
#endif


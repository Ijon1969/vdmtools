//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at Wed 05-Nov-97 by the VDM++toC++ Code Generator
// (v6.0e - Tue 04-Nov-97)
//
// Supported compilers:
// 	g++ version 2.7.2 on SunOS4, SunOS5, Linux, HP-UX10
// 	Dec cxx version 5.5 on Alpha OSF1
// 	VC++ version 5.0 on Windows95, Windows NT
//



#include "VisualWorkSpace.h"
#include "BulletinMeteo.h"
#include "Detecteur.h"
#include "PistesRadar.h"
#include "Terrain.h"
#include "View.h"
#include "VisualDetecteur.h"
#include "VisualSegmentDePrediction.h"

vdm_VisualWorkSpace::vdm_VisualWorkSpace() { RegisterAsDerived(vdm_GetId()); }

void vdm_VisualWorkSpace::vdm_Init(const Set &vdm_obstacles_q, const ObjectRef &vdm_view_q, const ObjectRef &vdm_radar) {
  vdm_obstacles = vdm_obstacles_q;
  vdm_view = vdm_view_q;
  vdm_pistes_uradar = vdm_radar;
  ObjGet_vdm_PistesRadar(vdm_pistes_uradar)->vdm_Init(vdm_view);
  vdm_bulletin_umeteo = ObjectRef(new vdm_BulletinMeteo());
  vdm_terrain = ObjectRef(new vdm_Terrain());
  vdm_detecteur = ObjectRef(new vdm_VisualDetecteur());
  ObjGet_vdm_Detecteur(vdm_detecteur)->vdm_Init(vdm_pistes_uradar, vdm_view);
}

void vdm_VisualWorkSpace::vdm_TraiterPistesRadar() {
  Set tmpVal_2 = ObjGet_vdm_PistesRadar(vdm_pistes_uradar)->vdm_GetModeAs();
  Set vdm_modeAs;
  vdm_modeAs = tmpVal_2;
  {
    Sequence tmpVal_5;
    Set par_6;    Set var1_7;    var1_7 = Set().Insert(vdm_terrain);    par_6 = var1_7;    par_6.ImpUnion((Set) vdm_obstacles);    tmpVal_5 = vdm_OrdreDeTraitement(par_6);
    Sequence vdm_obstacles;
    vdm_obstacles = tmpVal_5;
    {
      Record vdm_modeA(vdm_MSAWTypes::vdm_ModeA, vdm_MSAWTypes::length_ModeA);
      Generic tmpe_47;
      for (int bb_46 = vdm_modeAs.First(tmpe_47); bb_46; bb_46 = vdm_modeAs.Next(tmpe_47)) {
        Record elem_11 = tmpe_47;
        vdm_modeA = elem_11;        {
          ObjectRef tmpVal_15 = ObjectRef(new vdm_VisualSegmentDePrediction());
          ObjectRef vdm_segment_ude_uprediction;
          vdm_segment_ude_uprediction = tmpVal_15;
          Map tmpVal_16 = ObjGet_vdm_PistesRadar(vdm_pistes_uradar)->vdm_GetPositions(vdm_modeA);
          Map vdm_positions;
          vdm_positions = tmpVal_16;
          if (((Bool) ((((Int) vdm_positions.Dom().Card()).GetValue()) >= (((Int) 2).GetValue()))).GetValue()) {
            ObjGet_vdm_VisualSegmentDePrediction(vdm_segment_ude_uprediction)->vdm_Set(vdm_modeA, vdm_positions, vdm_bulletin_umeteo, vdm_view);
            {
              Set iset_28;
              Set riseq_37;
              int max_38 = (Int) vdm_obstacles.Length();
              for (int i_39 = 1; i_39 <= max_38; i_39++) 
                riseq_37.Insert((Int) i_39);
              iset_28 = riseq_37;
              Int vdm_i;
              Generic tmpe_45;
              for (int bb_44 = iset_28.First(tmpe_45); bb_44; bb_44 = iset_28.Next(tmpe_45)) {
                Int elem_29 = tmpe_45;
                vdm_i = elem_29;                ObjGet_vdm_Detecteur(vdm_detecteur)->vdm_CalculeRisque(vdm_segment_ude_uprediction, (ObjectRef) vdm_obstacles[vdm_i.GetValue()]);
              }
            }
          }
        }
      }
    }
  }
}

//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at Thu 25-Sep-97 by the VDM++toC++ Code Generator
// (v6.0 - Thu 25-Sep-97)
//
// Supported compiler: g++ version 2.7.2
//



#include "Quadrilateral.h"
#include "vdm_Quadrilateral_prelim.cc"

vdm_Quadrilateral::vdm_Quadrilateral() {
  RegisterAsDerived(vdm_GetId());
  vdm_position = vdm_NullVector;
  {
    vdm_v1 = vdm_NullVector;
    vdm_v2 = vdm_NullVector;
    vdm_v3 = vdm_NullVector;
    vdm_v4 = vdm_NullVector;
  }
}

void vdm_Quadrilateral::vdm_Move(Tuple vdm_p1, Tuple vdm_p2) {
  Record rhs_1(vdm_Vector::vdm_vector, vdm_Vector::length_vector);
  Record par_3(vdm_Vector::vdm_vector, vdm_Vector::length_vector);
  par_3 = Record(vdm_vector, length_vector);
  par_3.SetField(1, vdm_p1);
  par_3.SetField(2, vdm_p2);
  rhs_1 = vdm_add(vdm_position, par_3);
  vdm_position = rhs_1;
}

void vdm_Quadrilateral::vdm_SetShape(Tuple vdm_p1, Tuple vdm_p2, Tuple vdm_p3, Tuple vdm_p4) {
  Record rhs_1(vdm_Vector::vdm_vector, vdm_Vector::length_vector);
  rhs_1 = Record(vdm_vector, length_vector);
  rhs_1.SetField(1, vdm_p1);
  rhs_1.SetField(2, vdm_p2);
  vdm_v1 = rhs_1;
  Record rhs_4(vdm_Vector::vdm_vector, vdm_Vector::length_vector);
  rhs_4 = Record(vdm_vector, length_vector);
  rhs_4.SetField(1, vdm_p2);
  rhs_4.SetField(2, vdm_p3);
  vdm_v2 = rhs_4;
  Record rhs_7(vdm_Vector::vdm_vector, vdm_Vector::length_vector);
  rhs_7 = Record(vdm_vector, length_vector);
  rhs_7.SetField(1, vdm_p3);
  rhs_7.SetField(2, vdm_p4);
  vdm_v3 = rhs_7;
  Record rhs_10(vdm_Vector::vdm_vector, vdm_Vector::length_vector);
  rhs_10 = Record(vdm_vector, length_vector);
  rhs_10.SetField(1, vdm_p4);
  rhs_10.SetField(2, vdm_p1);
  vdm_v4 = rhs_10;
}

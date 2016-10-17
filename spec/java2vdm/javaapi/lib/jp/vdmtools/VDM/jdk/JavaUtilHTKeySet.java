//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at Tue 30-Oct-2001 by the VDM++ JAVA Code Generator
// (v6.7.19 - Mon 29-Oct-2001)
//
// Supported compilers:
// jdk1.3
//

// ***** VDMTOOLS START Name=HeaderComment KEEP=NO

// ***** VDMTOOLS END Name=HeaderComment

// ***** VDMTOOLS START Name=package KEEP=NO
package jp.vdmtools.VDM.jdk;

// ***** VDMTOOLS END Name=package


// ***** VDMTOOLS START Name=imports KEEP=NO

import jp.vdmtools.VDM.CGException;
import jp.vdmtools.VDM.UTIL;

// ***** VDMTOOLS END Name=imports


public abstract class JavaUtilHTKeySet extends JavaUtilAbstractSet {

// ***** VDMTOOLS START Name=vdmComp KEEP=NO
    static UTIL.VDMCompare vdmComp = new UTIL.VDMCompare();
// ***** VDMTOOLS END Name=vdmComp

// ***** VDMTOOLS START Name=ht KEEP=NO
    private JavaUtilHashtable ht = null;
// ***** VDMTOOLS END Name=ht


// ***** VDMTOOLS START Name=JavaUtilHTKeySet KEEP=NO
    public JavaUtilHTKeySet() throws CGException {
    }
// ***** VDMTOOLS END Name=JavaUtilHTKeySet


// ***** VDMTOOLS START Name=JavaUtilHTKeySet KEEP=NO
    public JavaUtilHTKeySet(final JavaUtilHashtable ht_1) throws CGException {
        this();
        ((JavaUtilHTKeySet) this).ht = (JavaUtilHashtable) UTIL.clone(ht_1);
    }
// ***** VDMTOOLS END Name=JavaUtilHTKeySet


// ***** VDMTOOLS START Name=iterator KEEP=NO
    public JavaUtilIterator iterator() throws CGException {
        JavaUtilIterator rexpr_1 = null;
        rexpr_1 = (JavaUtilIterator) ht.getIterator(new Integer(0));
        return (JavaUtilIterator) rexpr_1;
    }
// ***** VDMTOOLS END Name=iterator


// ***** VDMTOOLS START Name=size KEEP=NO
    public Integer size() throws CGException {
        Integer rexpr_1 = null;
        rexpr_1 = ht.count;
        return rexpr_1;
    }
// ***** VDMTOOLS END Name=size


// ***** VDMTOOLS START Name=contains KEEP=NO
    public Boolean contains(final JavaLangObject value_u_u) throws CGException {
        Boolean rexpr_2 = null;
        rexpr_2 = ht.containsKey((JavaLangObject) value_u_u);
        return rexpr_2;
    }
// ***** VDMTOOLS END Name=contains


// ***** VDMTOOLS START Name=remove KEEP=NO
    public Boolean remove(final JavaLangObject key) throws CGException {
        Boolean rexpr_2 = null;
        Boolean unArg_3 = null;
        JavaLangObject obj_4 = null;
        obj_4 = (JavaLangObject) ht.remove((JavaLangObject) key);
        unArg_3 = obj_4.IsNil();
        rexpr_2 = new Boolean(!unArg_3.booleanValue());
        return rexpr_2;
    }
// ***** VDMTOOLS END Name=remove


// ***** VDMTOOLS START Name=clear KEEP=NO
    public void clear() throws CGException {
        ht.clear();
    }
// ***** VDMTOOLS END Name=clear

}

;

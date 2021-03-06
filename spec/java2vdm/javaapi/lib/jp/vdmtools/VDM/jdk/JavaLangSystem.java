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
import jp.vdmtools.VDM.VDMSpecException;

import java.util.Vector;

// ***** VDMTOOLS END Name=imports


public class JavaLangSystem {

// ***** VDMTOOLS START Name=vdmComp KEEP=NO
    static UTIL.VDMCompare vdmComp = new UTIL.VDMCompare();
// ***** VDMTOOLS END Name=vdmComp

// ***** VDMTOOLS START Name=props KEEP=NO
    private static JavaUtilProperties props = null;
// ***** VDMTOOLS END Name=props

// ***** VDMTOOLS START Name=out KEEP=NO
    public static JavaIoPrintStream out = null;
// ***** VDMTOOLS END Name=out

// ***** VDMTOOLS START Name=err KEEP=NO
    public static JavaIoPrintStream err = null;
// ***** VDMTOOLS END Name=err




// ***** VDMTOOLS START Name=JavaLangSystem KEEP=NO
    public JavaLangSystem() throws CGException {
        ;
    }
// ***** VDMTOOLS END Name=JavaLangSystem



// ***** VDMTOOLS START Name=exit_u_u KEEP=NO
    static public void exit_u_u(final Integer status) throws CGException {
        new Double(new Integer(1).doubleValue() / new Integer(0).doubleValue());
        ;
    }
// ***** VDMTOOLS END Name=exit_u_u





// ***** VDMTOOLS START Name=getProperties KEEP=NO
    static public JavaUtilProperties getProperties() throws CGException {
        return (JavaUtilProperties) props;
    }
// ***** VDMTOOLS END Name=getProperties





// ***** VDMTOOLS START Name=currentTimeMillis KEEP=NO
    static public Integer currentTimeMillis() throws CGException {
        return new Integer(0);
    }
// ***** VDMTOOLS END Name=currentTimeMillis


// ***** VDMTOOLS START Name=getProperty KEEP=NO
    static public JavaLangString getProperty(final JavaLangString key) throws CGException {
        Boolean cond_2 = null;
        cond_2 = key.IsNil();
        if (cond_2.booleanValue())
            throw new VDMSpecException(new JavaLangNullPointerException(new JavaLangString(new String("key can\'t be null"))));
        Boolean cond_6 = null;
        cond_6 = key.equals((JavaLangObject) new JavaLangString(""));
        if (cond_6.booleanValue())
            throw new VDMSpecException(new JavaLangIllegalArgumentException(new JavaLangString(new String("key can\'t be empty"))));
        JavaLangString rexpr_12 = null;
        Object tmpGen_13 = null;
        rexpr_12 = (JavaLangString) props.getProperty(key);
        return (JavaLangString) rexpr_12;
    }
// ***** VDMTOOLS END Name=getProperty




// ***** VDMTOOLS START Name=initProperties KEEP=NO
    static private void initProperties(final JavaUtilProperties p) throws CGException {
        JavaLangObject tmpVal_3 = null;
        tmpVal_3 = (JavaLangObject) p.put((JavaLangObject) new JavaLangString(new String("user.dir")), (JavaLangObject) new JavaLangString(new String("./")));
        ;
    }
// ***** VDMTOOLS END Name=initProperties


// ***** VDMTOOLS START Name=initializeSystemClass KEEP=NO
    static {
        try {
            JavaUtilProperties p = new JavaUtilProperties();
            props = new JavaUtilProperties();
            initProperties((JavaUtilProperties) props);
        }
        catch (CGException e) {
	    e.printStackTrace(System.err);
            System.err.println("Warning: Unable to initialize JavaLangSystem");
        }

    }
// ***** VDMTOOLS END Name=initializeSystemClass


// ***** VDMTOOLS START Name=nullPrintStream KEEP=NO
    static private JavaIoPrintStream nullPrintStream() throws CGException {
        return (JavaIoPrintStream) new JavaLangObject(new quotes.NIL());
    }
// ***** VDMTOOLS END Name=nullPrintStream


// ***** VDMTOOLS START Name=getOutStream KEEP=NO
    static private JavaIoPrintStream getOutStream() throws CGException {
        JavaLangString tmpVal_2 = null;
        tmpVal_2 = (JavaLangString) new JavaLangString(new String("stdout"));
        JavaLangString s = null;
        s = (JavaLangString) tmpVal_2;
        JavaIoFileOutputStream tmpVal_4 = null;
        tmpVal_4 = (JavaIoFileOutputStream) new JavaIoFileOutputStream(s, new Boolean(true));
        JavaIoFileOutputStream f = null;
        f = (JavaIoFileOutputStream) tmpVal_4;
        JavaIoPrintStream tmpVal_7 = null;
        tmpVal_7 = (JavaIoPrintStream) new JavaIoPrintStream(f, new Boolean(true));
        JavaIoPrintStream o = null;
        o = (JavaIoPrintStream) tmpVal_7;
        return (JavaIoPrintStream) o;
    }
// ***** VDMTOOLS END Name=getOutStream


// ***** VDMTOOLS START Name=getErrStream KEEP=NO
    static private JavaIoPrintStream getErrStream() throws CGException {
        JavaLangString tmpVal_2 = null;
        tmpVal_2 = (JavaLangString) new JavaLangString(new String("stderr"));
        JavaLangString s = null;
        s = (JavaLangString) tmpVal_2;
        JavaIoFileOutputStream tmpVal_4 = null;
        tmpVal_4 = (JavaIoFileOutputStream) new JavaIoFileOutputStream(s, new Boolean(true));
        JavaIoFileOutputStream f = null;
        f = (JavaIoFileOutputStream) tmpVal_4;
        JavaIoPrintStream tmpVal_7 = null;
        tmpVal_7 = (JavaIoPrintStream) new JavaIoPrintStream(f, new Boolean(true));
        JavaIoPrintStream o = null;
        o = (JavaIoPrintStream) tmpVal_7;
        return (JavaIoPrintStream) o;
    }
// ***** VDMTOOLS END Name=getErrStream



}

;

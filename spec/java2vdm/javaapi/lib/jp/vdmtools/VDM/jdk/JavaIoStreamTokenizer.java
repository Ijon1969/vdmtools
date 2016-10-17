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

import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.io.StringReader;
import java.io.IOException;

// ***** VDMTOOLS END Name=imports


public class JavaIoStreamTokenizer extends JavaLangObject {

// ***** VDMTOOLS START Name=vdmComp KEEP=NO
    static UTIL.VDMCompare vdmComp = new UTIL.VDMCompare();
// ***** VDMTOOLS END Name=vdmComp

// ***** VDMTOOLS START Name=reader KEEP=NO
    private JavaIoReader reader = null;
// ***** VDMTOOLS END Name=reader

// ***** VDMTOOLS START Name=input_u_u KEEP=NO
    private JavaIoInputStream input_u_u = null;
// ***** VDMTOOLS END Name=input_u_u

// ***** VDMTOOLS START Name=buf KEEP=NO
    private HashMap buf = new HashMap();
// ***** VDMTOOLS END Name=buf

// ***** VDMTOOLS START Name=peekc KEEP=NO
    private Integer peekc = null;
// ***** VDMTOOLS END Name=peekc

// ***** VDMTOOLS START Name=NEED_uCHAR KEEP=NO
    private static Integer NEED_uCHAR = JavaLangInteger.MAX_uVALUE;
// ***** VDMTOOLS END Name=NEED_uCHAR

// ***** VDMTOOLS START Name=SKIP_uLF KEEP=NO
    private static Integer SKIP_uLF = new Integer(JavaLangInteger.MAX_uVALUE.intValue() - new Integer(1).intValue());
// ***** VDMTOOLS END Name=SKIP_uLF

// ***** VDMTOOLS START Name=pushedBack KEEP=NO
    private Boolean pushedBack = null;
// ***** VDMTOOLS END Name=pushedBack

// ***** VDMTOOLS START Name=forceLower KEEP=NO
    private Boolean forceLower = null;
// ***** VDMTOOLS END Name=forceLower

// ***** VDMTOOLS START Name=LINENO KEEP=NO
    private Integer LINENO = null;
// ***** VDMTOOLS END Name=LINENO

// ***** VDMTOOLS START Name=eolIsSignificantP KEEP=NO
    private Boolean eolIsSignificantP = null;
// ***** VDMTOOLS END Name=eolIsSignificantP

// ***** VDMTOOLS START Name=slashSlashCommentsP KEEP=NO
    private Boolean slashSlashCommentsP = null;
// ***** VDMTOOLS END Name=slashSlashCommentsP

// ***** VDMTOOLS START Name=slashStarCommentsP KEEP=NO
    private Boolean slashStarCommentsP = null;
// ***** VDMTOOLS END Name=slashStarCommentsP

// ***** VDMTOOLS START Name=ctype KEEP=NO
    private HashMap ctype = new HashMap();
// ***** VDMTOOLS END Name=ctype

// ***** VDMTOOLS START Name=CT_uWHITESPACE KEEP=NO
    private static Integer CT_uWHITESPACE = new Integer(1);
// ***** VDMTOOLS END Name=CT_uWHITESPACE

// ***** VDMTOOLS START Name=CT_uDIGIT KEEP=NO
    private static Integer CT_uDIGIT = new Integer(2);
// ***** VDMTOOLS END Name=CT_uDIGIT

// ***** VDMTOOLS START Name=CT_uALPHA KEEP=NO
    private static Integer CT_uALPHA = new Integer(4);
// ***** VDMTOOLS END Name=CT_uALPHA

// ***** VDMTOOLS START Name=CT_uQUOTE KEEP=NO
    private static Integer CT_uQUOTE = new Integer(8);
// ***** VDMTOOLS END Name=CT_uQUOTE

// ***** VDMTOOLS START Name=CT_uCOMMENT KEEP=NO
    private static Integer CT_uCOMMENT = new Integer(16);
// ***** VDMTOOLS END Name=CT_uCOMMENT

// ***** VDMTOOLS START Name=ttype KEEP=NO
    public Integer ttype = null;
// ***** VDMTOOLS END Name=ttype

// ***** VDMTOOLS START Name=TT_uEOF KEEP=NO
    public static Integer TT_uEOF = new Integer(-new Integer(1).intValue());
// ***** VDMTOOLS END Name=TT_uEOF

// ***** VDMTOOLS START Name=TT_uEOL KEEP=NO
    public static Integer TT_uEOL = null;
// ***** VDMTOOLS END Name=TT_uEOL

// ***** VDMTOOLS START Name=TT_uNUMBER KEEP=NO
    public static Integer TT_uNUMBER = new Integer(-new Integer(2).intValue());
// ***** VDMTOOLS END Name=TT_uNUMBER

// ***** VDMTOOLS START Name=TT_uWORD KEEP=NO
    public static Integer TT_uWORD = new Integer(-new Integer(3).intValue());
// ***** VDMTOOLS END Name=TT_uWORD

// ***** VDMTOOLS START Name=TT_uNOTHING KEEP=NO
    private static Integer TT_uNOTHING = new Integer(-new Integer(4).intValue());
// ***** VDMTOOLS END Name=TT_uNOTHING

// ***** VDMTOOLS START Name=sval KEEP=NO
    public JavaLangString sval = null;
// ***** VDMTOOLS END Name=sval

// ***** VDMTOOLS START Name=nval KEEP=NO
    public Double nval = null;
// ***** VDMTOOLS END Name=nval

    private java.io.StreamTokenizer wrappedObject;

    public JavaIoStreamTokenizer(final String chars)
    {
        wrappedObject = new java.io.StreamTokenizer(new StringReader(chars));
    }

    public JavaIoStreamTokenizer(final quotes.NIL v)
    {
        isNil = new Boolean(true);
    }

    public Integer getTtype()
    {
        return new Integer(wrappedObject.ttype);
    }

    public Double getNval()
    {
        return new Double(wrappedObject.nval);
    }

    public String getSval()
    {
        return wrappedObject.sval;
    }

    public Integer lineno()
    {
        return new Integer(wrappedObject.lineno());
    }

    public void pushBack()
    {
        wrappedObject.pushBack();
    }

    public JavaLangString toJString()
    {
        return new JavaLangString(toSeqOfChar());
    }

    public String toSeqOfChar()
    {
        return wrappedObject.toString();
    }

    public Integer nextToken() throws CGException
    {
        try {
            return new Integer(wrappedObject.nextToken());
        }
        catch (IOException e)
        {
            throw new VDMSpecException(new JavaIoIOException());
        }
    }

    public void quoteChar(Integer c)
    {
	wrappedObject.quoteChar(c.intValue());
    }

    public void commentChar(Integer c)
    {
        wrappedObject.commentChar(c.intValue());
    }

    public void wordChars(Integer low, Integer hi)
    {
        wrappedObject.wordChars(low.intValue(), hi.intValue());
    }

    public void ordinaryChar(Integer ch)
    {
        wrappedObject.ordinaryChar(ch.intValue());
    }

    public void lowerCaseMode(Boolean fl)
    {
        wrappedObject.lowerCaseMode(fl.booleanValue());
    }

    public void ordinaryChars(Integer low, Integer hi)
    {
        wrappedObject.ordinaryChars(low.intValue(), hi.intValue());
    }

    public void eolIsSignificant(Boolean fl)
    {
        wrappedObject.eolIsSignificant(fl.booleanValue());
    }

    public void slashStarComments(Boolean fl)
    {
        wrappedObject.slashStarComments(fl.booleanValue());
    }

}

;

package java.lang;

import java.util.Hashtable;
import java.util.Locale;
import java.util.Comparator;
import sun.io.ByteToCharConverter;
import sun.io.CharToByteConverter;
import java.io.CharConversionException;
import java.io.UnsupportedEncodingException;
import java.io.ObjectStreamClass;
import java.io.ObjectStreamField;
import java.lang.ref.SoftReference;

public final class String implements java.io.Serializable, Comparable {
public String(){};
public String( String value){};
//public String( char[] value){};
//public String( char[] value,  int offset,  int count){};
//public String( byte[] ascii,  int hibyte,  int offset,  int count){};
//public String( byte[] ascii,  int hibyte){};
//public String( byte[] bytes,  int offset,  int length,  String enc)throws UnsupportedEncodingException{};
//public String( byte[] bytes,  String enc)throws UnsupportedEncodingException{};
////public String( byte[] bytes,  int offset,  int length){};
//public String( byte[] bytes){};
//public String( StringBuffer buffer){};
public native int length();
public native char charAt( int index);
//public native void getChars( int srcBegin,  int srcEnd,  char[] dst,  int dstBegin);
//public native void getBytes( int srcBegin,  int srcEnd,  byte[] dst,  int dstBegin);
//public native byte[] getBytes( String enc)throws UnsupportedEncodingException;
//public native byte[] getBytes();
public native boolean equals( Object anObject);
public native boolean equalsIgnoreCase( String anotherString);
////public native int compareTo( String anotherString);
public native int compareTo( Object o);
//public static final  Comparator CASE_INSENSITIVE_ORDER;
//public native int compareToIgnoreCase( String str);
//public native boolean regionMatches( int toffset,  String other,  int ooffset,  int len);
//public native boolean regionMatches( boolean ignoreCase,  int toffset,  String other,  int ooffset,  int len);
public native boolean startsWith( String prefix,  int toffset);
public native boolean startsWith( String prefix);
public native boolean endsWith( String suffix);
public native int hashCode();
// added by JR ->
public native int indexOf( char ch);
// added by JR <-
public native int indexOf( int ch);
public native int indexOf( int ch,  int fromIndex);
//public native int lastIndexOf( int ch);
//public native int lastIndexOf( int ch,  int fromIndex);
public native int indexOf( String str);
public native int indexOf( String str,  int fromIndex);
//public native int lastIndexOf( String str);
//public native int lastIndexOf( String str,  int fromIndex);
public native String substring( int beginIndex);
public native String substring( int beginIndex,  int endIndex);
public native String concat( String str);
//public native String replace( char oldChar,  char newChar);
//public native String toLowerCase( Locale locale);
public native String toLowerCase();
//public native String toUpperCase( Locale locale);
public native String toUpperCase();
public native String trim();
public native String toString();
public native char[] toCharArray();
//public static native String valueOf( Object obj);
//public static native String valueOf( char[] data);
//public static native String valueOf( char[] data,  int offset,  int count);
//public static native String copyValueOf( char[] data,  int offset,  int count);
//public static native String copyValueOf( char[] data);
//public static native String valueOf( boolean b);
//public static native String valueOf( char c);
////public static native String valueOf( int i);
////public static native String valueOf( long l);
////public static native String valueOf( float f);
//public static native String valueOf( double d);
//public native String intern();

}

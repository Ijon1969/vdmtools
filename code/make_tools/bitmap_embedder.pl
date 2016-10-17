#! /usr/bin/perl
# Next two lines make this script work on strange OS. 
eval 'exec perl -S $0 ${1+"$@"}'
  if $running_under_some_shell;

$funcname = shift @ARGV; 
$bitmap_prefix = shift @ARGV; 

print <<"END"; 
/* File generated by $0. Do not modify */
#include <tk.h> 
#include <tcl.h>
END
    ;
print <<'END'
#include <iostream>
using namespace std;

static void safeEval(Tcl_Interp * interp, const char* cmd)
{
  char * s  = new char[strlen(cmd)+1];
  strcpy(s, cmd); 
  int code = Tcl_Eval(interp, (char*)(s) );
  if (code != TCL_OK) {
    cerr << "TCL error: " << s << ":" << interp->result << "\n";
  }
  delete [] s; 
}

END
    ;

foreach $i (@ARGV) {
  print "#include \"$i\"\n"; 
  $name = $i;
  open(B, "<$i") || die "open $i: $!";
  $iname = "";
  @xbmfile = ();
  while (<B>) {
    chop;
    push @xbmfile, $_; 
    if (m/(\w+)_width/) { $iname = $1; }
  }
  $name =~ s|^.*/||;
  if ($iname ne $name) {
    print stderr "warning: file $i uses internal name $iname\n";
  }
  my $bmname = $name;
  # Any .xbm extension is removed from the name of the image. 
  $bmname =~ s/\.xbm$//;
  $body .= "  Tk_DefineBitmap(interp, Tk_GetUid(\"$bitmap_prefix$bmname\"), (char*) ${iname}_bits, ${iname}_width, ${iname}_height); \n";

  $split = join "\n", map { qq("$_\\n"); } @xbmfile;
  $body .= qq/safeEval(interp, "image create bitmap imbm`$bmname " "-data {" $split "}");\n/ ;
}

print <<"END"; 
void $funcname(Tcl_Interp*interp)
{ $body }
END


  
  

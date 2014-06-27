case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C32"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\process\classic\windows\include" -I"\$(ISE_LIBRARY)\library\wel\spec\windows\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = app$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C32_c.obj 

OLDOBJECTS =  sp1027.o sp1027d.o ar1033.o ar1033d.o ty1023.o ty1023d.o ty1024.o \
	ty1024d.o ar1046.o ar1046d.o na1028.o na1028d.o re1029.o re1029d.o \
	li1037.o li1037d.o re1034.o re1034d.o in1052.o in1052d.o to1045.o \
	to1045d.o it1031.o it1031d.o it1032.o it1032d.o li1055.o li1055d.o \
	se1047.o se1047d.o dy1049.o dy1049d.o un1054.o un1054d.o ta1053.o \
	ta1053d.o in1030.o in1030d.o cu1038.o cu1038d.o tr1043.o tr1043d.o \
	bo1035.o bo1035d.o ch1051.o ch1051d.o ac1039.o ac1039d.o bi1048.o \
	bi1048d.o fi1036.o fi1036d.o dy1050.o dy1050d.o ba1040.o ba1040d.o \
	co1041.o co1041d.o co1042.o co1042d.o rt1025.o rt1025d.o rt1026.o \
	rt1026d.o bo1044.o bo1044d.o 

all: Cobj32.o

Cobj32.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj32.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile


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
echo "Compiling C code in C34"
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

OBJECTS = big_file_C34_c.obj 

OLDOBJECTS =  fu1094.o fu1094d.o fu1105.o fu1105d.o fu1107.o fu1107d.o fu1109.o \
	fu1109d.o fu1110.o fu1110d.o fu1115.o fu1115d.o ty1096.o ty1096d.o \
	ty1097.o ty1097d.o ty1098.o ty1098d.o ty1106.o ty1106d.o ty1119.o \
	ty1119d.o ty1120.o ty1120d.o li1111.o li1111d.o in1090.o in1090d.o \
	li1093.o li1093d.o li1113.o li1113d.o li1112.o li1112d.o li1114.o \
	li1114d.o un1092.o un1092d.o ta1091.o ta1091d.o se1118.o se1118d.o \
	co1121.o co1121d.o ch1089.o ch1089d.o rt1095.o rt1095d.o rt1101.o \
	rt1101d.o rt1102.o rt1102d.o rt1116.o rt1116d.o rt1117.o rt1117d.o \
	rt1099.o rt1099d.o rt1103.o rt1103d.o rt1100.o rt1100d.o rt1104.o \
	rt1104d.o rt1108.o rt1108d.o 

all: Cobj34.o

Cobj34.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj34.o $(OBJECTS)
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


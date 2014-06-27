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
echo "Compiling C code in C33"
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

OBJECTS = big_file_C33_c.obj 

OLDOBJECTS =  sp1065.o sp1065d.o ar1071.o ar1071d.o fu1056.o fu1056d.o ty1059.o \
	ty1059d.o ty1060.o ty1060d.o ty1061.o ty1061d.o ty1064.o ty1064d.o \
	ar1084.o ar1084d.o na1066.o na1066d.o re1067.o re1067d.o li1075.o \
	li1075d.o re1072.o re1072d.o to1083.o to1083d.o it1069.o it1069d.o \
	it1070.o it1070d.o ce1057.o ce1057d.o se1085.o se1085d.o dy1087.o \
	dy1087d.o in1068.o in1068d.o cu1076.o cu1076d.o tr1081.o tr1081d.o \
	bo1073.o bo1073d.o ac1077.o ac1077d.o bi1086.o bi1086d.o fi1074.o \
	fi1074d.o dy1088.o dy1088d.o ba1078.o ba1078d.o co1079.o co1079d.o \
	co1080.o co1080d.o rt1058.o rt1058d.o rt1062.o rt1062d.o rt1063.o \
	rt1063d.o bo1082.o bo1082d.o 

all: Cobj33.o

Cobj33.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj33.o $(OBJECTS)
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


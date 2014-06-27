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
echo "Compiling C code in C16"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH = 
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
SYSTEM_IN_DYNAMIC_LIB = sample$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C16_c.obj 

OLDOBJECTS =  ty511.o ty511d.o ty512.o ty512d.o ty515.o ty515d.o ty516.o ty516d.o \
	ty520.o ty520d.o ty521.o ty521d.o ty527.o ty527d.o ty513.o ty513d.o \
	ty517.o ty517d.o ty522.o ty522d.o ty524.o ty524d.o ty525.o ty525d.o \
	na499.o na499d.o ar502.o ar502d.o re495.o re495d.o in500.o in500d.o \
	se503.o se503d.o dy505.o dy505d.o bo496.o bo496d.o ta501.o ta501d.o \
	li506.o li506d.o un509.o un509d.o bi504.o bi504d.o fi497.o fi497d.o \
	dy508.o dy508d.o ch507.o ch507d.o rt518.o rt518d.o rt510.o rt510d.o \
	rt514.o rt514d.o rt519.o rt519d.o rt526.o rt526d.o rt523.o rt523d.o \
	bo498.o bo498d.o 

all: Cobj16.o

Cobj16.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj16.o $(OBJECTS)
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


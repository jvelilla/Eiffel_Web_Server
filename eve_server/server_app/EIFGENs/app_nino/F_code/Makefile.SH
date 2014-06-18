case $CONFIG in
'')
	if test ! -f config.sh; then
		(echo "Can't find config.sh."; exit 1)
	fi 2>/dev/null
	. ./config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Preparing C compilation"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\process\classic\windows\include" -I"\$(ISE_LIBRARY)\library\wel\spec\windows\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $optimize $mtccflags $large -DEIF_IEEE_BEHAVIOR -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $optimize $mtcppflags $large -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$eiflib$suffix"
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
.SUFFIXES: .x .xpp .cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

.x.o:
	$(X2C) $< $*.c
	$(CC) $(CFLAGS) -c $*.c
	$(RM) $*.c

.xpp.o:
	$(X2C) $< $*.cpp
	$(CPP) $(CPPFLAGS) -c $*.cpp
	$(RM) $*.cpp

.x.c:
	$(X2C) $< $*.c

.xpp.cpp:
	$(X2C) $< $*.cpp

SUBDIRS = C1 C2 C3 C4 C5 C6 C7 C8 C9 C10 C11 C12 C13 C14 C15 C16 C17 C18 C19 C20 C21 C22 E1 E2

EXTERNALS =  \
	"$(ISE_LIBRARY)\library\wel\spec\$(ISE_C_COMPILER)\$(ISE_PLATFORM)\lib\mtwel.lib" \
	"$(ISE_LIBRARY)\library\net\spec\$(ISE_C_COMPILER)\$(ISE_PLATFORM)\lib\mtnet.lib"

all: app

C1/Cobj1.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C1 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C2/Cobj2.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C2 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C3/Cobj3.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C3 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C4/Cobj4.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C4 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C5/Cobj5.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C5 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C6/Cobj6.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C6 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C7/Cobj7.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C7 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C8/Cobj8.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C8 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C9/Cobj9.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C9 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C10/Cobj10.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C10 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C11/Cobj11.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C11 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C12/Cobj12.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C12 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C13/Cobj13.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C13 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C14/Cobj14.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C14 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C15/Cobj15.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C15 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C16/Cobj16.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C16 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C17/Cobj17.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C17 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C18/Cobj18.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C18 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C19/Cobj19.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C19 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C20/Cobj20.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C20 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C21/Cobj21.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C21 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

C22/Cobj22.o: Makefile E1/estructure.h E1/eoffsets.h
	cd C22 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) $(END_TEST)

E1/Makefile: E1/Makefile.SH
	cd E1 ; $(SHELL) Makefile.SH

E1/emain.o: Makefile E1/Makefile
	$(CP) "$(EIFTEMPLATES)/emain.template" "E1/emain.c"
	cd E1 ; $(MAKE) emain.o

E1/estructure.h: E1/estructure.x
	$(X2C) E1/estructure.x E1/estructure.h

E1/eoffsets.h: E1/eoffsets.x
	$(X2C) E1/eoffsets.x E1/eoffsets.h

E1/eref.o: Makefile E1/Makefile E1/estructure.h E1/eoffsets.h
	cd E1 ; $(MAKE) eref.o

E1/epoly.o: Makefile E1/Makefile E1/estructure.h E1/eoffsets.h
	cd E1 ; $(MAKE) epoly.o

E1/esize.o: Makefile E1/Makefile E1/estructure.h E1/eoffsets.h
	cd E1 ; $(MAKE) esize.o

E1/eplug.o: Makefile E1/Makefile E1/estructure.h E1/eoffsets.h
	cd E1 ; $(MAKE) eplug.o

E1/eskelet.o: Makefile E1/Makefile E1/estructure.h E1/eoffsets.h
	cd E1 ; $(MAKE) eskelet.o

E1/enames.o: Makefile E1/Makefile E1/estructure.h E1/eoffsets.h
	cd E1 ; $(MAKE) enames.o

E1/evisib.o: Makefile E1/Makefile E1/estructure.h E1/eoffsets.h
	cd E1 ; $(MAKE) evisib.o

E1/ececil.o: Makefile E1/Makefile E1/estructure.h E1/eoffsets.h
	cd E1 ; $(MAKE) ececil.o

E1/einit.o: Makefile E1/Makefile E1/estructure.h E1/eoffsets.h
	cd E1 ; $(MAKE) einit.o

E1/eparents.o: Makefile E1/Makefile E1/estructure.h E1/eoffsets.h
	cd E1 ; $(MAKE) eparents.o

E2/Eobj2.o: Makefile E1/estructure.h E1/eoffsets.h
	cd E2 ; $(START_TEST) $(SHELL) Makefile.SH ; $(MAKE) Eobj2.o $(END_TEST)

OBJECTS= C22/Cobj22.o C21/Cobj21.o C20/Cobj20.o C19/Cobj19.o C18/Cobj18.o C17/Cobj17.o C16/Cobj16.o C15/Cobj15.o C14/Cobj14.o C13/Cobj13.o C12/Cobj12.o C11/Cobj11.o C10/Cobj10.o C9/Cobj9.o C8/Cobj8.o C7/Cobj7.o C6/Cobj6.o C5/Cobj5.o C4/Cobj4.o C3/Cobj3.o C2/Cobj2.o C1/Cobj1.o E2/Eobj2.o E1/eref.o E1/epoly.o E1/esize.o E1/eplug.o E1/eskelet.o E1/enames.o E1/evisib.o E1/ececil.o E1/einit.o E1/eparents.o

PRECOMP_OBJECTS= 


app: $(OBJECTS)  E1/emain.o Makefile
	$(RM) app
	$(CC) -o app $(CFLAGS) $(CCLDFLAGS)  $(OBJECTS) E1/emain.o \
		$(PRECOMP_OBJECTS) $(EXTERNALS) $(EIFLIB) $(LIBS)

RCECIL = MTmalloc.o MTgarcol.o MTlocal.o MTexcept.o MTstore.o MTretrieve.o \
	MThash.o MTtraverse.o MThashin.o MTtools.o MTinternal.o MTplug.o \
	MTcopy.o MTequal.o MTlmalloc.o MTout.o MTtimer.o MTurgent.o MTsig.o \
	MThector.o MTcecil.o MTbits.o MTfile.o MTdir.o MTmisc.o MTerror.o \
	MTumain.o MTmemory.o MTargv.o MTboolstr.o MTsearch.o MTmain.o \
	MTrun_idr.o MTcompress.o MTconsole.o MTpath_name.o MTobject_id.o \
	MToption.o MTeif_threads.o MTgen_conf.o MTeif_type_id.o MTrout_obj.o \
	MTeif_project.o MTidrs.o MTposix_threads.o MTscoop.o \
	MTmemory_analyzer.o MToffset.o 

STATIC_CECIL = libapp.a
cecil: $(STATIC_CECIL)
$(STATIC_CECIL):  $(OBJECTS) 
	$(AR) x $(EIFLIB)
	$(AR) cr $(STATIC_CECIL) $(OBJECTS) $(PRECOMP_OBJECTS) $(RCECIL)
	$(RANLIB) $(STATIC_CECIL)
	$(RM) $(RCECIL) 

SHARED_CECIL = libapp$(SHARED_SUFFIX)
dynamic_cecil: $(SHARED_CECIL) 
SHARED_CECIL_OBJECT = $(OBJECTS) \
		E1/emain.o
SHAREDFLAGS = $(LDSHAREDFLAGS) $(SHARED_CECIL) 
$(SHARED_CECIL): $(SHARED_CECIL_OBJECT) 
	$(RM) $(SHARED_CECIL) 
	$(SHAREDLINK) $(SHAREDFLAGS) $(SHARED_CECIL_OBJECT) $(PRECOMP_OBJECTS) $(EXTERNALS) $(EIFLIB) $(SHAREDLIBS) 



dynlib: $(SYSTEM_IN_DYNAMIC_LIB) 
E1/egc_dynlib.o: Makefile E1/Makefile
	$(CP) "$(EIFTEMPLATES)/egc_dynlib.template" E1/egc_dynlib.c
	cd E1 ; $(MAKE) egc_dynlib.o ; cd ..
E1/edynlib.o: Makefile E1/Makefile E1/edynlib.c 
	cd E1 ; $(MAKE) edynlib.o ; cd ..

SYSTEM_IN_DYNAMIC_LIB_OBJ = $(OBJECTS) \
		E1/edynlib.o E1/egc_dynlib.o 
DYNLIBSHAREDFLAGS = $(LDSHAREDFLAGS) $(SYSTEM_IN_DYNAMIC_LIB) 
$(SYSTEM_IN_DYNAMIC_LIB): $(SYSTEM_IN_DYNAMIC_LIB_OBJ) 
	$(RM) $(SYSTEM_IN_DYNAMIC_LIB) 
	$(SHAREDLINK) $(DYNLIBSHAREDFLAGS) $(SYSTEM_IN_DYNAMIC_LIB_OBJ) $(PRECOMP_OBJECTS) $(EXTERNALS) $(EIFLIB) $(SHAREDLIBS) 


clean: sub_clean local_clean
clobber: sub_clobber local_clobber

local_clean::
	$(RM) core finished *.o *.so *.a

local_clobber:: local_clean
	$(RM) Makefile config.sh finish_freezing

sub_clean::
	for i in $(SUBDIRS); \
	do \
		if [ -r $$i/Makefile ]; then \
			(cd $$i ; $(MAKE) clean); \
		fi; \
	done

sub_clobber::
	for i in $(SUBDIRS); \
	do \
		if [ -r $$i/Makefile ]; then \
			(cd $$i ; $(MAKE) clobber); \
		fi; \
	done

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

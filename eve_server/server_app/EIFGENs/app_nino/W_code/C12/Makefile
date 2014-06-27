INCLUDE_PATH =  -I"C:\Python27\eve\library\process\classic\windows\include" -I"C:\Python27\eve\library\wel\spec\windows\include"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Python27\Eiffel_14.05_95158\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE  -DEIF_THREADS  -DWORKBENCH -I"C:\Python27\Eiffel_14.05_95158\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:CONSOLE
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Python27\Eiffel_14.05_95158\studio\spec\win64\lib\msc\mtwkbench.lib"
EIFTEMPLATES = C:\Python27\Eiffel_14.05_95158\studio\config\win64\templates
LIBS = 
MAKE = nmake -s -nologo
AR = 
LD = 
MKDEP =   --
MV = copy
CP = copy
RANLIB = echo
RM = del
FILE_EXIST = if exist
RMDIR = rd
X2C = "C:\Python27\Eiffel_14.05_95158\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = app.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C12_c.obj 

OLDOBJECTS =  po380.obj po380d.obj po381.obj po381d.obj tu369.obj tu369d.obj st390.obj st390d.obj \
	st389.obj st389d.obj ch374.obj ch374d.obj ch375.obj ch375d.obj ch371.obj ch371d.obj \
	ch372.obj ch372d.obj bo377.obj bo377d.obj bo378.obj bo378d.obj im385.obj im385d.obj \
	fi392.obj fi392d.obj po379.obj po379d.obj ha367.obj ha367d.obj bo376.obj bo376d.obj \
	ch373.obj ch373d.obj ch370.obj ch370d.obj st388.obj st388d.obj re382.obj re382d.obj \
	re386.obj re386d.obj re384.obj re384d.obj im387.obj im387d.obj de395.obj de395d.obj \
	im383.obj im383d.obj pa391.obj pa391d.obj uu368.obj uu368d.obj we366.obj we366d.obj \
	we394.obj we394d.obj we363.obj we363d.obj we364.obj we364d.obj we393.obj we393d.obj \
	we365.obj we365d.obj 

all::  Cobj12.lib

Cobj12.lib: $(OBJECTS) Makefile
	if exist $@ $(RM) $@
	lib -nologo -OUT:$@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile


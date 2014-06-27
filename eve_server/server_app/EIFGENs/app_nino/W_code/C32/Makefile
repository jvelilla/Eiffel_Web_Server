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

OBJECTS = big_file_C32_c.obj 

OLDOBJECTS =  sp1027.obj sp1027d.obj ar1033.obj ar1033d.obj ty1023.obj ty1023d.obj ty1024.obj \
	ty1024d.obj ar1046.obj ar1046d.obj na1028.obj na1028d.obj re1029.obj re1029d.obj \
	li1037.obj li1037d.obj re1034.obj re1034d.obj in1052.obj in1052d.obj to1045.obj \
	to1045d.obj it1031.obj it1031d.obj it1032.obj it1032d.obj li1055.obj li1055d.obj \
	se1047.obj se1047d.obj dy1049.obj dy1049d.obj un1054.obj un1054d.obj ta1053.obj \
	ta1053d.obj in1030.obj in1030d.obj cu1038.obj cu1038d.obj tr1043.obj tr1043d.obj \
	bo1035.obj bo1035d.obj ch1051.obj ch1051d.obj ac1039.obj ac1039d.obj bi1048.obj \
	bi1048d.obj fi1036.obj fi1036d.obj dy1050.obj dy1050d.obj ba1040.obj ba1040d.obj \
	co1041.obj co1041d.obj co1042.obj co1042d.obj rt1025.obj rt1025d.obj rt1026.obj \
	rt1026d.obj bo1044.obj bo1044d.obj 

all::  Cobj32.lib

Cobj32.lib: $(OBJECTS) Makefile
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


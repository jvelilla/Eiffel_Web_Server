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

OBJECTS = big_file_C34_c.obj 

OLDOBJECTS =  fu1094.obj fu1094d.obj fu1105.obj fu1105d.obj fu1107.obj fu1107d.obj fu1109.obj \
	fu1109d.obj fu1110.obj fu1110d.obj fu1115.obj fu1115d.obj ty1096.obj ty1096d.obj \
	ty1097.obj ty1097d.obj ty1098.obj ty1098d.obj ty1106.obj ty1106d.obj ty1119.obj \
	ty1119d.obj ty1120.obj ty1120d.obj li1111.obj li1111d.obj in1090.obj in1090d.obj \
	li1093.obj li1093d.obj li1113.obj li1113d.obj li1112.obj li1112d.obj li1114.obj \
	li1114d.obj un1092.obj un1092d.obj ta1091.obj ta1091d.obj se1118.obj se1118d.obj \
	co1121.obj co1121d.obj ch1089.obj ch1089d.obj rt1095.obj rt1095d.obj rt1101.obj \
	rt1101d.obj rt1102.obj rt1102d.obj rt1116.obj rt1116d.obj rt1117.obj rt1117d.obj \
	rt1099.obj rt1099d.obj rt1103.obj rt1103d.obj rt1100.obj rt1100d.obj rt1104.obj \
	rt1104d.obj rt1108.obj rt1108d.obj 

all::  Cobj34.lib

Cobj34.lib: $(OBJECTS) Makefile
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


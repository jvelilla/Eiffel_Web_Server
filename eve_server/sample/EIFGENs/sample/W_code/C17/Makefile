INCLUDE_PATH = 
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
SYSTEM_IN_DYNAMIC_LIB = sample.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C17_c.obj 

OLDOBJECTS =  sp530.obj sp530d.obj ar535.obj ar535d.obj ty528.obj ty528d.obj ty560.obj ty560d.obj \
	ty529.obj ty529d.obj na548.obj na548d.obj re534.obj re534d.obj li536.obj li536d.obj \
	ar551.obj ar551d.obj re543.obj re543d.obj in549.obj in549d.obj to547.obj to547d.obj \
	it532.obj it532d.obj it533.obj it533d.obj in531.obj in531d.obj cu537.obj cu537d.obj \
	tr542.obj tr542d.obj se552.obj se552d.obj dy554.obj dy554d.obj bo544.obj bo544d.obj \
	ta550.obj ta550d.obj li555.obj li555d.obj un558.obj un558d.obj co541.obj co541d.obj \
	ac538.obj ac538d.obj co539.obj co539d.obj bi553.obj bi553d.obj fi545.obj fi545d.obj \
	dy557.obj dy557d.obj ba540.obj ba540d.obj ch556.obj ch556d.obj rt559.obj rt559d.obj \
	bo546.obj bo546d.obj 

all::  Cobj17.lib

Cobj17.lib: $(OBJECTS) Makefile
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


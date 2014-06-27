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

OBJECTS = big_file_C28_c.obj 

OLDOBJECTS =  sp902.obj sp902d.obj ar908.obj ar908d.obj ty900.obj ty900d.obj ty901.obj ty901d.obj \
	ar921.obj ar921d.obj na903.obj na903d.obj re904.obj re904d.obj li912.obj li912d.obj \
	re909.obj re909d.obj in894.obj in894d.obj to920.obj to920d.obj it906.obj it906d.obj \
	it907.obj it907d.obj li897.obj li897d.obj se922.obj se922d.obj dy891.obj dy891d.obj \
	un896.obj un896d.obj ta895.obj ta895d.obj in905.obj in905d.obj cu913.obj cu913d.obj \
	tr918.obj tr918d.obj bo910.obj bo910d.obj ch893.obj ch893d.obj ac914.obj ac914d.obj \
	bi923.obj bi923d.obj fi911.obj fi911d.obj dy892.obj dy892d.obj ba915.obj ba915d.obj \
	co916.obj co916d.obj co917.obj co917d.obj rt898.obj rt898d.obj rt899.obj rt899d.obj \
	bo919.obj bo919d.obj 

all::  Cobj28.lib

Cobj28.lib: $(OBJECTS) Makefile
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


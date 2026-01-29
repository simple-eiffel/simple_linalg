INCLUDE_PATH =  -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\library\time\spec\include"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:WINDOWS
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\lib\msc_vc140\mtwkbench.lib"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\config\win64\templates
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
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = simple_linalg.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C18_c.obj 

OLDOBJECTS =  sp574.obj sp574d.obj ar576.obj ar576d.obj ty570.obj ty570d.obj ty571.obj ty571d.obj \
	ty572.obj ty572d.obj sp568.obj sp568d.obj na575.obj na575d.obj re585.obj re585d.obj \
	it580.obj it580d.obj it579.obj it579d.obj li582.obj li582d.obj ar567.obj ar567d.obj \
	in577.obj in577d.obj to573.obj to573d.obj dy563.obj dy563d.obj ge566.obj ge566d.obj \
	in588.obj in588d.obj re586.obj re586d.obj ar565.obj ar565d.obj cu591.obj cu591d.obj \
	tr583.obj tr583d.obj ta578.obj ta578d.obj fi589.obj fi589d.obj un564.obj un564d.obj \
	ch561.obj ch561d.obj ty587.obj ty587d.obj ac592.obj ac592d.obj dy562.obj dy562d.obj \
	co584.obj co584d.obj ba581.obj ba581d.obj rt569.obj rt569d.obj bo590.obj bo590d.obj \
	co593.obj co593d.obj 

all::  Cobj18.lib

Cobj18.lib: $(OBJECTS) Makefile
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


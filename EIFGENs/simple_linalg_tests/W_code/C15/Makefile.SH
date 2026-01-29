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
echo "Compiling C code in C15"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\time\spec\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $windows_flags
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
SYSTEM_IN_DYNAMIC_LIB = simple_linalg$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C15_c.obj 

OLDOBJECTS =  sp475.o sp475d.o ar477.o ar477d.o sp462.o sp462d.o na476.o na476d.o \
	re486.o re486d.o it481.o it481d.o it480.o it480d.o li483.o li483d.o \
	ar465.o ar465d.o in478.o in478d.o to464.o to464d.o dy470.o dy470d.o \
	ha469.o ha469d.o ge463.o ge463d.o in489.o in489d.o re487.o re487d.o \
	cu492.o cu492d.o tr484.o tr484d.o ta471.o ta471d.o ta479.o ta479d.o \
	fi490.o fi490d.o ha468.o ha468d.o ha474.o ha474d.o ta466.o ta466d.o \
	ta472.o ta472d.o ty488.o ty488d.o ac493.o ac493d.o co485.o co485d.o \
	ba482.o ba482d.o bo491.o bo491d.o ta467.o ta467d.o ta473.o ta473d.o \
	co494.o co494d.o 

all: Cobj15.o

Cobj15.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj15.o $(OBJECTS)
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


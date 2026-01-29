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
echo "Compiling C code in C26"
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

OBJECTS = big_file_C26_c.obj 

OLDOBJECTS =  sp832.o sp832d.o ar834.o ar834d.o sp831.o sp831d.o na833.o na833d.o \
	re843.o re843d.o it838.o it838d.o it837.o it837d.o ar854.o ar854d.o \
	li840.o li840d.o ar830.o ar830d.o re852.o re852d.o in835.o in835d.o \
	to829.o to829d.o dy825.o dy825d.o li856.o li856d.o ge828.o ge828d.o \
	in846.o in846d.o re844.o re844d.o ar827.o ar827d.o se857.o se857d.o \
	dy855.o dy855d.o cu849.o cu849d.o tr841.o tr841d.o bo853.o bo853d.o \
	ta836.o ta836d.o fi847.o fi847d.o un826.o un826d.o ty845.o ty845d.o \
	ac850.o ac850d.o co842.o co842d.o ba839.o ba839d.o bo848.o bo848d.o \
	co851.o co851d.o 

all: Cobj26.o

Cobj26.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj26.o $(OBJECTS)
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


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
echo "Compiling C code in C30"
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

OBJECTS = big_file_C30_c.obj 

OLDOBJECTS =  sp961.o sp961d.o ar963.o ar963d.o sp960.o sp960d.o na962.o na962d.o \
	re972.o re972d.o it967.o it967d.o it966.o it966d.o ar983.o ar983d.o \
	li969.o li969d.o ar959.o ar959d.o re981.o re981d.o in964.o in964d.o \
	to958.o to958d.o li985.o li985d.o ge957.o ge957d.o in975.o in975d.o \
	re973.o re973d.o se986.o se986d.o dy984.o dy984d.o cu978.o cu978d.o \
	tr970.o tr970d.o bo982.o bo982d.o ta965.o ta965d.o fi976.o fi976d.o \
	ch988.o ch988d.o ty974.o ty974d.o ac979.o ac979d.o bi987.o bi987d.o \
	dy989.o dy989d.o co971.o co971d.o ba968.o ba968d.o bo977.o bo977d.o \
	co980.o co980d.o 

all: Cobj30.o

Cobj30.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj30.o $(OBJECTS)
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


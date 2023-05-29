INCLUDE_PATH =  -I"C:\Program Files\Eiffel Software\EiffelStudio 22.05 Standard\library\time\spec\include" -I"c:\program files\eiffel software\eiffelstudio 22.05 standard\contrib\library\network\http_network\spec\include" -I"c:\program files\eiffel software\eiffelstudio 22.05 standard\contrib\library\web\framework\ewf\libfcgi\spec\include\libfcgi"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 22.05 Standard\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 22.05 Standard\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:WINDOWS
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 22.05 Standard\studio\spec\win64\lib\msc_vc140\mtwkbench.lib"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 22.05 Standard\studio\config\win64\templates
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
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 22.05 Standard\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = browser_hello.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C10_c.obj 

OLDOBJECTS =  po300.obj po300d.obj po301.obj po301d.obj st310.obj st310d.obj st307.obj st307d.obj \
	im309.obj im309d.obj im306.obj im306d.obj bo297.obj bo297d.obj bo298.obj bo298d.obj \
	re308.obj re308d.obj re305.obj re305d.obj ab322.obj ab322d.obj po299.obj po299d.obj \
	st304.obj st304d.obj re302.obj re302d.obj de311.obj de311d.obj im303.obj im303d.obj \
	rt319.obj rt319d.obj rt327.obj rt327d.obj ht318.obj ht318d.obj pa317.obj pa317d.obj \
	ws323.obj ws323d.obj ws326.obj ws326d.obj ht321.obj ht321d.obj er316.obj er316d.obj \
	ws328.obj ws328d.obj wg315.obj wg315d.obj ws325.obj ws325d.obj ws324.obj ws324d.obj \
	ws314.obj ws314d.obj ht320.obj ht320d.obj da313.obj da313d.obj ws329.obj ws329d.obj \
	fi312.obj fi312d.obj 

all::  Cobj10.lib

Cobj10.lib: $(OBJECTS) Makefile
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


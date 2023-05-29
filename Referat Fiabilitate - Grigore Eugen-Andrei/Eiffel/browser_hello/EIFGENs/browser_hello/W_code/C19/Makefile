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

OBJECTS = big_file_C19_c.obj 

OLDOBJECTS =  sp601.obj sp601d.obj ar611.obj ar611d.obj ty596.obj ty596d.obj ty597.obj ty597d.obj \
	ty595.obj ty595d.obj ty598.obj ty598d.obj na602.obj na602d.obj sp603.obj sp603d.obj \
	re605.obj re605d.obj li617.obj li617d.obj it609.obj it609d.obj it594.obj it594d.obj \
	it610.obj it610d.obj ar612.obj ar612d.obj ar599.obj ar599d.obj re613.obj re613d.obj \
	in624.obj in624d.obj to600.obj to600d.obj ge604.obj ge604d.obj re606.obj re606d.obj \
	in608.obj in608d.obj cu618.obj cu618d.obj tr623.obj tr623d.obj ar626.obj ar626d.obj \
	bo614.obj bo614d.obj ta625.obj ta625d.obj fi615.obj fi615d.obj ty607.obj ty607d.obj \
	ac619.obj ac619d.obj co620.obj co620d.obj ba621.obj ba621d.obj bo616.obj bo616d.obj \
	co622.obj co622d.obj 

all::  Cobj19.lib

Cobj19.lib: $(OBJECTS) Makefile
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


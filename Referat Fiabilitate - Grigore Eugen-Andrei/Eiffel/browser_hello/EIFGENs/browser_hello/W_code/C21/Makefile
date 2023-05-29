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

OBJECTS = big_file_C21_c.obj 

OLDOBJECTS =  ty669.obj ty669d.obj ty670.obj ty670d.obj ty677.obj ty677d.obj ty678.obj ty678d.obj \
	ty682.obj ty682d.obj ty683.obj ty683d.obj ty686.obj ty686d.obj ty687.obj ty687d.obj \
	ty690.obj ty690d.obj ty691.obj ty691d.obj ty671.obj ty671d.obj ty679.obj ty679d.obj \
	ty684.obj ty684d.obj ty688.obj ty688d.obj ty692.obj ty692d.obj ce673.obj ce673d.obj \
	ce674.obj ce674d.obj ce675.obj ce675d.obj dy664.obj dy664d.obj ha663.obj ha663d.obj \
	ta665.obj ta665d.obj ha662.obj ha662d.obj ha667.obj ha667d.obj ta660.obj ta660d.obj \
	ta666.obj ta666d.obj ta661.obj ta661d.obj rt676.obj rt676d.obj rt680.obj rt680d.obj \
	rt681.obj rt681d.obj rt685.obj rt685d.obj rt689.obj rt689d.obj rt668.obj rt668d.obj \
	rt672.obj rt672d.obj 

all::  Cobj21.lib

Cobj21.lib: $(OBJECTS) Makefile
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


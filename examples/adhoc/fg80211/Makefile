#
# OMNeT++/OMNEST Makefile for INET$(EXE_SUFFIX)
#
# This file was generated with the command:
#  opp_makemake -f
#

# Name of target to be created (-o option)
TARGET = INET$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = -I.

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =
LIBS +=

# Output directory
O = ../../../out/$(CONFIGNAME)//examples/adhoc/fg80211

# Object files for local .cc and .msg files
OBJS =

# Message files
MSGFILES =

# Other makefile variables (-K)

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" $(USERIF_LIBS) $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS)  $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $(TARGET)

$(TARGET) : $O/$(TARGET)
	ln -s -f $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(EXTRA_OBJS) Makefile
	@mkdir -p $O
	$(CXX) $(LDFLAGS) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS)

.SUFFIXES: .cc

$O/%.o: %.cc
	@mkdir -p $(dir $@)
	$(CXX) -c $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	-rm -rf $O $(TARGET)
	-rm -f ./*_m.cc ./*_m.h

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc

	for i in $(SUBMAKE_DIRS) ""; do if [ "$$i" != "" ]; then (cd $$i && $(MAKE) depend) || exit 1; fi; done;

makefiles:
	opp_makemake -f
	for i in $(SUBMAKE_DIRS) ""; do if [ "$$i" != "" ]; then (cd $$i && $(MAKE) makefiles) || exit 1; fi; done;

# DO NOT DELETE THIS LINE -- make depend depends on it.


# -*- makefile -*-
#----------------------------------------------------------------------------
#       GNU ACE Workspace
#
# $Id: GNUACEWorkspaceCreator.pm 94635 2011-10-06 12:59:23Z johnnyw $
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# /home/build/DOC_ROOT/stage-644/ACE_wrappers/bin/mwc.pl -type gnuace -exclude "TAO/TAO_*.mwc,TAO/CIAO/CIAO_*.mwc" -workers 10 -recurse -hierarchy -relative ACE_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers -relative TAO_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers/TAO -relative CIAO_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers/TAO/CIAO -relative DANCE_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers/TAO/DAnCE
#
#----------------------------------------------------------------------------

MAKEFILE = GNUmakefile

ifeq ($(findstring k,$(MAKEFLAGS)),k)
  KEEP_GOING = -
endif

include $(ACE_ROOT)/include/makeinclude/macros.GNU

all: Naming_Client_Idl Naming_Client_Server Naming_Client_Client

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Naming_Client_Idl $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Naming_Client_Server $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Naming_Client_Client $(@)

.PHONY: Naming_Client_Idl
Naming_Client_Idl:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Naming_Client_Idl all

.PHONY: Naming_Client_Server
Naming_Client_Server: Naming_Client_Idl
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Naming_Client_Server all

.PHONY: Naming_Client_Client
Naming_Client_Client: Naming_Client_Idl Naming_Client_Server
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Naming_Client_Client all

project_name_list:
	@echo Naming_Client_Client
	@echo Naming_Client_Idl
	@echo Naming_Client_Server

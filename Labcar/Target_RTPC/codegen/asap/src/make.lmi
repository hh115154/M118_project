# Autogenerated on 2015-05-13/14:42:54 by LABCAR. Do not alter. #

####################################################################
# generated include file for a source-level makefile
#
#
# Generic parts:
#   all
#
# Mandatory part:
#   TARGET_FILE
#
# Expected variables on entry:
#   None
#
# Prerequisites: 
#   None
#
# 2004-09-02 -Fra-
####################################################################

VPATH =

LOCAL_OBJS := 

LOCAL_SRCS := \
	labcartop.c \
	mc_module_hardware.c \
	mc_module_batterymodel_hil.c \
	mc_module_canmodule.c \
	mc_module_osmonitoring.c \
	rtpc_task_statistic.h \
	programid.c

LOCAL_LIBS :=

LOCAL_CPPFLAGS :=

LOCAL_CFLAGS :=

LOCAL_CXXFLAGS :=

LOCAL_CONLYFLAGS :=

LOCAL_INCPATH := \
	-I$(SOURCE_ROOT)/rtio/src \
	-I$(SOURCE_ROOT)/simodels/batterymodel_hil/code/src \
	-I$(SOURCE_ROOT)/simodels/batterymodel_hil/external/code/src/simulink_batterymodel_hil \
	-I$(MATLAB_PATH)/simulink/include \
	-I$(MATLAB_PATH)/extern/include \
	-I$(MATLAB_PATH)/rtw/c/src \
	-I$(MATLAB_PATH)/rtw/c/src/ext_mode/common \
	-I$(MATLAB_PATH)/rtw/c/libsrc \
	-I$(UTILITY_DIR)/extern/rtw/$(MATLAB_RELEASE)/include \
	-I$(SOURCE_ROOT)/simodels/batterymodel_hil/external/code/src \
	-I$(SOURCE_ROOT)/simodels/global/code/src

LOCAL_INCLUDES :=

LOCAL_LIBPATH :=

TARGET_FILE_SRC := \
	libasap.a

TARGET_FILE_OBJ := 

LOCAL_PREPROCESSING :=

LIB_DIR :=

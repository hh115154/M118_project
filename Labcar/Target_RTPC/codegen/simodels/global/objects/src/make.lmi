# Autogenerated on 2015-05-13/14:42:48 by LABCAR. Do not alter. #

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
	modcomm.c \
	lcoutport.c \
	lcinport.c

LOCAL_LIBS :=

LOCAL_CPPFLAGS :=

LOCAL_CFLAGS :=

LOCAL_CXXFLAGS :=

LOCAL_CONLYFLAGS :=

LOCAL_INCPATH := \
	-I$(SOURCE_ROOT)/simodels/batterymodel_hil/external/code/src/simulink_batterymodel_hil \
	-I$(SOURCE_ROOT)/simodels/batterymodel_hil/code/src \
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
	libsimodels_global_code.a

TARGET_FILE_OBJ := \
	libsimodels_global_objects.a

LOCAL_PREPROCESSING :=

LIB_DIR :=

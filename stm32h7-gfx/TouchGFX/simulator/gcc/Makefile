# Helper macros to convert spaces into question marks and back again
e := 
sp := $(e) $(e)
qs = $(subst ?,$(sp),$1)
sq = $(subst $(sp),?,$1)

# Get name of this Makefile (avoid getting word 0 and a starting space)
makefile_name := $(wordlist 1,1000,$(MAKEFILE_LIST))

# Get path of this Makefile
makefile_path := $(call qs,$(dir $(call sq,$(abspath $(call sq,$(makefile_name))))))

# Get path where the Application is
application_path := $(call qs,$(abspath $(call sq,$(makefile_path)../..)))
project_path := $(call qs,$(abspath $(call sq,$(makefile_path)../../..)))

.PHONY: clean assets all


ifneq ($(words $(makefile_path))$(words $(MAKEFILE_LIST)),11)
all clean assets:
$(error Spaces not allowed in path)
else



ADDITIONAL_SOURCES := hal/ap/ap.c  \
                      hal/bsp/bsp.c  \
                      hal/hw/hw.c  \
                      hal/hw/driver/log.cpp  \
                      hal/hw/driver/uart_win.c  \
                      hal/hw/driver/eeprom.c  \
                      hal/hw/driver/rtc.c  \
                      ../App/common/core/qbuffer.c  \
                      ../App/common/core/util.c  \
                      ../App/ap/modules/manager.c  \
                      ../App/ap/modules/packet.c  \

					  
ADDITIONAL_INCLUDE_PATHS :=  '$(project_path)/App/common/hw/include' \
                             '$(project_path)/App/bsp' \
                             '$(project_path)/App/ap' \
                             '$(project_path)/App/hw' \
                             '$(project_path)/App/common' \
                             '$(project_path)/App/common/core' \
                             '$(project_path)/App/ap/modules' \

                                                                                      
                             
ADDITIONAL_LIBRARY_PATHS := 
ADDITIONAL_LIBRARIES :=
export ADDITIONAL_SOURCES ADDITIONAL_INCLUDE_PATHS ADDITIONAL_LIBRARY_PATHS ADDITIONAL_LIBRARIES


all: $(filter assets,$(MAKECMDGOALS))
all assets: $(filter clean,$(MAKECMDGOALS))
all clean assets:
	@$(MAKE) -r -f generated/simulator/gcc/Makefile -s $(MFLAGS) $@ -C "$(application_path)"
endif


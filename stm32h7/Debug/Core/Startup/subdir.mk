################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Core/Startup/startup_stm32h723zgtx.s 

S_DEPS += \
./Core/Startup/startup_stm32h723zgtx.d 

OBJS += \
./Core/Startup/startup_stm32h723zgtx.o 


# Each subdirectory must supply rules for building sources it contributes
Core/Startup/%.o: ../Core/Startup/%.s Core/Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m7 -g3 -DDEBUG -c -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/hw" -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/common" -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/common/core" -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/common/hw" -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/common/hw/include" -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/ap" -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/ap/modules" -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/bsp" -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

clean: clean-Core-2f-Startup

clean-Core-2f-Startup:
	-$(RM) ./Core/Startup/startup_stm32h723zgtx.d ./Core/Startup/startup_stm32h723zgtx.o

.PHONY: clean-Core-2f-Startup


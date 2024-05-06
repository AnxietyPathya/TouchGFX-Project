################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../App/hw/hw.c 

C_DEPS += \
./App/hw/hw.d 

OBJS += \
./App/hw/hw.o 


# Each subdirectory must supply rules for building sources it contributes
App/hw/%.o App/hw/%.su App/hw/%.cyclo: ../App/hw/%.c App/hw/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H723xx -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/onste/Documents/TouchGFX-Project/stm32h7-gfx/App/hw" -I"C:/Users/onste/Documents/TouchGFX-Project/stm32h7-gfx/App/common" -I"C:/Users/onste/Documents/TouchGFX-Project/stm32h7-gfx/App/common/hw" -I"C:/Users/onste/Documents/TouchGFX-Project/stm32h7-gfx/App/common/hw/include" -I"C:/Users/onste/Documents/TouchGFX-Project/stm32h7-gfx/App/common/core" -I"C:/Users/onste/Documents/TouchGFX-Project/stm32h7-gfx/App/ap" -I"C:/Users/onste/Documents/TouchGFX-Project/stm32h7-gfx/App/ap/modules" -I"C:/Users/onste/Documents/TouchGFX-Project/stm32h7-gfx/App/bsp" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -Og -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-App-2f-hw

clean-App-2f-hw:
	-$(RM) ./App/hw/hw.cyclo ./App/hw/hw.d ./App/hw/hw.o ./App/hw/hw.su

.PHONY: clean-App-2f-hw


################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../App/ap/ap.c 

C_DEPS += \
./App/ap/ap.d 

OBJS += \
./App/ap/ap.o 


# Each subdirectory must supply rules for building sources it contributes
App/ap/%.o App/ap/%.su App/ap/%.cyclo: ../App/ap/%.c App/ap/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H723xx -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/onste/Documents/TouchGFX-Project/stm32h7/App/hw" -I"C:/Users/onste/Documents/TouchGFX-Project/stm32h7/App/common" -I"C:/Users/onste/Documents/TouchGFX-Project/stm32h7/App/common/core" -I"C:/Users/onste/Documents/TouchGFX-Project/stm32h7/App/common/hw" -I"C:/Users/onste/Documents/TouchGFX-Project/stm32h7/App/common/hw/include" -I"C:/Users/onste/Documents/TouchGFX-Project/stm32h7/App/ap" -I"C:/Users/onste/Documents/TouchGFX-Project/stm32h7/App/bsp" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-App-2f-ap

clean-App-2f-ap:
	-$(RM) ./App/ap/ap.cyclo ./App/ap/ap.d ./App/ap/ap.o ./App/ap/ap.su

.PHONY: clean-App-2f-ap


################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../App/hw/driver/touch/ft5206.c \
../App/hw/driver/touch/ft5316.c \
../App/hw/driver/touch/gt911.c 

C_DEPS += \
./App/hw/driver/touch/ft5206.d \
./App/hw/driver/touch/ft5316.d \
./App/hw/driver/touch/gt911.d 

OBJS += \
./App/hw/driver/touch/ft5206.o \
./App/hw/driver/touch/ft5316.o \
./App/hw/driver/touch/gt911.o 


# Each subdirectory must supply rules for building sources it contributes
App/hw/driver/touch/%.o App/hw/driver/touch/%.su App/hw/driver/touch/%.cyclo: ../App/hw/driver/touch/%.c App/hw/driver/touch/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H723xx -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/hw" -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/common" -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/common/core" -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/common/hw" -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/common/hw/include" -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/ap" -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/ap/modules" -I"C:/Users/user/Documents/stm32h7/firmware/stm32h7/App/bsp" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-App-2f-hw-2f-driver-2f-touch

clean-App-2f-hw-2f-driver-2f-touch:
	-$(RM) ./App/hw/driver/touch/ft5206.cyclo ./App/hw/driver/touch/ft5206.d ./App/hw/driver/touch/ft5206.o ./App/hw/driver/touch/ft5206.su ./App/hw/driver/touch/ft5316.cyclo ./App/hw/driver/touch/ft5316.d ./App/hw/driver/touch/ft5316.o ./App/hw/driver/touch/ft5316.su ./App/hw/driver/touch/gt911.cyclo ./App/hw/driver/touch/gt911.d ./App/hw/driver/touch/gt911.o ./App/hw/driver/touch/gt911.su

.PHONY: clean-App-2f-hw-2f-driver-2f-touch

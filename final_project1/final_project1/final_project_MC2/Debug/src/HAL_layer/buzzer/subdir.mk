################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/HAL_layer/buzzer/buzzer.c 

OBJS += \
./src/HAL_layer/buzzer/buzzer.o 

C_DEPS += \
./src/HAL_layer/buzzer/buzzer.d 


# Each subdirectory must supply rules for building sources it contributes
src/HAL_layer/buzzer/%.o: ../src/HAL_layer/buzzer/%.c src/HAL_layer/buzzer/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



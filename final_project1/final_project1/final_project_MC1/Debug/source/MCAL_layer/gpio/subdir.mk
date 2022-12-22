################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/MCAL_layer/gpio/gpio.c 

OBJS += \
./source/MCAL_layer/gpio/gpio.o 

C_DEPS += \
./source/MCAL_layer/gpio/gpio.d 


# Each subdirectory must supply rules for building sources it contributes
source/MCAL_layer/gpio/%.o: ../source/MCAL_layer/gpio/%.c source/MCAL_layer/gpio/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



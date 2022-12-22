################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/MCAL_layer/TIMER/Timer.c 

OBJS += \
./src/MCAL_layer/TIMER/Timer.o 

C_DEPS += \
./src/MCAL_layer/TIMER/Timer.d 


# Each subdirectory must supply rules for building sources it contributes
src/MCAL_layer/TIMER/%.o: ../src/MCAL_layer/TIMER/%.c src/MCAL_layer/TIMER/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



# README 

#### Introduction

This project is a controlled by gravity 2048 game based on STM32F103. The sensor, MPU6050, is sticked to the board. So the player can use board to control directly. The target is to move the board to create 2048 block.

#### Requirements

To run this project successfully, you need to have:

- A STM32F103 board
- A MPU6050 sensor with correct pin connection
- keli uversion5 IDE
- MDK version: 5.16
- ST version: 3.5

#### Architecture

The architecture of the project is shown as below:

```
-------Doc
   |    |
   |    ---- README.md
   |    |
   |    ---- readme.txt
   |
   |
   ----Librabies
   |    |
   |    ----CMSIS
   |    |    |
   |    |    ----startup
   |    |    |
   |    |    ----core_cm3.h
   |    |    |
   |    |    ----core_cm3.c
   |    |    |
   |    |    ----system_stm32f10x.h
   |    |    |
   |    |    ----system_stm32f10x.c
   |    |    | 
   |    |    ----stm32f10x.h
   |    |
   |    ----FWlib
   |    |    |
   |    |    ----inc
   |    |    |
   |    |    ----src
   |	|
   ----Listing
   |    |
   |    ----CMSIS
   |    |    |
   |    |    ----startup
   |    |    |
   |    |    ----core_cm3.h
   |    |    |
   |    |    ----core_cm3.c
   |    |    |
   |    |    ----system_stm32f10x.h
   |    |    |
   |    |    ----system_stm32f10x.c
   |    |    | 
   |    |    ----stm32f10x.h
   |    |
   |    ----FWlib
   |    |    |
   |    |    ----inc
   |    |    |
   |    |    ----src
   |    |
   |    ----Output
   |    |    
   |    ----Project
   |    |    |
   |    |    ----RVMDK(uv4)
   |    |        |
   |    |        ----BH-F103.uvprojx
   |    |
   |	----User
   |    |    |
   |    |    ----2048game
   |    |    |    |
   |    |    |    ----2048game.h
   |	|	 |	  |
   |	|	 |	  ----2048game.c
   |	|	 |
   |	|	 ----adc
   |	|	 |	 |
   |	|	 |	 ----bsp_adc.h
   |	|	 |	 |
   |	|	 |	 ----bsp_adc.c
   |	|	 |	
   |	|	 ----Exti
   |	|	 |	 |
   |	|	 |	 ----bsp_exti.h
   |	|	 |	 |
   |	|	 |	 ----bsp_exti.c
   |	|	 |
   |	|	 ----font
   |	|	 |   |
   |	|	 |	 ----fonts.h
   |	|	 |	 |
   |	|	 |	 ----fonts.c
   |	|	 ----i2c
   |	|	 |	 |
   |	|	 |	 ----bsp_i2c.h
   |	|	 |	 |
   |	|	 |	 ----bsp_i2c.c
   |	|	 |
   |	|	 ----Key
   |	|	 |	 |
   | 	|	 |	 ----bsp_key.h
   |	|	 |	 |
   |	|	 |	 ----bsp_key.c
   |	|	 |
   |    |	 ----lcd
   |	|	 |	 |
   |	|	 |	 ----bsp_ili9341_lcd.h
   |	|	 |	 |
   |	|	 |	 ----bsp_ili9341_lcd.c
   |	|    |
   |    |    ----Led
   |	|	 |	 |
   |	|	 |	 ----bsp_led.h
   |	|	 |	 |
   |	|	 |	 ----bsp_led.c
   |    |    |
   |    |    ----MPU6050
   |	|	 |	 |
   |	|	 |	 ----driver
   |	|	 |	 |
   |	|	 |	 ----eMPL-hal
   |	|	 |	 |
   |	|	 |	 ----mllite
   |	|	 |	 |
   |	|	 |	 ----mpl
   |    |    |
   |	|	 ----SysTick
   |	|	 |	 |
   |	|	 |	 ----bsp_SysTick.h
   |	|	 |	 |
   |	|	 |	 ----bsp_SysTIck.c
   |    |    |
   |    |    ----usart
   |	|	 |	 |
   |	|	 |	 ----bsp_usart.h
   |	|	 |	 |
   |	|	 |	 ----bsp_usart.c
   |    |    |
   |    |    ----main.c
   |    |    |
   |    |    ----stm32f10x_conf.h
   |	|    |
   |    |    ----stm32f10x_it.h
   |	|	 |
   |	|	 ----stm32f10x_it.c
```

#### Begin

You just need to open the `BH-F103.uvprojx` in the Projects folder, compllie it and load it to your STM32F103 board.

The instruction of the 2048 game will be displayed on the screen.

Hope you enjoy this game! 
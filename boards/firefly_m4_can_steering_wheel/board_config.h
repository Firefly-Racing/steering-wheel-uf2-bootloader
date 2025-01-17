#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "Adafruit Industries"
#define PRODUCT_NAME "Firefly Steering Wheel"
#define VOLUME_LABEL "FFWHEELBOOT"
#define INDEX_URL "https://github.com/Firefly-Racing/steering-wheel-main-mcu"
#define BOARD_ID "SAME51J19A-FeatherM4-v0"

#define USB_VID 0x239A
#define USB_PID 0x00CD

#define BOARD_NEOPIXEL_PIN PIN_PA05
#define BOARD_NEOPIXEL_COUNT 4

#define BOOT_USART_MODULE                 SERCOM0
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBAMASK_SERCOM0
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD3_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_PA07D_SERCOM0_PAD3
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_UNUSED
#define BOOT_USART_PAD0                   PINMUX_PA04D_SERCOM0_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM0_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM0_GCLK_ID_SLOW

#endif

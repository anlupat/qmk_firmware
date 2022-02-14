# project specific files
SRC = ../../../drivers/led/sn32/matrix_sn32f24xx.c
SRC += rand.c

# MCU name
MCU = SN32F268F

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE  = yes   # Enable Bootmagic Lite
MOUSEKEY_ENABLE   = no    # Mouse keys
EXTRAKEY_ENABLE   = yes   # Audio control and System control
CONSOLE_ENABLE    = no    # Console for debug
COMMAND_ENABLE    = no    # Commands for debug and configuration
NKRO_ENABLE       = yes   # Enable N-Key Rollover
BACKLIGHT_ENABLE  = no    # Enable keyboard backlight functionality
AUDIO_ENABLE      = no    # Audio output
LTO_ENABLE        = no

WAIT_FOR_USB      = no
DIP_SWITCH_ENABLE = yes

# Custom Key and LED matrix handling
CUSTOM_MATRIX     = yes
LED_MATRIX_ENABLE = yes
LED_MATRIX_DRIVER = SN32F26x

# Reduce code size
USE_PROCESS_STACKSIZE    = 0x1E0
USE_EXCEPTIONS_STACKSIZE = 0xF0

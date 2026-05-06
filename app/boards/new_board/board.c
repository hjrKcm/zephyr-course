
#include <zephyr/init.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/kernel.h>

static int pwr_ctrl_init{

    printf("Board Initialized"); 
    return 0; 
}

SYS_INIT(pwr_ctrl_init, POST_KERNEL); 
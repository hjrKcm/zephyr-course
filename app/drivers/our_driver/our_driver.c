#include <zephyr/drivers/sensor.h>
#include <zephyr/logging/log.h>


#define DT_DRV_COMPAT our_driver


LOG_MODULE_REGISTER(our_driver, LOG_LEVEL_DBG);

static int our_driver_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
{
    LOG_INF("Getting channel value for channel %d", chan);
    return 0;
}

static DEVICE_API(sensor,our_driver_api)=
{
    .channel_get = our_driver_channel_get,
};

static int our_driver_init(struct device *dev)
{
    LOG_INF("Initializing our driver");
    return 0;
}
SENSOR_DEVICE_DT_INST_DEFINE(0, our_driver_init, NULL, NULL, NULL, POST_KERNEL, 80, &our_driver_api);
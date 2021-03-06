/**
 * Init the nvml library and make sure
 * the GPU support management API.
 * @param
 **/
void nvml_api_init();

/**
 * Start the monitor
 * @param device the device handle of the device
 * */
void nvml_monitor_start();

/**
 * Stop the monitor
 * @param device the device handle of the device
 * */
void nvml_monitor_stop();

/**
 * Close the nvml API
 **/
void nvml_api_close();


/**
 * Get power usage every time step then push into result
 * @param device the device handle of the index
 * @param time_step time gap of each step
 * @param result constains result(in mW)
**/
void *nvml_power_monitor(void* ptr);


/**
 * integral the power monitor data to get power consuming
 * @param result monitor return datas(in mW)
 * @param time_step time gap of each step
 **/
double integral_power_consuming();
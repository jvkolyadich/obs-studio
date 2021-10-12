#include "obs-frontend-api.h"
#include "obs-module.h"
#include "obs.h"

OBS_DECLARE_MODULE()
OBS_MODULE_AUTHOR("PTZ Controller");
OBS_MODULE_USE_DEFAULT_LOCALE("ptz-controller", "en-US")

bool obs_module_load()
{
	load_ptz_controller_dock();
	return true;
}

void obs_module_unload() {}

MODULE_EXPORT const char *obs_module_description(void)
{
	return obs_module_text("Controller for PTZ cameras");
}

MODULE_EXPORT const char *obs_module_name(void)
{
	return obs_module_text("PTZ Controller");
}

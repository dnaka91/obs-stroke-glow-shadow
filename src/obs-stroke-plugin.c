#include <obs-module.h>

#include "version.h"

extern struct obs_source_info obs_stroke_filter;
extern struct obs_source_info obs_glow_filter;
extern struct obs_source_info obs_shadow_filter;
extern struct obs_source_info obs_stroke_source;
extern struct obs_source_info obs_glow_source;
extern struct obs_source_info obs_shadow_source;

OBS_DECLARE_MODULE();

OBS_MODULE_USE_DEFAULT_LOCALE("obs-stroke-glow-shadow", "en-US");

OBS_MODULE_AUTHOR("FiniteSingularity");

MODULE_EXPORT const char *obs_module_name(void) {
	return obs_module_text("Name");
}

MODULE_EXPORT const char *obs_module_description(void) {
	return obs_module_text("Description");
}

bool obs_module_load(void)
{
	blog(LOG_INFO, "[Stroke Glow Shadow] loaded version %s",
	     PROJECT_VERSION);
	obs_register_source(&obs_stroke_filter);
	obs_register_source(&obs_glow_filter);
	obs_register_source(&obs_shadow_filter);
	obs_register_source(&obs_stroke_source);
	obs_register_source(&obs_glow_source);
	obs_register_source(&obs_shadow_source);
	return true;
}

void obs_module_unload(void) {}

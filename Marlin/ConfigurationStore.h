#ifndef CONFIG_STORE_H
#define CONFIG_STORE_H

#include "Configuration.h"

void Config_ResetDefault();

#ifndef DISABLE_M503
void Config_PrintSettings();
#else
FORCE_INLINE void Config_PrintSettings() {}
#endif

#ifdef EEPROM_SETTINGS
void Config_StoreSettings();
void Config_RetrieveSettings();
void showtotalprints();
void totalprints();
void totalprints_success();
int increasetnp(int);
void resettnp();
int return_tnp();

#else
FORCE_INLINE void Config_StoreSettings() {}
FORCE_INLINE void Config_RetrieveSettings() { Config_ResetDefault(); Config_PrintSettings(); }
#endif

#endif//CONFIG_STORE_H

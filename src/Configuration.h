#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include <SPIFFS.h>
#include <Preferences.h>

class Configuration {
	public:
		Configuration();

		void writeSSID(const char *ssid);
		void writePass(const char *pass);
		void writeHostname(const char *hostname);

		String getSSID();
		String getPass();
		String getHostname();
};

#endif

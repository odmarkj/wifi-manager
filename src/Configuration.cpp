#include "Configuration.h"
#include "Preferences.h"
#include <SPIFFS.h>

Preferences preferences;

const char *hostnameKey = "hostname";
const char *ssidKey = "ssid";
const char *passKey = "path";

Configuration::Configuration() {
	preferences.begin("wifiManager", false);
	if (!SPIFFS.begin(true)) {
		Serial.println("An error has occurred while mounting SPIFFS");
	}
	Serial.println("SPIFFS mounted successfully");

}

void Configuration::writeSSID(const char *ssid) {
	preferences.putString(ssidKey, ssid);
}

void Configuration::writePass(const char *pass) {
	preferences.putString(passKey, pass);
}

void Configuration::writeHostname(const char *hostname) {
	preferences.putString(hostnameKey, hostname);
}

String Configuration::getSSID() {
	return preferences.getString(ssidKey, "");
}

String Configuration::getPass() {
	return preferences.getString(passKey, "");
}

String Configuration::getHostname() {
	return preferences.getString(hostnameKey, "");
}

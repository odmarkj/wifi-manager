#include "Configuration.h"
#include "Preferences.h"

Preferences preferences;

const char *hostnameKey = "hostname";
const char *ssidKey = "ssid";
const char *passKey = "path";

Configuration::Configuration() {
	preferences.begin("wifiManager", false);
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
	returt preferences.getString(ssidKey, "");
}

String Configuration::getPass() {
	returt preferences.getString(passKey, "");
}

String Configuration::getHostname() {
	returt preferences.getString(hostnameKey, "");
}

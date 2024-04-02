#define SECRET_DEVICE_KEY "U4ZBIU3WIB6AGHYU9FUQ";
#define SECRET_SSID "ubcvisitor";
#define SECRET_OPTIONAL_PASS "";

// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "c04e773a-dc09-462d-b7ef-7df3c32961d6";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onFermentationEndChange();
void onColdCrashTimeChange();
void onDiacetylRestTimeChange();
void onDiacetylThreshValChange();
void onMaxPresChange();
void onMaxTempChange();
void onSetValueDensityChange();
void onSetValuePresChange();
void onTempColdCrashChange();
void onTempDiacetylRestChange();
void onTempFermentationChange();
void onTimeLeftChange();
void onProcessNextStageChange();
void onProcessPauseChange();
void onProcessStartChange();
void onProcessStopChange();
void onSendEmailChange();
void onSurpassedMaxPresChange();
void onSurpassedMaxTempChange();
void onValveHopperChange();
void onValveProductChange();
void onValveWasteChange();

String fermentationEnd;
String processStage;
float coldCrashTime;
float diacetylRestTime;
float diacetylThreshVal;
float maxPres;
float maxTemp;
float readingDensity;
float readingPh;
float readingPressure;
float readingTemp;
float setValueDensity;
float setValuePres;
float setValueTemp;
float tempColdCrash;
float tempDiacetylRest;
float tempFermentation;
float timeLeft;
bool processNextStage;
bool processPause;
bool processStart;
bool processStop;
bool sendEmail;
bool surpassedMaxPres;
bool surpassedMaxTemp;
bool systemStatus;
bool valveHopper;
bool valveProduct;
bool valveWaste;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(fermentationEnd, READWRITE, ON_CHANGE, onFermentationEndChange);
  ArduinoCloud.addProperty(processStage, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(coldCrashTime, READWRITE, ON_CHANGE, onColdCrashTimeChange);
  ArduinoCloud.addProperty(diacetylRestTime, READWRITE, ON_CHANGE, onDiacetylRestTimeChange);
  ArduinoCloud.addProperty(diacetylThreshVal, READWRITE, ON_CHANGE, onDiacetylThreshValChange);
  ArduinoCloud.addProperty(maxPres, READWRITE, ON_CHANGE, onMaxPresChange);
  ArduinoCloud.addProperty(maxTemp, READWRITE, ON_CHANGE, onMaxTempChange);
  ArduinoCloud.addProperty(readingDensity, READ, 1 * SECONDS, NULL);
  ArduinoCloud.addProperty(readingPh, READ, 1 * SECONDS, NULL);
  ArduinoCloud.addProperty(readingPressure, READ, 1 * SECONDS, NULL);
  ArduinoCloud.addProperty(readingTemp, READ, 1 * SECONDS, NULL);
  ArduinoCloud.addProperty(setValueDensity, READWRITE, ON_CHANGE, onSetValueDensityChange);
  ArduinoCloud.addProperty(setValuePres, READWRITE, ON_CHANGE, onSetValuePresChange);
  ArduinoCloud.addProperty(setValueTemp, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(tempColdCrash, READWRITE, ON_CHANGE, onTempColdCrashChange);
  ArduinoCloud.addProperty(tempDiacetylRest, READWRITE, ON_CHANGE, onTempDiacetylRestChange);
  ArduinoCloud.addProperty(tempFermentation, READWRITE, ON_CHANGE, onTempFermentationChange);
  ArduinoCloud.addProperty(timeLeft, READWRITE, ON_CHANGE, onTimeLeftChange);
  ArduinoCloud.addProperty(processNextStage, READWRITE, ON_CHANGE, onProcessNextStageChange);
  ArduinoCloud.addProperty(processPause, READWRITE, ON_CHANGE, onProcessPauseChange);
  ArduinoCloud.addProperty(processStart, READWRITE, ON_CHANGE, onProcessStartChange);
  ArduinoCloud.addProperty(processStop, READWRITE, ON_CHANGE, onProcessStopChange);
  ArduinoCloud.addProperty(sendEmail, READWRITE, ON_CHANGE, onSendEmailChange);
  ArduinoCloud.addProperty(surpassedMaxPres, READWRITE, 1 * SECONDS, onSurpassedMaxPresChange);
  ArduinoCloud.addProperty(surpassedMaxTemp, READWRITE, 1 * SECONDS, onSurpassedMaxTempChange);
  ArduinoCloud.addProperty(systemStatus, READ, 1 * SECONDS, NULL);
  ArduinoCloud.addProperty(valveHopper, READWRITE, ON_CHANGE, onValveHopperChange);
  ArduinoCloud.addProperty(valveProduct, READWRITE, ON_CHANGE, onValveProductChange);
  ArduinoCloud.addProperty(valveWaste, READWRITE, ON_CHANGE, onValveWasteChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);

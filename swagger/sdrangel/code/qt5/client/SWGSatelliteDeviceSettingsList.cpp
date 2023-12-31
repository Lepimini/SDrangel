/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 7.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGSatelliteDeviceSettingsList.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGSatelliteDeviceSettingsList::SWGSatelliteDeviceSettingsList(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSatelliteDeviceSettingsList::SWGSatelliteDeviceSettingsList() {
    satellite = nullptr;
    m_satellite_isSet = false;
    device_settings = nullptr;
    m_device_settings_isSet = false;
}

SWGSatelliteDeviceSettingsList::~SWGSatelliteDeviceSettingsList() {
    this->cleanup();
}

void
SWGSatelliteDeviceSettingsList::init() {
    satellite = new QString("");
    m_satellite_isSet = false;
    device_settings = new QList<SWGSatelliteDeviceSettings*>();
    m_device_settings_isSet = false;
}

void
SWGSatelliteDeviceSettingsList::cleanup() {
    if(satellite != nullptr) { 
        delete satellite;
    }
    if(device_settings != nullptr) { 
        auto arr = device_settings;
        for(auto o: *arr) { 
            delete o;
        }
        delete device_settings;
    }
}

SWGSatelliteDeviceSettingsList*
SWGSatelliteDeviceSettingsList::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSatelliteDeviceSettingsList::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&satellite, pJson["satellite"], "QString", "QString");
    
    
    ::SWGSDRangel::setValue(&device_settings, pJson["deviceSettings"], "QList", "SWGSatelliteDeviceSettings");
}

QString
SWGSatelliteDeviceSettingsList::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGSatelliteDeviceSettingsList::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(satellite != nullptr && *satellite != QString("")){
        toJsonValue(QString("satellite"), satellite, obj, QString("QString"));
    }
    if(device_settings && device_settings->size() > 0){
        toJsonArray((QList<void*>*)device_settings, obj, "deviceSettings", "SWGSatelliteDeviceSettings");
    }

    return obj;
}

QString*
SWGSatelliteDeviceSettingsList::getSatellite() {
    return satellite;
}
void
SWGSatelliteDeviceSettingsList::setSatellite(QString* satellite) {
    this->satellite = satellite;
    this->m_satellite_isSet = true;
}

QList<SWGSatelliteDeviceSettings*>*
SWGSatelliteDeviceSettingsList::getDeviceSettings() {
    return device_settings;
}
void
SWGSatelliteDeviceSettingsList::setDeviceSettings(QList<SWGSatelliteDeviceSettings*>* device_settings) {
    this->device_settings = device_settings;
    this->m_device_settings_isSet = true;
}


bool
SWGSatelliteDeviceSettingsList::isSet(){
    bool isObjectUpdated = false;
    do{
        if(satellite && *satellite != QString("")){
            isObjectUpdated = true; break;
        }
        if(device_settings && (device_settings->size() > 0)){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}


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


#include "SWGAMBEActions.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGAMBEActions::SWGAMBEActions(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAMBEActions::SWGAMBEActions() {
    update_devices = nullptr;
    m_update_devices_isSet = false;
    remove_all = 0;
    m_remove_all_isSet = false;
}

SWGAMBEActions::~SWGAMBEActions() {
    this->cleanup();
}

void
SWGAMBEActions::init() {
    update_devices = new SWGAMBEDevices();
    m_update_devices_isSet = false;
    remove_all = 0;
    m_remove_all_isSet = false;
}

void
SWGAMBEActions::cleanup() {
    if(update_devices != nullptr) { 
        delete update_devices;
    }

}

SWGAMBEActions*
SWGAMBEActions::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAMBEActions::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&update_devices, pJson["updateDevices"], "SWGAMBEDevices", "SWGAMBEDevices");
    
    ::SWGSDRangel::setValue(&remove_all, pJson["removeAll"], "qint32", "");
    
}

QString
SWGAMBEActions::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGAMBEActions::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if((update_devices != nullptr) && (update_devices->isSet())){
        toJsonValue(QString("updateDevices"), update_devices, obj, QString("SWGAMBEDevices"));
    }
    if(m_remove_all_isSet){
        obj->insert("removeAll", QJsonValue(remove_all));
    }

    return obj;
}

SWGAMBEDevices*
SWGAMBEActions::getUpdateDevices() {
    return update_devices;
}
void
SWGAMBEActions::setUpdateDevices(SWGAMBEDevices* update_devices) {
    this->update_devices = update_devices;
    this->m_update_devices_isSet = true;
}

qint32
SWGAMBEActions::getRemoveAll() {
    return remove_all;
}
void
SWGAMBEActions::setRemoveAll(qint32 remove_all) {
    this->remove_all = remove_all;
    this->m_remove_all_isSet = true;
}


bool
SWGAMBEActions::isSet(){
    bool isObjectUpdated = false;
    do{
        if(update_devices && update_devices->isSet()){
            isObjectUpdated = true; break;
        }
        if(m_remove_all_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}


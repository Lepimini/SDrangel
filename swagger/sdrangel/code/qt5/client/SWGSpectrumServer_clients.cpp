/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 6.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGSpectrumServer_clients.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGSpectrumServer_clients::SWGSpectrumServer_clients(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSpectrumServer_clients::SWGSpectrumServer_clients() {
    address = nullptr;
    m_address_isSet = false;
    port = 0;
    m_port_isSet = false;
}

SWGSpectrumServer_clients::~SWGSpectrumServer_clients() {
    this->cleanup();
}

void
SWGSpectrumServer_clients::init() {
    address = new QString("");
    m_address_isSet = false;
    port = 0;
    m_port_isSet = false;
}

void
SWGSpectrumServer_clients::cleanup() {
    if(address != nullptr) { 
        delete address;
    }

}

SWGSpectrumServer_clients*
SWGSpectrumServer_clients::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSpectrumServer_clients::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&address, pJson["address"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&port, pJson["port"], "qint32", "");
    
}

QString
SWGSpectrumServer_clients::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGSpectrumServer_clients::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(address != nullptr && *address != QString("")){
        toJsonValue(QString("address"), address, obj, QString("QString"));
    }
    if(m_port_isSet){
        obj->insert("port", QJsonValue(port));
    }

    return obj;
}

QString*
SWGSpectrumServer_clients::getAddress() {
    return address;
}
void
SWGSpectrumServer_clients::setAddress(QString* address) {
    this->address = address;
    this->m_address_isSet = true;
}

qint32
SWGSpectrumServer_clients::getPort() {
    return port;
}
void
SWGSpectrumServer_clients::setPort(qint32 port) {
    this->port = port;
    this->m_port_isSet = true;
}


bool
SWGSpectrumServer_clients::isSet(){
    bool isObjectUpdated = false;
    do{
        if(address && *address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_port_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}


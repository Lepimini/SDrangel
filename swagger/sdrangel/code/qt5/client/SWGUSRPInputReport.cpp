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


#include "SWGUSRPInputReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGUSRPInputReport::SWGUSRPInputReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUSRPInputReport::SWGUSRPInputReport() {
    success = 0;
    m_success_isSet = false;
    stream_active = 0;
    m_stream_active_isSet = false;
    overrun_count = 0;
    m_overrun_count_isSet = false;
    timeout_count = 0;
    m_timeout_count_isSet = false;
}

SWGUSRPInputReport::~SWGUSRPInputReport() {
    this->cleanup();
}

void
SWGUSRPInputReport::init() {
    success = 0;
    m_success_isSet = false;
    stream_active = 0;
    m_stream_active_isSet = false;
    overrun_count = 0;
    m_overrun_count_isSet = false;
    timeout_count = 0;
    m_timeout_count_isSet = false;
}

void
SWGUSRPInputReport::cleanup() {




}

SWGUSRPInputReport*
SWGUSRPInputReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUSRPInputReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&success, pJson["success"], "qint32", "");
    
    ::SWGSDRangel::setValue(&stream_active, pJson["streamActive"], "qint32", "");
    
    ::SWGSDRangel::setValue(&overrun_count, pJson["overrunCount"], "qint32", "");
    
    ::SWGSDRangel::setValue(&timeout_count, pJson["timeoutCount"], "qint32", "");
    
}

QString
SWGUSRPInputReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGUSRPInputReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_success_isSet){
        obj->insert("success", QJsonValue(success));
    }
    if(m_stream_active_isSet){
        obj->insert("streamActive", QJsonValue(stream_active));
    }
    if(m_overrun_count_isSet){
        obj->insert("overrunCount", QJsonValue(overrun_count));
    }
    if(m_timeout_count_isSet){
        obj->insert("timeoutCount", QJsonValue(timeout_count));
    }

    return obj;
}

qint32
SWGUSRPInputReport::getSuccess() {
    return success;
}
void
SWGUSRPInputReport::setSuccess(qint32 success) {
    this->success = success;
    this->m_success_isSet = true;
}

qint32
SWGUSRPInputReport::getStreamActive() {
    return stream_active;
}
void
SWGUSRPInputReport::setStreamActive(qint32 stream_active) {
    this->stream_active = stream_active;
    this->m_stream_active_isSet = true;
}

qint32
SWGUSRPInputReport::getOverrunCount() {
    return overrun_count;
}
void
SWGUSRPInputReport::setOverrunCount(qint32 overrun_count) {
    this->overrun_count = overrun_count;
    this->m_overrun_count_isSet = true;
}

qint32
SWGUSRPInputReport::getTimeoutCount() {
    return timeout_count;
}
void
SWGUSRPInputReport::setTimeoutCount(qint32 timeout_count) {
    this->timeout_count = timeout_count;
    this->m_timeout_count_isSet = true;
}


bool
SWGUSRPInputReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_success_isSet){
            isObjectUpdated = true; break;
        }
        if(m_stream_active_isSet){
            isObjectUpdated = true; break;
        }
        if(m_overrun_count_isSet){
            isObjectUpdated = true; break;
        }
        if(m_timeout_count_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}


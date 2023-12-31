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


#include "SWGSoapySDRFrequencySetting.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGSoapySDRFrequencySetting::SWGSoapySDRFrequencySetting(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSoapySDRFrequencySetting::SWGSoapySDRFrequencySetting() {
    name = nullptr;
    m_name_isSet = false;
    ranges = nullptr;
    m_ranges_isSet = false;
}

SWGSoapySDRFrequencySetting::~SWGSoapySDRFrequencySetting() {
    this->cleanup();
}

void
SWGSoapySDRFrequencySetting::init() {
    name = new QString("");
    m_name_isSet = false;
    ranges = new QList<SWGRangeFloat*>();
    m_ranges_isSet = false;
}

void
SWGSoapySDRFrequencySetting::cleanup() {
    if(name != nullptr) { 
        delete name;
    }
    if(ranges != nullptr) { 
        auto arr = ranges;
        for(auto o: *arr) { 
            delete o;
        }
        delete ranges;
    }
}

SWGSoapySDRFrequencySetting*
SWGSoapySDRFrequencySetting::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSoapySDRFrequencySetting::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&name, pJson["name"], "QString", "QString");
    
    
    ::SWGSDRangel::setValue(&ranges, pJson["ranges"], "QList", "SWGRangeFloat");
}

QString
SWGSoapySDRFrequencySetting::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGSoapySDRFrequencySetting::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(ranges && ranges->size() > 0){
        toJsonArray((QList<void*>*)ranges, obj, "ranges", "SWGRangeFloat");
    }

    return obj;
}

QString*
SWGSoapySDRFrequencySetting::getName() {
    return name;
}
void
SWGSoapySDRFrequencySetting::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

QList<SWGRangeFloat*>*
SWGSoapySDRFrequencySetting::getRanges() {
    return ranges;
}
void
SWGSoapySDRFrequencySetting::setRanges(QList<SWGRangeFloat*>* ranges) {
    this->ranges = ranges;
    this->m_ranges_isSet = true;
}


bool
SWGSoapySDRFrequencySetting::isSet(){
    bool isObjectUpdated = false;
    do{
        if(name && *name != QString("")){
            isObjectUpdated = true; break;
        }
        if(ranges && (ranges->size() > 0)){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}


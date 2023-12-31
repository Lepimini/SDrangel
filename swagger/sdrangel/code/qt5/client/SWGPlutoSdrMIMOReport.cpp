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


#include "SWGPlutoSdrMIMOReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGPlutoSdrMIMOReport::SWGPlutoSdrMIMOReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPlutoSdrMIMOReport::SWGPlutoSdrMIMOReport() {
    adc_rate = 0;
    m_adc_rate_isSet = false;
    dac_rate = 0;
    m_dac_rate_isSet = false;
    rx0_gain_db = 0;
    m_rx0_gain_db_isSet = false;
    rx1_gain_db = 0;
    m_rx1_gain_db_isSet = false;
    rssi_rx0 = nullptr;
    m_rssi_rx0_isSet = false;
    rssi_rx1 = nullptr;
    m_rssi_rx1_isSet = false;
    rssi_tx0 = nullptr;
    m_rssi_tx0_isSet = false;
    rssi_tx1 = nullptr;
    m_rssi_tx1_isSet = false;
}

SWGPlutoSdrMIMOReport::~SWGPlutoSdrMIMOReport() {
    this->cleanup();
}

void
SWGPlutoSdrMIMOReport::init() {
    adc_rate = 0;
    m_adc_rate_isSet = false;
    dac_rate = 0;
    m_dac_rate_isSet = false;
    rx0_gain_db = 0;
    m_rx0_gain_db_isSet = false;
    rx1_gain_db = 0;
    m_rx1_gain_db_isSet = false;
    rssi_rx0 = new QString("");
    m_rssi_rx0_isSet = false;
    rssi_rx1 = new QString("");
    m_rssi_rx1_isSet = false;
    rssi_tx0 = new QString("");
    m_rssi_tx0_isSet = false;
    rssi_tx1 = new QString("");
    m_rssi_tx1_isSet = false;
}

void
SWGPlutoSdrMIMOReport::cleanup() {




    if(rssi_rx0 != nullptr) { 
        delete rssi_rx0;
    }
    if(rssi_rx1 != nullptr) { 
        delete rssi_rx1;
    }
    if(rssi_tx0 != nullptr) { 
        delete rssi_tx0;
    }
    if(rssi_tx1 != nullptr) { 
        delete rssi_tx1;
    }
}

SWGPlutoSdrMIMOReport*
SWGPlutoSdrMIMOReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPlutoSdrMIMOReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&adc_rate, pJson["adcRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dac_rate, pJson["dacRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rx0_gain_db, pJson["rx0GainDB"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rx1_gain_db, pJson["rx1GainDB"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rssi_rx0, pJson["rssiRx0"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&rssi_rx1, pJson["rssiRx1"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&rssi_tx0, pJson["rssiTx0"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&rssi_tx1, pJson["rssiTx1"], "QString", "QString");
    
}

QString
SWGPlutoSdrMIMOReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGPlutoSdrMIMOReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_adc_rate_isSet){
        obj->insert("adcRate", QJsonValue(adc_rate));
    }
    if(m_dac_rate_isSet){
        obj->insert("dacRate", QJsonValue(dac_rate));
    }
    if(m_rx0_gain_db_isSet){
        obj->insert("rx0GainDB", QJsonValue(rx0_gain_db));
    }
    if(m_rx1_gain_db_isSet){
        obj->insert("rx1GainDB", QJsonValue(rx1_gain_db));
    }
    if(rssi_rx0 != nullptr && *rssi_rx0 != QString("")){
        toJsonValue(QString("rssiRx0"), rssi_rx0, obj, QString("QString"));
    }
    if(rssi_rx1 != nullptr && *rssi_rx1 != QString("")){
        toJsonValue(QString("rssiRx1"), rssi_rx1, obj, QString("QString"));
    }
    if(rssi_tx0 != nullptr && *rssi_tx0 != QString("")){
        toJsonValue(QString("rssiTx0"), rssi_tx0, obj, QString("QString"));
    }
    if(rssi_tx1 != nullptr && *rssi_tx1 != QString("")){
        toJsonValue(QString("rssiTx1"), rssi_tx1, obj, QString("QString"));
    }

    return obj;
}

qint32
SWGPlutoSdrMIMOReport::getAdcRate() {
    return adc_rate;
}
void
SWGPlutoSdrMIMOReport::setAdcRate(qint32 adc_rate) {
    this->adc_rate = adc_rate;
    this->m_adc_rate_isSet = true;
}

qint32
SWGPlutoSdrMIMOReport::getDacRate() {
    return dac_rate;
}
void
SWGPlutoSdrMIMOReport::setDacRate(qint32 dac_rate) {
    this->dac_rate = dac_rate;
    this->m_dac_rate_isSet = true;
}

qint32
SWGPlutoSdrMIMOReport::getRx0GainDb() {
    return rx0_gain_db;
}
void
SWGPlutoSdrMIMOReport::setRx0GainDb(qint32 rx0_gain_db) {
    this->rx0_gain_db = rx0_gain_db;
    this->m_rx0_gain_db_isSet = true;
}

qint32
SWGPlutoSdrMIMOReport::getRx1GainDb() {
    return rx1_gain_db;
}
void
SWGPlutoSdrMIMOReport::setRx1GainDb(qint32 rx1_gain_db) {
    this->rx1_gain_db = rx1_gain_db;
    this->m_rx1_gain_db_isSet = true;
}

QString*
SWGPlutoSdrMIMOReport::getRssiRx0() {
    return rssi_rx0;
}
void
SWGPlutoSdrMIMOReport::setRssiRx0(QString* rssi_rx0) {
    this->rssi_rx0 = rssi_rx0;
    this->m_rssi_rx0_isSet = true;
}

QString*
SWGPlutoSdrMIMOReport::getRssiRx1() {
    return rssi_rx1;
}
void
SWGPlutoSdrMIMOReport::setRssiRx1(QString* rssi_rx1) {
    this->rssi_rx1 = rssi_rx1;
    this->m_rssi_rx1_isSet = true;
}

QString*
SWGPlutoSdrMIMOReport::getRssiTx0() {
    return rssi_tx0;
}
void
SWGPlutoSdrMIMOReport::setRssiTx0(QString* rssi_tx0) {
    this->rssi_tx0 = rssi_tx0;
    this->m_rssi_tx0_isSet = true;
}

QString*
SWGPlutoSdrMIMOReport::getRssiTx1() {
    return rssi_tx1;
}
void
SWGPlutoSdrMIMOReport::setRssiTx1(QString* rssi_tx1) {
    this->rssi_tx1 = rssi_tx1;
    this->m_rssi_tx1_isSet = true;
}


bool
SWGPlutoSdrMIMOReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_adc_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_dac_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rx0_gain_db_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rx1_gain_db_isSet){
            isObjectUpdated = true; break;
        }
        if(rssi_rx0 && *rssi_rx0 != QString("")){
            isObjectUpdated = true; break;
        }
        if(rssi_rx1 && *rssi_rx1 != QString("")){
            isObjectUpdated = true; break;
        }
        if(rssi_tx0 && *rssi_tx0 != QString("")){
            isObjectUpdated = true; break;
        }
        if(rssi_tx1 && *rssi_tx1 != QString("")){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}


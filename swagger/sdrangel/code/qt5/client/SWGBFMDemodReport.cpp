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


#include "SWGBFMDemodReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGBFMDemodReport::SWGBFMDemodReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGBFMDemodReport::SWGBFMDemodReport() {
    channel_power_db = 0.0f;
    m_channel_power_db_isSet = false;
    squelch = 0;
    m_squelch_isSet = false;
    audio_sample_rate = 0;
    m_audio_sample_rate_isSet = false;
    channel_sample_rate = 0;
    m_channel_sample_rate_isSet = false;
    pilot_locked = 0;
    m_pilot_locked_isSet = false;
    pilot_power_db = 0.0f;
    m_pilot_power_db_isSet = false;
    rds_report = nullptr;
    m_rds_report_isSet = false;
}

SWGBFMDemodReport::~SWGBFMDemodReport() {
    this->cleanup();
}

void
SWGBFMDemodReport::init() {
    channel_power_db = 0.0f;
    m_channel_power_db_isSet = false;
    squelch = 0;
    m_squelch_isSet = false;
    audio_sample_rate = 0;
    m_audio_sample_rate_isSet = false;
    channel_sample_rate = 0;
    m_channel_sample_rate_isSet = false;
    pilot_locked = 0;
    m_pilot_locked_isSet = false;
    pilot_power_db = 0.0f;
    m_pilot_power_db_isSet = false;
    rds_report = new SWGRDSReport();
    m_rds_report_isSet = false;
}

void
SWGBFMDemodReport::cleanup() {






    if(rds_report != nullptr) { 
        delete rds_report;
    }
}

SWGBFMDemodReport*
SWGBFMDemodReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGBFMDemodReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&channel_power_db, pJson["channelPowerDB"], "float", "");
    
    ::SWGSDRangel::setValue(&squelch, pJson["squelch"], "qint32", "");
    
    ::SWGSDRangel::setValue(&audio_sample_rate, pJson["audioSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&channel_sample_rate, pJson["channelSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&pilot_locked, pJson["pilotLocked"], "qint32", "");
    
    ::SWGSDRangel::setValue(&pilot_power_db, pJson["pilotPowerDB"], "float", "");
    
    ::SWGSDRangel::setValue(&rds_report, pJson["rdsReport"], "SWGRDSReport", "SWGRDSReport");
    
}

QString
SWGBFMDemodReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGBFMDemodReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_channel_power_db_isSet){
        obj->insert("channelPowerDB", QJsonValue(channel_power_db));
    }
    if(m_squelch_isSet){
        obj->insert("squelch", QJsonValue(squelch));
    }
    if(m_audio_sample_rate_isSet){
        obj->insert("audioSampleRate", QJsonValue(audio_sample_rate));
    }
    if(m_channel_sample_rate_isSet){
        obj->insert("channelSampleRate", QJsonValue(channel_sample_rate));
    }
    if(m_pilot_locked_isSet){
        obj->insert("pilotLocked", QJsonValue(pilot_locked));
    }
    if(m_pilot_power_db_isSet){
        obj->insert("pilotPowerDB", QJsonValue(pilot_power_db));
    }
    if((rds_report != nullptr) && (rds_report->isSet())){
        toJsonValue(QString("rdsReport"), rds_report, obj, QString("SWGRDSReport"));
    }

    return obj;
}

float
SWGBFMDemodReport::getChannelPowerDb() {
    return channel_power_db;
}
void
SWGBFMDemodReport::setChannelPowerDb(float channel_power_db) {
    this->channel_power_db = channel_power_db;
    this->m_channel_power_db_isSet = true;
}

qint32
SWGBFMDemodReport::getSquelch() {
    return squelch;
}
void
SWGBFMDemodReport::setSquelch(qint32 squelch) {
    this->squelch = squelch;
    this->m_squelch_isSet = true;
}

qint32
SWGBFMDemodReport::getAudioSampleRate() {
    return audio_sample_rate;
}
void
SWGBFMDemodReport::setAudioSampleRate(qint32 audio_sample_rate) {
    this->audio_sample_rate = audio_sample_rate;
    this->m_audio_sample_rate_isSet = true;
}

qint32
SWGBFMDemodReport::getChannelSampleRate() {
    return channel_sample_rate;
}
void
SWGBFMDemodReport::setChannelSampleRate(qint32 channel_sample_rate) {
    this->channel_sample_rate = channel_sample_rate;
    this->m_channel_sample_rate_isSet = true;
}

qint32
SWGBFMDemodReport::getPilotLocked() {
    return pilot_locked;
}
void
SWGBFMDemodReport::setPilotLocked(qint32 pilot_locked) {
    this->pilot_locked = pilot_locked;
    this->m_pilot_locked_isSet = true;
}

float
SWGBFMDemodReport::getPilotPowerDb() {
    return pilot_power_db;
}
void
SWGBFMDemodReport::setPilotPowerDb(float pilot_power_db) {
    this->pilot_power_db = pilot_power_db;
    this->m_pilot_power_db_isSet = true;
}

SWGRDSReport*
SWGBFMDemodReport::getRdsReport() {
    return rds_report;
}
void
SWGBFMDemodReport::setRdsReport(SWGRDSReport* rds_report) {
    this->rds_report = rds_report;
    this->m_rds_report_isSet = true;
}


bool
SWGBFMDemodReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_channel_power_db_isSet){
            isObjectUpdated = true; break;
        }
        if(m_squelch_isSet){
            isObjectUpdated = true; break;
        }
        if(m_audio_sample_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_channel_sample_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_pilot_locked_isSet){
            isObjectUpdated = true; break;
        }
        if(m_pilot_power_db_isSet){
            isObjectUpdated = true; break;
        }
        if(rds_report && rds_report->isSet()){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}


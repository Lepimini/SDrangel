/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.6.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGSoapySDROutputSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGSoapySDROutputSettings::SWGSoapySDROutputSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSoapySDROutputSettings::SWGSoapySDROutputSettings() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    log2_interp = 0;
    m_log2_interp_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    antenna = nullptr;
    m_antenna_isSet = false;
    bandwidth = 0;
    m_bandwidth_isSet = false;
    tunable_elements = nullptr;
    m_tunable_elements_isSet = false;
    global_gain = 0;
    m_global_gain_isSet = false;
    individual_gains = nullptr;
    m_individual_gains_isSet = false;
    auto_gain = 0;
    m_auto_gain_isSet = false;
    auto_dc_correction = 0;
    m_auto_dc_correction_isSet = false;
    auto_iq_correction = 0;
    m_auto_iq_correction_isSet = false;
    dc_correction = nullptr;
    m_dc_correction_isSet = false;
    iq_correction = nullptr;
    m_iq_correction_isSet = false;
    stream_arg_settings = nullptr;
    m_stream_arg_settings_isSet = false;
    device_arg_settings = nullptr;
    m_device_arg_settings_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

SWGSoapySDROutputSettings::~SWGSoapySDROutputSettings() {
    this->cleanup();
}

void
SWGSoapySDROutputSettings::init() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    log2_interp = 0;
    m_log2_interp_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    antenna = new QString("");
    m_antenna_isSet = false;
    bandwidth = 0;
    m_bandwidth_isSet = false;
    tunable_elements = new QList<SWGArgValue*>();
    m_tunable_elements_isSet = false;
    global_gain = 0;
    m_global_gain_isSet = false;
    individual_gains = new QList<SWGArgValue*>();
    m_individual_gains_isSet = false;
    auto_gain = 0;
    m_auto_gain_isSet = false;
    auto_dc_correction = 0;
    m_auto_dc_correction_isSet = false;
    auto_iq_correction = 0;
    m_auto_iq_correction_isSet = false;
    dc_correction = new SWGComplex();
    m_dc_correction_isSet = false;
    iq_correction = new SWGComplex();
    m_iq_correction_isSet = false;
    stream_arg_settings = new QList<SWGArgValue*>();
    m_stream_arg_settings_isSet = false;
    device_arg_settings = new QList<SWGArgValue*>();
    m_device_arg_settings_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

void
SWGSoapySDROutputSettings::cleanup() {






    if(antenna != nullptr) { 
        delete antenna;
    }

    if(tunable_elements != nullptr) { 
        auto arr = tunable_elements;
        for(auto o: *arr) { 
            delete o;
        }
        delete tunable_elements;
    }

    if(individual_gains != nullptr) { 
        auto arr = individual_gains;
        for(auto o: *arr) { 
            delete o;
        }
        delete individual_gains;
    }



    if(dc_correction != nullptr) { 
        delete dc_correction;
    }
    if(iq_correction != nullptr) { 
        delete iq_correction;
    }
    if(stream_arg_settings != nullptr) { 
        auto arr = stream_arg_settings;
        for(auto o: *arr) { 
            delete o;
        }
        delete stream_arg_settings;
    }
    if(device_arg_settings != nullptr) { 
        auto arr = device_arg_settings;
        for(auto o: *arr) { 
            delete o;
        }
        delete device_arg_settings;
    }

    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }


}

SWGSoapySDROutputSettings*
SWGSoapySDROutputSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSoapySDROutputSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&l_oppm_tenths, pJson["LOppmTenths"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dev_sample_rate, pJson["devSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_interp, pJson["log2Interp"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_mode, pJson["transverterMode"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_delta_frequency, pJson["transverterDeltaFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&antenna, pJson["antenna"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&bandwidth, pJson["bandwidth"], "qint32", "");
    
    
    ::SWGSDRangel::setValue(&tunable_elements, pJson["tunableElements"], "QList", "SWGArgValue");
    ::SWGSDRangel::setValue(&global_gain, pJson["globalGain"], "qint32", "");
    
    
    ::SWGSDRangel::setValue(&individual_gains, pJson["individualGains"], "QList", "SWGArgValue");
    ::SWGSDRangel::setValue(&auto_gain, pJson["autoGain"], "qint32", "");
    
    ::SWGSDRangel::setValue(&auto_dc_correction, pJson["autoDCCorrection"], "qint32", "");
    
    ::SWGSDRangel::setValue(&auto_iq_correction, pJson["autoIQCorrection"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dc_correction, pJson["dcCorrection"], "SWGComplex", "SWGComplex");
    
    ::SWGSDRangel::setValue(&iq_correction, pJson["iqCorrection"], "SWGComplex", "SWGComplex");
    
    
    ::SWGSDRangel::setValue(&stream_arg_settings, pJson["streamArgSettings"], "QList", "SWGArgValue");
    
    ::SWGSDRangel::setValue(&device_arg_settings, pJson["deviceArgSettings"], "QList", "SWGArgValue");
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
}

QString
SWGSoapySDROutputSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGSoapySDROutputSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_l_oppm_tenths_isSet){
        obj->insert("LOppmTenths", QJsonValue(l_oppm_tenths));
    }
    if(m_dev_sample_rate_isSet){
        obj->insert("devSampleRate", QJsonValue(dev_sample_rate));
    }
    if(m_log2_interp_isSet){
        obj->insert("log2Interp", QJsonValue(log2_interp));
    }
    if(m_transverter_mode_isSet){
        obj->insert("transverterMode", QJsonValue(transverter_mode));
    }
    if(m_transverter_delta_frequency_isSet){
        obj->insert("transverterDeltaFrequency", QJsonValue(transverter_delta_frequency));
    }
    if(antenna != nullptr && *antenna != QString("")){
        toJsonValue(QString("antenna"), antenna, obj, QString("QString"));
    }
    if(m_bandwidth_isSet){
        obj->insert("bandwidth", QJsonValue(bandwidth));
    }
    if(tunable_elements->size() > 0){
        toJsonArray((QList<void*>*)tunable_elements, obj, "tunableElements", "SWGArgValue");
    }
    if(m_global_gain_isSet){
        obj->insert("globalGain", QJsonValue(global_gain));
    }
    if(individual_gains->size() > 0){
        toJsonArray((QList<void*>*)individual_gains, obj, "individualGains", "SWGArgValue");
    }
    if(m_auto_gain_isSet){
        obj->insert("autoGain", QJsonValue(auto_gain));
    }
    if(m_auto_dc_correction_isSet){
        obj->insert("autoDCCorrection", QJsonValue(auto_dc_correction));
    }
    if(m_auto_iq_correction_isSet){
        obj->insert("autoIQCorrection", QJsonValue(auto_iq_correction));
    }
    if((dc_correction != nullptr) && (dc_correction->isSet())){
        toJsonValue(QString("dcCorrection"), dc_correction, obj, QString("SWGComplex"));
    }
    if((iq_correction != nullptr) && (iq_correction->isSet())){
        toJsonValue(QString("iqCorrection"), iq_correction, obj, QString("SWGComplex"));
    }
    if(stream_arg_settings->size() > 0){
        toJsonArray((QList<void*>*)stream_arg_settings, obj, "streamArgSettings", "SWGArgValue");
    }
    if(device_arg_settings->size() > 0){
        toJsonArray((QList<void*>*)device_arg_settings, obj, "deviceArgSettings", "SWGArgValue");
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }

    return obj;
}

qint64
SWGSoapySDROutputSettings::getCenterFrequency() {
    return center_frequency;
}
void
SWGSoapySDROutputSettings::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint32
SWGSoapySDROutputSettings::getLOppmTenths() {
    return l_oppm_tenths;
}
void
SWGSoapySDROutputSettings::setLOppmTenths(qint32 l_oppm_tenths) {
    this->l_oppm_tenths = l_oppm_tenths;
    this->m_l_oppm_tenths_isSet = true;
}

qint32
SWGSoapySDROutputSettings::getDevSampleRate() {
    return dev_sample_rate;
}
void
SWGSoapySDROutputSettings::setDevSampleRate(qint32 dev_sample_rate) {
    this->dev_sample_rate = dev_sample_rate;
    this->m_dev_sample_rate_isSet = true;
}

qint32
SWGSoapySDROutputSettings::getLog2Interp() {
    return log2_interp;
}
void
SWGSoapySDROutputSettings::setLog2Interp(qint32 log2_interp) {
    this->log2_interp = log2_interp;
    this->m_log2_interp_isSet = true;
}

qint32
SWGSoapySDROutputSettings::getTransverterMode() {
    return transverter_mode;
}
void
SWGSoapySDROutputSettings::setTransverterMode(qint32 transverter_mode) {
    this->transverter_mode = transverter_mode;
    this->m_transverter_mode_isSet = true;
}

qint64
SWGSoapySDROutputSettings::getTransverterDeltaFrequency() {
    return transverter_delta_frequency;
}
void
SWGSoapySDROutputSettings::setTransverterDeltaFrequency(qint64 transverter_delta_frequency) {
    this->transverter_delta_frequency = transverter_delta_frequency;
    this->m_transverter_delta_frequency_isSet = true;
}

QString*
SWGSoapySDROutputSettings::getAntenna() {
    return antenna;
}
void
SWGSoapySDROutputSettings::setAntenna(QString* antenna) {
    this->antenna = antenna;
    this->m_antenna_isSet = true;
}

qint32
SWGSoapySDROutputSettings::getBandwidth() {
    return bandwidth;
}
void
SWGSoapySDROutputSettings::setBandwidth(qint32 bandwidth) {
    this->bandwidth = bandwidth;
    this->m_bandwidth_isSet = true;
}

QList<SWGArgValue*>*
SWGSoapySDROutputSettings::getTunableElements() {
    return tunable_elements;
}
void
SWGSoapySDROutputSettings::setTunableElements(QList<SWGArgValue*>* tunable_elements) {
    this->tunable_elements = tunable_elements;
    this->m_tunable_elements_isSet = true;
}

qint32
SWGSoapySDROutputSettings::getGlobalGain() {
    return global_gain;
}
void
SWGSoapySDROutputSettings::setGlobalGain(qint32 global_gain) {
    this->global_gain = global_gain;
    this->m_global_gain_isSet = true;
}

QList<SWGArgValue*>*
SWGSoapySDROutputSettings::getIndividualGains() {
    return individual_gains;
}
void
SWGSoapySDROutputSettings::setIndividualGains(QList<SWGArgValue*>* individual_gains) {
    this->individual_gains = individual_gains;
    this->m_individual_gains_isSet = true;
}

qint32
SWGSoapySDROutputSettings::getAutoGain() {
    return auto_gain;
}
void
SWGSoapySDROutputSettings::setAutoGain(qint32 auto_gain) {
    this->auto_gain = auto_gain;
    this->m_auto_gain_isSet = true;
}

qint32
SWGSoapySDROutputSettings::getAutoDcCorrection() {
    return auto_dc_correction;
}
void
SWGSoapySDROutputSettings::setAutoDcCorrection(qint32 auto_dc_correction) {
    this->auto_dc_correction = auto_dc_correction;
    this->m_auto_dc_correction_isSet = true;
}

qint32
SWGSoapySDROutputSettings::getAutoIqCorrection() {
    return auto_iq_correction;
}
void
SWGSoapySDROutputSettings::setAutoIqCorrection(qint32 auto_iq_correction) {
    this->auto_iq_correction = auto_iq_correction;
    this->m_auto_iq_correction_isSet = true;
}

SWGComplex*
SWGSoapySDROutputSettings::getDcCorrection() {
    return dc_correction;
}
void
SWGSoapySDROutputSettings::setDcCorrection(SWGComplex* dc_correction) {
    this->dc_correction = dc_correction;
    this->m_dc_correction_isSet = true;
}

SWGComplex*
SWGSoapySDROutputSettings::getIqCorrection() {
    return iq_correction;
}
void
SWGSoapySDROutputSettings::setIqCorrection(SWGComplex* iq_correction) {
    this->iq_correction = iq_correction;
    this->m_iq_correction_isSet = true;
}

QList<SWGArgValue*>*
SWGSoapySDROutputSettings::getStreamArgSettings() {
    return stream_arg_settings;
}
void
SWGSoapySDROutputSettings::setStreamArgSettings(QList<SWGArgValue*>* stream_arg_settings) {
    this->stream_arg_settings = stream_arg_settings;
    this->m_stream_arg_settings_isSet = true;
}

QList<SWGArgValue*>*
SWGSoapySDROutputSettings::getDeviceArgSettings() {
    return device_arg_settings;
}
void
SWGSoapySDROutputSettings::setDeviceArgSettings(QList<SWGArgValue*>* device_arg_settings) {
    this->device_arg_settings = device_arg_settings;
    this->m_device_arg_settings_isSet = true;
}

qint32
SWGSoapySDROutputSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGSoapySDROutputSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGSoapySDROutputSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGSoapySDROutputSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGSoapySDROutputSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGSoapySDROutputSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGSoapySDROutputSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGSoapySDROutputSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}


bool
SWGSoapySDROutputSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){ isObjectUpdated = true; break;}
        if(m_l_oppm_tenths_isSet){ isObjectUpdated = true; break;}
        if(m_dev_sample_rate_isSet){ isObjectUpdated = true; break;}
        if(m_log2_interp_isSet){ isObjectUpdated = true; break;}
        if(m_transverter_mode_isSet){ isObjectUpdated = true; break;}
        if(m_transverter_delta_frequency_isSet){ isObjectUpdated = true; break;}
        if(antenna != nullptr && *antenna != QString("")){ isObjectUpdated = true; break;}
        if(m_bandwidth_isSet){ isObjectUpdated = true; break;}
        if(tunable_elements->size() > 0){ isObjectUpdated = true; break;}
        if(m_global_gain_isSet){ isObjectUpdated = true; break;}
        if(individual_gains->size() > 0){ isObjectUpdated = true; break;}
        if(m_auto_gain_isSet){ isObjectUpdated = true; break;}
        if(m_auto_dc_correction_isSet){ isObjectUpdated = true; break;}
        if(m_auto_iq_correction_isSet){ isObjectUpdated = true; break;}
        if(dc_correction != nullptr && dc_correction->isSet()){ isObjectUpdated = true; break;}
        if(iq_correction != nullptr && iq_correction->isSet()){ isObjectUpdated = true; break;}
        if(stream_arg_settings->size() > 0){ isObjectUpdated = true; break;}
        if(device_arg_settings->size() > 0){ isObjectUpdated = true; break;}
        if(m_use_reverse_api_isSet){ isObjectUpdated = true; break;}
        if(reverse_api_address != nullptr && *reverse_api_address != QString("")){ isObjectUpdated = true; break;}
        if(m_reverse_api_port_isSet){ isObjectUpdated = true; break;}
        if(m_reverse_api_device_index_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}


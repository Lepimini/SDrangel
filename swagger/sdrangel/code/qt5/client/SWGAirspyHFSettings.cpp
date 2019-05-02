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


#include "SWGAirspyHFSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGAirspyHFSettings::SWGAirspyHFSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAirspyHFSettings::SWGAirspyHFSettings() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    dev_sample_rate_index = 0;
    m_dev_sample_rate_index_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    band_index = 0;
    m_band_index_isSet = false;
    file_record_name = nullptr;
    m_file_record_name_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    use_agc = 0;
    m_use_agc_isSet = false;
    agc_high = 0;
    m_agc_high_isSet = false;
    use_dsp = 0;
    m_use_dsp_isSet = false;
    use_lna = 0;
    m_use_lna_isSet = false;
    attenuator_steps = 0;
    m_attenuator_steps_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_correction = 0;
    m_iq_correction_isSet = false;
}

SWGAirspyHFSettings::~SWGAirspyHFSettings() {
    this->cleanup();
}

void
SWGAirspyHFSettings::init() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    dev_sample_rate_index = 0;
    m_dev_sample_rate_index_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    band_index = 0;
    m_band_index_isSet = false;
    file_record_name = new QString("");
    m_file_record_name_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    use_agc = 0;
    m_use_agc_isSet = false;
    agc_high = 0;
    m_agc_high_isSet = false;
    use_dsp = 0;
    m_use_dsp_isSet = false;
    use_lna = 0;
    m_use_lna_isSet = false;
    attenuator_steps = 0;
    m_attenuator_steps_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_correction = 0;
    m_iq_correction_isSet = false;
}

void
SWGAirspyHFSettings::cleanup() {







    if(file_record_name != nullptr) { 
        delete file_record_name;
    }

    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }









}

SWGAirspyHFSettings*
SWGAirspyHFSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAirspyHFSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&l_oppm_tenths, pJson["LOppmTenths"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dev_sample_rate_index, pJson["devSampleRateIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_decim, pJson["log2Decim"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_mode, pJson["transverterMode"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_delta_frequency, pJson["transverterDeltaFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&band_index, pJson["bandIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&file_record_name, pJson["fileRecordName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_agc, pJson["useAGC"], "qint32", "");
    
    ::SWGSDRangel::setValue(&agc_high, pJson["agcHigh"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_dsp, pJson["useDSP"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_lna, pJson["useLNA"], "qint32", "");
    
    ::SWGSDRangel::setValue(&attenuator_steps, pJson["attenuatorSteps"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dc_block, pJson["dcBlock"], "qint32", "");
    
    ::SWGSDRangel::setValue(&iq_correction, pJson["iqCorrection"], "qint32", "");
    
}

QString
SWGAirspyHFSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGAirspyHFSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_l_oppm_tenths_isSet){
        obj->insert("LOppmTenths", QJsonValue(l_oppm_tenths));
    }
    if(m_dev_sample_rate_index_isSet){
        obj->insert("devSampleRateIndex", QJsonValue(dev_sample_rate_index));
    }
    if(m_log2_decim_isSet){
        obj->insert("log2Decim", QJsonValue(log2_decim));
    }
    if(m_transverter_mode_isSet){
        obj->insert("transverterMode", QJsonValue(transverter_mode));
    }
    if(m_transverter_delta_frequency_isSet){
        obj->insert("transverterDeltaFrequency", QJsonValue(transverter_delta_frequency));
    }
    if(m_band_index_isSet){
        obj->insert("bandIndex", QJsonValue(band_index));
    }
    if(file_record_name != nullptr && *file_record_name != QString("")){
        toJsonValue(QString("fileRecordName"), file_record_name, obj, QString("QString"));
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
    if(m_use_agc_isSet){
        obj->insert("useAGC", QJsonValue(use_agc));
    }
    if(m_agc_high_isSet){
        obj->insert("agcHigh", QJsonValue(agc_high));
    }
    if(m_use_dsp_isSet){
        obj->insert("useDSP", QJsonValue(use_dsp));
    }
    if(m_use_lna_isSet){
        obj->insert("useLNA", QJsonValue(use_lna));
    }
    if(m_attenuator_steps_isSet){
        obj->insert("attenuatorSteps", QJsonValue(attenuator_steps));
    }
    if(m_dc_block_isSet){
        obj->insert("dcBlock", QJsonValue(dc_block));
    }
    if(m_iq_correction_isSet){
        obj->insert("iqCorrection", QJsonValue(iq_correction));
    }

    return obj;
}

qint64
SWGAirspyHFSettings::getCenterFrequency() {
    return center_frequency;
}
void
SWGAirspyHFSettings::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint32
SWGAirspyHFSettings::getLOppmTenths() {
    return l_oppm_tenths;
}
void
SWGAirspyHFSettings::setLOppmTenths(qint32 l_oppm_tenths) {
    this->l_oppm_tenths = l_oppm_tenths;
    this->m_l_oppm_tenths_isSet = true;
}

qint32
SWGAirspyHFSettings::getDevSampleRateIndex() {
    return dev_sample_rate_index;
}
void
SWGAirspyHFSettings::setDevSampleRateIndex(qint32 dev_sample_rate_index) {
    this->dev_sample_rate_index = dev_sample_rate_index;
    this->m_dev_sample_rate_index_isSet = true;
}

qint32
SWGAirspyHFSettings::getLog2Decim() {
    return log2_decim;
}
void
SWGAirspyHFSettings::setLog2Decim(qint32 log2_decim) {
    this->log2_decim = log2_decim;
    this->m_log2_decim_isSet = true;
}

qint32
SWGAirspyHFSettings::getTransverterMode() {
    return transverter_mode;
}
void
SWGAirspyHFSettings::setTransverterMode(qint32 transverter_mode) {
    this->transverter_mode = transverter_mode;
    this->m_transverter_mode_isSet = true;
}

qint64
SWGAirspyHFSettings::getTransverterDeltaFrequency() {
    return transverter_delta_frequency;
}
void
SWGAirspyHFSettings::setTransverterDeltaFrequency(qint64 transverter_delta_frequency) {
    this->transverter_delta_frequency = transverter_delta_frequency;
    this->m_transverter_delta_frequency_isSet = true;
}

qint32
SWGAirspyHFSettings::getBandIndex() {
    return band_index;
}
void
SWGAirspyHFSettings::setBandIndex(qint32 band_index) {
    this->band_index = band_index;
    this->m_band_index_isSet = true;
}

QString*
SWGAirspyHFSettings::getFileRecordName() {
    return file_record_name;
}
void
SWGAirspyHFSettings::setFileRecordName(QString* file_record_name) {
    this->file_record_name = file_record_name;
    this->m_file_record_name_isSet = true;
}

qint32
SWGAirspyHFSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGAirspyHFSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGAirspyHFSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGAirspyHFSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGAirspyHFSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGAirspyHFSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGAirspyHFSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGAirspyHFSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGAirspyHFSettings::getUseAgc() {
    return use_agc;
}
void
SWGAirspyHFSettings::setUseAgc(qint32 use_agc) {
    this->use_agc = use_agc;
    this->m_use_agc_isSet = true;
}

qint32
SWGAirspyHFSettings::getAgcHigh() {
    return agc_high;
}
void
SWGAirspyHFSettings::setAgcHigh(qint32 agc_high) {
    this->agc_high = agc_high;
    this->m_agc_high_isSet = true;
}

qint32
SWGAirspyHFSettings::getUseDsp() {
    return use_dsp;
}
void
SWGAirspyHFSettings::setUseDsp(qint32 use_dsp) {
    this->use_dsp = use_dsp;
    this->m_use_dsp_isSet = true;
}

qint32
SWGAirspyHFSettings::getUseLna() {
    return use_lna;
}
void
SWGAirspyHFSettings::setUseLna(qint32 use_lna) {
    this->use_lna = use_lna;
    this->m_use_lna_isSet = true;
}

qint32
SWGAirspyHFSettings::getAttenuatorSteps() {
    return attenuator_steps;
}
void
SWGAirspyHFSettings::setAttenuatorSteps(qint32 attenuator_steps) {
    this->attenuator_steps = attenuator_steps;
    this->m_attenuator_steps_isSet = true;
}

qint32
SWGAirspyHFSettings::getDcBlock() {
    return dc_block;
}
void
SWGAirspyHFSettings::setDcBlock(qint32 dc_block) {
    this->dc_block = dc_block;
    this->m_dc_block_isSet = true;
}

qint32
SWGAirspyHFSettings::getIqCorrection() {
    return iq_correction;
}
void
SWGAirspyHFSettings::setIqCorrection(qint32 iq_correction) {
    this->iq_correction = iq_correction;
    this->m_iq_correction_isSet = true;
}


bool
SWGAirspyHFSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){ isObjectUpdated = true; break;}
        if(m_l_oppm_tenths_isSet){ isObjectUpdated = true; break;}
        if(m_dev_sample_rate_index_isSet){ isObjectUpdated = true; break;}
        if(m_log2_decim_isSet){ isObjectUpdated = true; break;}
        if(m_transverter_mode_isSet){ isObjectUpdated = true; break;}
        if(m_transverter_delta_frequency_isSet){ isObjectUpdated = true; break;}
        if(m_band_index_isSet){ isObjectUpdated = true; break;}
        if(file_record_name != nullptr && *file_record_name != QString("")){ isObjectUpdated = true; break;}
        if(m_use_reverse_api_isSet){ isObjectUpdated = true; break;}
        if(reverse_api_address != nullptr && *reverse_api_address != QString("")){ isObjectUpdated = true; break;}
        if(m_reverse_api_port_isSet){ isObjectUpdated = true; break;}
        if(m_reverse_api_device_index_isSet){ isObjectUpdated = true; break;}
        if(m_use_agc_isSet){ isObjectUpdated = true; break;}
        if(m_agc_high_isSet){ isObjectUpdated = true; break;}
        if(m_use_dsp_isSet){ isObjectUpdated = true; break;}
        if(m_use_lna_isSet){ isObjectUpdated = true; break;}
        if(m_attenuator_steps_isSet){ isObjectUpdated = true; break;}
        if(m_dc_block_isSet){ isObjectUpdated = true; break;}
        if(m_iq_correction_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}


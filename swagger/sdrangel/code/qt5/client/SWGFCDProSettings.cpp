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


#include "SWGFCDProSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGFCDProSettings::SWGFCDProSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFCDProSettings::SWGFCDProSettings() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    lna_gain_index = 0;
    m_lna_gain_index_isSet = false;
    rf_filter_index = 0;
    m_rf_filter_index_isSet = false;
    lna_enhance_index = 0;
    m_lna_enhance_index_isSet = false;
    band_index = 0;
    m_band_index_isSet = false;
    mixer_gain_index = 0;
    m_mixer_gain_index_isSet = false;
    mixer_filter_index = 0;
    m_mixer_filter_index_isSet = false;
    bias_current_index = 0;
    m_bias_current_index_isSet = false;
    mode_index = 0;
    m_mode_index_isSet = false;
    gain1_index = 0;
    m_gain1_index_isSet = false;
    rc_filter_index = 0;
    m_rc_filter_index_isSet = false;
    gain2_index = 0;
    m_gain2_index_isSet = false;
    gain3_index = 0;
    m_gain3_index_isSet = false;
    gain4_index = 0;
    m_gain4_index_isSet = false;
    if_filter_index = 0;
    m_if_filter_index_isSet = false;
    gain5_index = 0;
    m_gain5_index_isSet = false;
    gain6_index = 0;
    m_gain6_index_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    fc_pos = 0;
    m_fc_pos_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_correction = 0;
    m_iq_correction_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    iq_order = 0;
    m_iq_order_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

SWGFCDProSettings::~SWGFCDProSettings() {
    this->cleanup();
}

void
SWGFCDProSettings::init() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    lna_gain_index = 0;
    m_lna_gain_index_isSet = false;
    rf_filter_index = 0;
    m_rf_filter_index_isSet = false;
    lna_enhance_index = 0;
    m_lna_enhance_index_isSet = false;
    band_index = 0;
    m_band_index_isSet = false;
    mixer_gain_index = 0;
    m_mixer_gain_index_isSet = false;
    mixer_filter_index = 0;
    m_mixer_filter_index_isSet = false;
    bias_current_index = 0;
    m_bias_current_index_isSet = false;
    mode_index = 0;
    m_mode_index_isSet = false;
    gain1_index = 0;
    m_gain1_index_isSet = false;
    rc_filter_index = 0;
    m_rc_filter_index_isSet = false;
    gain2_index = 0;
    m_gain2_index_isSet = false;
    gain3_index = 0;
    m_gain3_index_isSet = false;
    gain4_index = 0;
    m_gain4_index_isSet = false;
    if_filter_index = 0;
    m_if_filter_index_isSet = false;
    gain5_index = 0;
    m_gain5_index_isSet = false;
    gain6_index = 0;
    m_gain6_index_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    fc_pos = 0;
    m_fc_pos_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_correction = 0;
    m_iq_correction_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    iq_order = 0;
    m_iq_order_isSet = false;
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
SWGFCDProSettings::cleanup() {


























    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }


}

SWGFCDProSettings*
SWGFCDProSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFCDProSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&l_oppm_tenths, pJson["LOppmTenths"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lna_gain_index, pJson["lnaGainIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rf_filter_index, pJson["rfFilterIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lna_enhance_index, pJson["lnaEnhanceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&band_index, pJson["bandIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&mixer_gain_index, pJson["mixerGainIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&mixer_filter_index, pJson["mixerFilterIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&bias_current_index, pJson["biasCurrentIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&mode_index, pJson["modeIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain1_index, pJson["gain1Index"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rc_filter_index, pJson["rcFilterIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain2_index, pJson["gain2Index"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain3_index, pJson["gain3Index"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain4_index, pJson["gain4Index"], "qint32", "");
    
    ::SWGSDRangel::setValue(&if_filter_index, pJson["ifFilterIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain5_index, pJson["gain5Index"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain6_index, pJson["gain6Index"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_decim, pJson["log2Decim"], "qint32", "");
    
    ::SWGSDRangel::setValue(&fc_pos, pJson["fcPos"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dc_block, pJson["dcBlock"], "qint32", "");
    
    ::SWGSDRangel::setValue(&iq_correction, pJson["iqCorrection"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_mode, pJson["transverterMode"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_delta_frequency, pJson["transverterDeltaFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&iq_order, pJson["iqOrder"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
}

QString
SWGFCDProSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGFCDProSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_l_oppm_tenths_isSet){
        obj->insert("LOppmTenths", QJsonValue(l_oppm_tenths));
    }
    if(m_lna_gain_index_isSet){
        obj->insert("lnaGainIndex", QJsonValue(lna_gain_index));
    }
    if(m_rf_filter_index_isSet){
        obj->insert("rfFilterIndex", QJsonValue(rf_filter_index));
    }
    if(m_lna_enhance_index_isSet){
        obj->insert("lnaEnhanceIndex", QJsonValue(lna_enhance_index));
    }
    if(m_band_index_isSet){
        obj->insert("bandIndex", QJsonValue(band_index));
    }
    if(m_mixer_gain_index_isSet){
        obj->insert("mixerGainIndex", QJsonValue(mixer_gain_index));
    }
    if(m_mixer_filter_index_isSet){
        obj->insert("mixerFilterIndex", QJsonValue(mixer_filter_index));
    }
    if(m_bias_current_index_isSet){
        obj->insert("biasCurrentIndex", QJsonValue(bias_current_index));
    }
    if(m_mode_index_isSet){
        obj->insert("modeIndex", QJsonValue(mode_index));
    }
    if(m_gain1_index_isSet){
        obj->insert("gain1Index", QJsonValue(gain1_index));
    }
    if(m_rc_filter_index_isSet){
        obj->insert("rcFilterIndex", QJsonValue(rc_filter_index));
    }
    if(m_gain2_index_isSet){
        obj->insert("gain2Index", QJsonValue(gain2_index));
    }
    if(m_gain3_index_isSet){
        obj->insert("gain3Index", QJsonValue(gain3_index));
    }
    if(m_gain4_index_isSet){
        obj->insert("gain4Index", QJsonValue(gain4_index));
    }
    if(m_if_filter_index_isSet){
        obj->insert("ifFilterIndex", QJsonValue(if_filter_index));
    }
    if(m_gain5_index_isSet){
        obj->insert("gain5Index", QJsonValue(gain5_index));
    }
    if(m_gain6_index_isSet){
        obj->insert("gain6Index", QJsonValue(gain6_index));
    }
    if(m_log2_decim_isSet){
        obj->insert("log2Decim", QJsonValue(log2_decim));
    }
    if(m_fc_pos_isSet){
        obj->insert("fcPos", QJsonValue(fc_pos));
    }
    if(m_dc_block_isSet){
        obj->insert("dcBlock", QJsonValue(dc_block));
    }
    if(m_iq_correction_isSet){
        obj->insert("iqCorrection", QJsonValue(iq_correction));
    }
    if(m_transverter_mode_isSet){
        obj->insert("transverterMode", QJsonValue(transverter_mode));
    }
    if(m_transverter_delta_frequency_isSet){
        obj->insert("transverterDeltaFrequency", QJsonValue(transverter_delta_frequency));
    }
    if(m_iq_order_isSet){
        obj->insert("iqOrder", QJsonValue(iq_order));
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
SWGFCDProSettings::getCenterFrequency() {
    return center_frequency;
}
void
SWGFCDProSettings::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint32
SWGFCDProSettings::getLOppmTenths() {
    return l_oppm_tenths;
}
void
SWGFCDProSettings::setLOppmTenths(qint32 l_oppm_tenths) {
    this->l_oppm_tenths = l_oppm_tenths;
    this->m_l_oppm_tenths_isSet = true;
}

qint32
SWGFCDProSettings::getLnaGainIndex() {
    return lna_gain_index;
}
void
SWGFCDProSettings::setLnaGainIndex(qint32 lna_gain_index) {
    this->lna_gain_index = lna_gain_index;
    this->m_lna_gain_index_isSet = true;
}

qint32
SWGFCDProSettings::getRfFilterIndex() {
    return rf_filter_index;
}
void
SWGFCDProSettings::setRfFilterIndex(qint32 rf_filter_index) {
    this->rf_filter_index = rf_filter_index;
    this->m_rf_filter_index_isSet = true;
}

qint32
SWGFCDProSettings::getLnaEnhanceIndex() {
    return lna_enhance_index;
}
void
SWGFCDProSettings::setLnaEnhanceIndex(qint32 lna_enhance_index) {
    this->lna_enhance_index = lna_enhance_index;
    this->m_lna_enhance_index_isSet = true;
}

qint32
SWGFCDProSettings::getBandIndex() {
    return band_index;
}
void
SWGFCDProSettings::setBandIndex(qint32 band_index) {
    this->band_index = band_index;
    this->m_band_index_isSet = true;
}

qint32
SWGFCDProSettings::getMixerGainIndex() {
    return mixer_gain_index;
}
void
SWGFCDProSettings::setMixerGainIndex(qint32 mixer_gain_index) {
    this->mixer_gain_index = mixer_gain_index;
    this->m_mixer_gain_index_isSet = true;
}

qint32
SWGFCDProSettings::getMixerFilterIndex() {
    return mixer_filter_index;
}
void
SWGFCDProSettings::setMixerFilterIndex(qint32 mixer_filter_index) {
    this->mixer_filter_index = mixer_filter_index;
    this->m_mixer_filter_index_isSet = true;
}

qint32
SWGFCDProSettings::getBiasCurrentIndex() {
    return bias_current_index;
}
void
SWGFCDProSettings::setBiasCurrentIndex(qint32 bias_current_index) {
    this->bias_current_index = bias_current_index;
    this->m_bias_current_index_isSet = true;
}

qint32
SWGFCDProSettings::getModeIndex() {
    return mode_index;
}
void
SWGFCDProSettings::setModeIndex(qint32 mode_index) {
    this->mode_index = mode_index;
    this->m_mode_index_isSet = true;
}

qint32
SWGFCDProSettings::getGain1Index() {
    return gain1_index;
}
void
SWGFCDProSettings::setGain1Index(qint32 gain1_index) {
    this->gain1_index = gain1_index;
    this->m_gain1_index_isSet = true;
}

qint32
SWGFCDProSettings::getRcFilterIndex() {
    return rc_filter_index;
}
void
SWGFCDProSettings::setRcFilterIndex(qint32 rc_filter_index) {
    this->rc_filter_index = rc_filter_index;
    this->m_rc_filter_index_isSet = true;
}

qint32
SWGFCDProSettings::getGain2Index() {
    return gain2_index;
}
void
SWGFCDProSettings::setGain2Index(qint32 gain2_index) {
    this->gain2_index = gain2_index;
    this->m_gain2_index_isSet = true;
}

qint32
SWGFCDProSettings::getGain3Index() {
    return gain3_index;
}
void
SWGFCDProSettings::setGain3Index(qint32 gain3_index) {
    this->gain3_index = gain3_index;
    this->m_gain3_index_isSet = true;
}

qint32
SWGFCDProSettings::getGain4Index() {
    return gain4_index;
}
void
SWGFCDProSettings::setGain4Index(qint32 gain4_index) {
    this->gain4_index = gain4_index;
    this->m_gain4_index_isSet = true;
}

qint32
SWGFCDProSettings::getIfFilterIndex() {
    return if_filter_index;
}
void
SWGFCDProSettings::setIfFilterIndex(qint32 if_filter_index) {
    this->if_filter_index = if_filter_index;
    this->m_if_filter_index_isSet = true;
}

qint32
SWGFCDProSettings::getGain5Index() {
    return gain5_index;
}
void
SWGFCDProSettings::setGain5Index(qint32 gain5_index) {
    this->gain5_index = gain5_index;
    this->m_gain5_index_isSet = true;
}

qint32
SWGFCDProSettings::getGain6Index() {
    return gain6_index;
}
void
SWGFCDProSettings::setGain6Index(qint32 gain6_index) {
    this->gain6_index = gain6_index;
    this->m_gain6_index_isSet = true;
}

qint32
SWGFCDProSettings::getLog2Decim() {
    return log2_decim;
}
void
SWGFCDProSettings::setLog2Decim(qint32 log2_decim) {
    this->log2_decim = log2_decim;
    this->m_log2_decim_isSet = true;
}

qint32
SWGFCDProSettings::getFcPos() {
    return fc_pos;
}
void
SWGFCDProSettings::setFcPos(qint32 fc_pos) {
    this->fc_pos = fc_pos;
    this->m_fc_pos_isSet = true;
}

qint32
SWGFCDProSettings::getDcBlock() {
    return dc_block;
}
void
SWGFCDProSettings::setDcBlock(qint32 dc_block) {
    this->dc_block = dc_block;
    this->m_dc_block_isSet = true;
}

qint32
SWGFCDProSettings::getIqCorrection() {
    return iq_correction;
}
void
SWGFCDProSettings::setIqCorrection(qint32 iq_correction) {
    this->iq_correction = iq_correction;
    this->m_iq_correction_isSet = true;
}

qint32
SWGFCDProSettings::getTransverterMode() {
    return transverter_mode;
}
void
SWGFCDProSettings::setTransverterMode(qint32 transverter_mode) {
    this->transverter_mode = transverter_mode;
    this->m_transverter_mode_isSet = true;
}

qint64
SWGFCDProSettings::getTransverterDeltaFrequency() {
    return transverter_delta_frequency;
}
void
SWGFCDProSettings::setTransverterDeltaFrequency(qint64 transverter_delta_frequency) {
    this->transverter_delta_frequency = transverter_delta_frequency;
    this->m_transverter_delta_frequency_isSet = true;
}

qint32
SWGFCDProSettings::getIqOrder() {
    return iq_order;
}
void
SWGFCDProSettings::setIqOrder(qint32 iq_order) {
    this->iq_order = iq_order;
    this->m_iq_order_isSet = true;
}

qint32
SWGFCDProSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGFCDProSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGFCDProSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGFCDProSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGFCDProSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGFCDProSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGFCDProSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGFCDProSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}


bool
SWGFCDProSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_l_oppm_tenths_isSet){
            isObjectUpdated = true; break;
        }
        if(m_lna_gain_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rf_filter_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_lna_enhance_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_band_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_mixer_gain_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_mixer_filter_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_bias_current_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_mode_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain1_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rc_filter_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain2_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain3_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain4_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_if_filter_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain5_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain6_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_log2_decim_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fc_pos_isSet){
            isObjectUpdated = true; break;
        }
        if(m_dc_block_isSet){
            isObjectUpdated = true; break;
        }
        if(m_iq_correction_isSet){
            isObjectUpdated = true; break;
        }
        if(m_transverter_mode_isSet){
            isObjectUpdated = true; break;
        }
        if(m_transverter_delta_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_iq_order_isSet){
            isObjectUpdated = true; break;
        }
        if(m_use_reverse_api_isSet){
            isObjectUpdated = true; break;
        }
        if(reverse_api_address && *reverse_api_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_device_index_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}


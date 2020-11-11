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


#include "SWGUDPSourceSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGUDPSourceSettings::SWGUDPSourceSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUDPSourceSettings::SWGUDPSourceSettings() {
    sample_format = 0;
    m_sample_format_isSet = false;
    input_sample_rate = 0.0f;
    m_input_sample_rate_isSet = false;
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    low_cutoff = 0.0f;
    m_low_cutoff_isSet = false;
    fm_deviation = 0;
    m_fm_deviation_isSet = false;
    am_mod_factor = 0.0f;
    m_am_mod_factor_isSet = false;
    channel_mute = 0;
    m_channel_mute_isSet = false;
    gain_in = 0.0f;
    m_gain_in_isSet = false;
    gain_out = 0.0f;
    m_gain_out_isSet = false;
    squelch = 0.0f;
    m_squelch_isSet = false;
    squelch_gate = 0.0f;
    m_squelch_gate_isSet = false;
    squelch_enabled = 0;
    m_squelch_enabled_isSet = false;
    auto_rw_balance = 0;
    m_auto_rw_balance_isSet = false;
    stereo_input = 0;
    m_stereo_input_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    udp_address = nullptr;
    m_udp_address_isSet = false;
    udp_port = 0;
    m_udp_port_isSet = false;
    multicast_address = nullptr;
    m_multicast_address_isSet = false;
    multicast_join = 0;
    m_multicast_join_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
}

SWGUDPSourceSettings::~SWGUDPSourceSettings() {
    this->cleanup();
}

void
SWGUDPSourceSettings::init() {
    sample_format = 0;
    m_sample_format_isSet = false;
    input_sample_rate = 0.0f;
    m_input_sample_rate_isSet = false;
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    low_cutoff = 0.0f;
    m_low_cutoff_isSet = false;
    fm_deviation = 0;
    m_fm_deviation_isSet = false;
    am_mod_factor = 0.0f;
    m_am_mod_factor_isSet = false;
    channel_mute = 0;
    m_channel_mute_isSet = false;
    gain_in = 0.0f;
    m_gain_in_isSet = false;
    gain_out = 0.0f;
    m_gain_out_isSet = false;
    squelch = 0.0f;
    m_squelch_isSet = false;
    squelch_gate = 0.0f;
    m_squelch_gate_isSet = false;
    squelch_enabled = 0;
    m_squelch_enabled_isSet = false;
    auto_rw_balance = 0;
    m_auto_rw_balance_isSet = false;
    stereo_input = 0;
    m_stereo_input_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    udp_address = new QString("");
    m_udp_address_isSet = false;
    udp_port = 0;
    m_udp_port_isSet = false;
    multicast_address = new QString("");
    m_multicast_address_isSet = false;
    multicast_join = 0;
    m_multicast_join_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
}

void
SWGUDPSourceSettings::cleanup() {
















    if(udp_address != nullptr) { 
        delete udp_address;
    }

    if(multicast_address != nullptr) { 
        delete multicast_address;
    }

    if(title != nullptr) { 
        delete title;
    }


    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



}

SWGUDPSourceSettings*
SWGUDPSourceSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUDPSourceSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&sample_format, pJson["sampleFormat"], "qint32", "");
    
    ::SWGSDRangel::setValue(&input_sample_rate, pJson["inputSampleRate"], "float", "");
    
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&low_cutoff, pJson["lowCutoff"], "float", "");
    
    ::SWGSDRangel::setValue(&fm_deviation, pJson["fmDeviation"], "qint32", "");
    
    ::SWGSDRangel::setValue(&am_mod_factor, pJson["amModFactor"], "float", "");
    
    ::SWGSDRangel::setValue(&channel_mute, pJson["channelMute"], "qint32", "");
    
    ::SWGSDRangel::setValue(&gain_in, pJson["gainIn"], "float", "");
    
    ::SWGSDRangel::setValue(&gain_out, pJson["gainOut"], "float", "");
    
    ::SWGSDRangel::setValue(&squelch, pJson["squelch"], "float", "");
    
    ::SWGSDRangel::setValue(&squelch_gate, pJson["squelchGate"], "float", "");
    
    ::SWGSDRangel::setValue(&squelch_enabled, pJson["squelchEnabled"], "qint32", "");
    
    ::SWGSDRangel::setValue(&auto_rw_balance, pJson["autoRWBalance"], "qint32", "");
    
    ::SWGSDRangel::setValue(&stereo_input, pJson["stereoInput"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&udp_address, pJson["udpAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&udp_port, pJson["udpPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&multicast_address, pJson["multicastAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&multicast_join, pJson["multicastJoin"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&stream_index, pJson["streamIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_channel_index, pJson["reverseAPIChannelIndex"], "qint32", "");
    
}

QString
SWGUDPSourceSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGUDPSourceSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_sample_format_isSet){
        obj->insert("sampleFormat", QJsonValue(sample_format));
    }
    if(m_input_sample_rate_isSet){
        obj->insert("inputSampleRate", QJsonValue(input_sample_rate));
    }
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_rf_bandwidth_isSet){
        obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));
    }
    if(m_low_cutoff_isSet){
        obj->insert("lowCutoff", QJsonValue(low_cutoff));
    }
    if(m_fm_deviation_isSet){
        obj->insert("fmDeviation", QJsonValue(fm_deviation));
    }
    if(m_am_mod_factor_isSet){
        obj->insert("amModFactor", QJsonValue(am_mod_factor));
    }
    if(m_channel_mute_isSet){
        obj->insert("channelMute", QJsonValue(channel_mute));
    }
    if(m_gain_in_isSet){
        obj->insert("gainIn", QJsonValue(gain_in));
    }
    if(m_gain_out_isSet){
        obj->insert("gainOut", QJsonValue(gain_out));
    }
    if(m_squelch_isSet){
        obj->insert("squelch", QJsonValue(squelch));
    }
    if(m_squelch_gate_isSet){
        obj->insert("squelchGate", QJsonValue(squelch_gate));
    }
    if(m_squelch_enabled_isSet){
        obj->insert("squelchEnabled", QJsonValue(squelch_enabled));
    }
    if(m_auto_rw_balance_isSet){
        obj->insert("autoRWBalance", QJsonValue(auto_rw_balance));
    }
    if(m_stereo_input_isSet){
        obj->insert("stereoInput", QJsonValue(stereo_input));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(udp_address != nullptr && *udp_address != QString("")){
        toJsonValue(QString("udpAddress"), udp_address, obj, QString("QString"));
    }
    if(m_udp_port_isSet){
        obj->insert("udpPort", QJsonValue(udp_port));
    }
    if(multicast_address != nullptr && *multicast_address != QString("")){
        toJsonValue(QString("multicastAddress"), multicast_address, obj, QString("QString"));
    }
    if(m_multicast_join_isSet){
        obj->insert("multicastJoin", QJsonValue(multicast_join));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(m_stream_index_isSet){
        obj->insert("streamIndex", QJsonValue(stream_index));
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
    if(m_reverse_api_channel_index_isSet){
        obj->insert("reverseAPIChannelIndex", QJsonValue(reverse_api_channel_index));
    }

    return obj;
}

qint32
SWGUDPSourceSettings::getSampleFormat() {
    return sample_format;
}
void
SWGUDPSourceSettings::setSampleFormat(qint32 sample_format) {
    this->sample_format = sample_format;
    this->m_sample_format_isSet = true;
}

float
SWGUDPSourceSettings::getInputSampleRate() {
    return input_sample_rate;
}
void
SWGUDPSourceSettings::setInputSampleRate(float input_sample_rate) {
    this->input_sample_rate = input_sample_rate;
    this->m_input_sample_rate_isSet = true;
}

qint64
SWGUDPSourceSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGUDPSourceSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

float
SWGUDPSourceSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGUDPSourceSettings::setRfBandwidth(float rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
    this->m_rf_bandwidth_isSet = true;
}

float
SWGUDPSourceSettings::getLowCutoff() {
    return low_cutoff;
}
void
SWGUDPSourceSettings::setLowCutoff(float low_cutoff) {
    this->low_cutoff = low_cutoff;
    this->m_low_cutoff_isSet = true;
}

qint32
SWGUDPSourceSettings::getFmDeviation() {
    return fm_deviation;
}
void
SWGUDPSourceSettings::setFmDeviation(qint32 fm_deviation) {
    this->fm_deviation = fm_deviation;
    this->m_fm_deviation_isSet = true;
}

float
SWGUDPSourceSettings::getAmModFactor() {
    return am_mod_factor;
}
void
SWGUDPSourceSettings::setAmModFactor(float am_mod_factor) {
    this->am_mod_factor = am_mod_factor;
    this->m_am_mod_factor_isSet = true;
}

qint32
SWGUDPSourceSettings::getChannelMute() {
    return channel_mute;
}
void
SWGUDPSourceSettings::setChannelMute(qint32 channel_mute) {
    this->channel_mute = channel_mute;
    this->m_channel_mute_isSet = true;
}

float
SWGUDPSourceSettings::getGainIn() {
    return gain_in;
}
void
SWGUDPSourceSettings::setGainIn(float gain_in) {
    this->gain_in = gain_in;
    this->m_gain_in_isSet = true;
}

float
SWGUDPSourceSettings::getGainOut() {
    return gain_out;
}
void
SWGUDPSourceSettings::setGainOut(float gain_out) {
    this->gain_out = gain_out;
    this->m_gain_out_isSet = true;
}

float
SWGUDPSourceSettings::getSquelch() {
    return squelch;
}
void
SWGUDPSourceSettings::setSquelch(float squelch) {
    this->squelch = squelch;
    this->m_squelch_isSet = true;
}

float
SWGUDPSourceSettings::getSquelchGate() {
    return squelch_gate;
}
void
SWGUDPSourceSettings::setSquelchGate(float squelch_gate) {
    this->squelch_gate = squelch_gate;
    this->m_squelch_gate_isSet = true;
}

qint32
SWGUDPSourceSettings::getSquelchEnabled() {
    return squelch_enabled;
}
void
SWGUDPSourceSettings::setSquelchEnabled(qint32 squelch_enabled) {
    this->squelch_enabled = squelch_enabled;
    this->m_squelch_enabled_isSet = true;
}

qint32
SWGUDPSourceSettings::getAutoRwBalance() {
    return auto_rw_balance;
}
void
SWGUDPSourceSettings::setAutoRwBalance(qint32 auto_rw_balance) {
    this->auto_rw_balance = auto_rw_balance;
    this->m_auto_rw_balance_isSet = true;
}

qint32
SWGUDPSourceSettings::getStereoInput() {
    return stereo_input;
}
void
SWGUDPSourceSettings::setStereoInput(qint32 stereo_input) {
    this->stereo_input = stereo_input;
    this->m_stereo_input_isSet = true;
}

qint32
SWGUDPSourceSettings::getRgbColor() {
    return rgb_color;
}
void
SWGUDPSourceSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGUDPSourceSettings::getUdpAddress() {
    return udp_address;
}
void
SWGUDPSourceSettings::setUdpAddress(QString* udp_address) {
    this->udp_address = udp_address;
    this->m_udp_address_isSet = true;
}

qint32
SWGUDPSourceSettings::getUdpPort() {
    return udp_port;
}
void
SWGUDPSourceSettings::setUdpPort(qint32 udp_port) {
    this->udp_port = udp_port;
    this->m_udp_port_isSet = true;
}

QString*
SWGUDPSourceSettings::getMulticastAddress() {
    return multicast_address;
}
void
SWGUDPSourceSettings::setMulticastAddress(QString* multicast_address) {
    this->multicast_address = multicast_address;
    this->m_multicast_address_isSet = true;
}

qint32
SWGUDPSourceSettings::getMulticastJoin() {
    return multicast_join;
}
void
SWGUDPSourceSettings::setMulticastJoin(qint32 multicast_join) {
    this->multicast_join = multicast_join;
    this->m_multicast_join_isSet = true;
}

QString*
SWGUDPSourceSettings::getTitle() {
    return title;
}
void
SWGUDPSourceSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

qint32
SWGUDPSourceSettings::getStreamIndex() {
    return stream_index;
}
void
SWGUDPSourceSettings::setStreamIndex(qint32 stream_index) {
    this->stream_index = stream_index;
    this->m_stream_index_isSet = true;
}

qint32
SWGUDPSourceSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGUDPSourceSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGUDPSourceSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGUDPSourceSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGUDPSourceSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGUDPSourceSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGUDPSourceSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGUDPSourceSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGUDPSourceSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGUDPSourceSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}


bool
SWGUDPSourceSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_sample_format_isSet){
            isObjectUpdated = true; break;
        }
        if(m_input_sample_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_input_frequency_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rf_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_low_cutoff_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fm_deviation_isSet){
            isObjectUpdated = true; break;
        }
        if(m_am_mod_factor_isSet){
            isObjectUpdated = true; break;
        }
        if(m_channel_mute_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain_in_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain_out_isSet){
            isObjectUpdated = true; break;
        }
        if(m_squelch_isSet){
            isObjectUpdated = true; break;
        }
        if(m_squelch_gate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_squelch_enabled_isSet){
            isObjectUpdated = true; break;
        }
        if(m_auto_rw_balance_isSet){
            isObjectUpdated = true; break;
        }
        if(m_stereo_input_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(udp_address && *udp_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_udp_port_isSet){
            isObjectUpdated = true; break;
        }
        if(multicast_address && *multicast_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_multicast_join_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_stream_index_isSet){
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
        if(m_reverse_api_channel_index_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}


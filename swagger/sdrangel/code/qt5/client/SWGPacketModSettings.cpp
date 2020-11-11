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


#include "SWGPacketModSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGPacketModSettings::SWGPacketModSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPacketModSettings::SWGPacketModSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    mode = nullptr;
    m_mode_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    fm_deviation = 0.0f;
    m_fm_deviation_isSet = false;
    gain = 0.0f;
    m_gain_isSet = false;
    channel_mute = 0;
    m_channel_mute_isSet = false;
    repeat = 0;
    m_repeat_isSet = false;
    repeat_delay = 0.0f;
    m_repeat_delay_isSet = false;
    repeat_count = 0;
    m_repeat_count_isSet = false;
    ramp_up_bits = 0;
    m_ramp_up_bits_isSet = false;
    ramp_down_bits = 0;
    m_ramp_down_bits_isSet = false;
    ramp_range = 0;
    m_ramp_range_isSet = false;
    modulate_while_ramping = 0;
    m_modulate_while_ramping_isSet = false;
    mark_frequency = 0;
    m_mark_frequency_isSet = false;
    space_frequency = 0;
    m_space_frequency_isSet = false;
    ax25_pre_flags = 0;
    m_ax25_pre_flags_isSet = false;
    ax25_post_flags = 0;
    m_ax25_post_flags_isSet = false;
    ax25_control = 0;
    m_ax25_control_isSet = false;
    ax25_pid = 0;
    m_ax25_pid_isSet = false;
    pre_emphasis = 0;
    m_pre_emphasis_isSet = false;
    pre_emphasis_tau = 0.0f;
    m_pre_emphasis_tau_isSet = false;
    pre_emphasis_high_freq = 0.0f;
    m_pre_emphasis_high_freq_isSet = false;
    lpf_taps = 0;
    m_lpf_taps_isSet = false;
    bb_noise = 0;
    m_bb_noise_isSet = false;
    rf_noise = 0;
    m_rf_noise_isSet = false;
    write_to_file = 0;
    m_write_to_file_isSet = false;
    spectrum_rate = 0;
    m_spectrum_rate_isSet = false;
    callsign = nullptr;
    m_callsign_isSet = false;
    to = nullptr;
    m_to_isSet = false;
    via = nullptr;
    m_via_isSet = false;
    data = nullptr;
    m_data_isSet = false;
    bpf = 0;
    m_bpf_isSet = false;
    bpf_low_cutoff = 0.0f;
    m_bpf_low_cutoff_isSet = false;
    bpf_high_cutoff = 0.0f;
    m_bpf_high_cutoff_isSet = false;
    bpf_taps = 0;
    m_bpf_taps_isSet = false;
    scramble = 0;
    m_scramble_isSet = false;
    polynomial = 0;
    m_polynomial_isSet = false;
    pulse_shaping = 0;
    m_pulse_shaping_isSet = false;
    beta = 0.0f;
    m_beta_isSet = false;
    symbol_span = 0;
    m_symbol_span_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
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

SWGPacketModSettings::~SWGPacketModSettings() {
    this->cleanup();
}

void
SWGPacketModSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    mode = new QString("");
    m_mode_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    fm_deviation = 0.0f;
    m_fm_deviation_isSet = false;
    gain = 0.0f;
    m_gain_isSet = false;
    channel_mute = 0;
    m_channel_mute_isSet = false;
    repeat = 0;
    m_repeat_isSet = false;
    repeat_delay = 0.0f;
    m_repeat_delay_isSet = false;
    repeat_count = 0;
    m_repeat_count_isSet = false;
    ramp_up_bits = 0;
    m_ramp_up_bits_isSet = false;
    ramp_down_bits = 0;
    m_ramp_down_bits_isSet = false;
    ramp_range = 0;
    m_ramp_range_isSet = false;
    modulate_while_ramping = 0;
    m_modulate_while_ramping_isSet = false;
    mark_frequency = 0;
    m_mark_frequency_isSet = false;
    space_frequency = 0;
    m_space_frequency_isSet = false;
    ax25_pre_flags = 0;
    m_ax25_pre_flags_isSet = false;
    ax25_post_flags = 0;
    m_ax25_post_flags_isSet = false;
    ax25_control = 0;
    m_ax25_control_isSet = false;
    ax25_pid = 0;
    m_ax25_pid_isSet = false;
    pre_emphasis = 0;
    m_pre_emphasis_isSet = false;
    pre_emphasis_tau = 0.0f;
    m_pre_emphasis_tau_isSet = false;
    pre_emphasis_high_freq = 0.0f;
    m_pre_emphasis_high_freq_isSet = false;
    lpf_taps = 0;
    m_lpf_taps_isSet = false;
    bb_noise = 0;
    m_bb_noise_isSet = false;
    rf_noise = 0;
    m_rf_noise_isSet = false;
    write_to_file = 0;
    m_write_to_file_isSet = false;
    spectrum_rate = 0;
    m_spectrum_rate_isSet = false;
    callsign = new QString("");
    m_callsign_isSet = false;
    to = new QString("");
    m_to_isSet = false;
    via = new QString("");
    m_via_isSet = false;
    data = new QString("");
    m_data_isSet = false;
    bpf = 0;
    m_bpf_isSet = false;
    bpf_low_cutoff = 0.0f;
    m_bpf_low_cutoff_isSet = false;
    bpf_high_cutoff = 0.0f;
    m_bpf_high_cutoff_isSet = false;
    bpf_taps = 0;
    m_bpf_taps_isSet = false;
    scramble = 0;
    m_scramble_isSet = false;
    polynomial = 0;
    m_polynomial_isSet = false;
    pulse_shaping = 0;
    m_pulse_shaping_isSet = false;
    beta = 0.0f;
    m_beta_isSet = false;
    symbol_span = 0;
    m_symbol_span_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
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
SWGPacketModSettings::cleanup() {

    if(mode != nullptr) { 
        delete mode;
    }

























    if(callsign != nullptr) { 
        delete callsign;
    }
    if(to != nullptr) { 
        delete to;
    }
    if(via != nullptr) { 
        delete via;
    }
    if(data != nullptr) { 
        delete data;
    }










    if(title != nullptr) { 
        delete title;
    }


    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



}

SWGPacketModSettings*
SWGPacketModSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPacketModSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&mode, pJson["mode"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&fm_deviation, pJson["fmDeviation"], "float", "");
    
    ::SWGSDRangel::setValue(&gain, pJson["gain"], "float", "");
    
    ::SWGSDRangel::setValue(&channel_mute, pJson["channelMute"], "qint32", "");
    
    ::SWGSDRangel::setValue(&repeat, pJson["repeat"], "qint32", "");
    
    ::SWGSDRangel::setValue(&repeat_delay, pJson["repeatDelay"], "float", "");
    
    ::SWGSDRangel::setValue(&repeat_count, pJson["repeatCount"], "qint32", "");
    
    ::SWGSDRangel::setValue(&ramp_up_bits, pJson["rampUpBits"], "qint32", "");
    
    ::SWGSDRangel::setValue(&ramp_down_bits, pJson["rampDownBits"], "qint32", "");
    
    ::SWGSDRangel::setValue(&ramp_range, pJson["rampRange"], "qint32", "");
    
    ::SWGSDRangel::setValue(&modulate_while_ramping, pJson["modulateWhileRamping"], "qint32", "");
    
    ::SWGSDRangel::setValue(&mark_frequency, pJson["markFrequency"], "qint32", "");
    
    ::SWGSDRangel::setValue(&space_frequency, pJson["spaceFrequency"], "qint32", "");
    
    ::SWGSDRangel::setValue(&ax25_pre_flags, pJson["ax25PreFlags"], "qint32", "");
    
    ::SWGSDRangel::setValue(&ax25_post_flags, pJson["ax25PostFlags"], "qint32", "");
    
    ::SWGSDRangel::setValue(&ax25_control, pJson["ax25Control"], "qint32", "");
    
    ::SWGSDRangel::setValue(&ax25_pid, pJson["ax25PID"], "qint32", "");
    
    ::SWGSDRangel::setValue(&pre_emphasis, pJson["preEmphasis"], "qint32", "");
    
    ::SWGSDRangel::setValue(&pre_emphasis_tau, pJson["preEmphasisTau"], "float", "");
    
    ::SWGSDRangel::setValue(&pre_emphasis_high_freq, pJson["preEmphasisHighFreq"], "float", "");
    
    ::SWGSDRangel::setValue(&lpf_taps, pJson["lpfTaps"], "qint32", "");
    
    ::SWGSDRangel::setValue(&bb_noise, pJson["bbNoise"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rf_noise, pJson["rfNoise"], "qint32", "");
    
    ::SWGSDRangel::setValue(&write_to_file, pJson["writeToFile"], "qint32", "");
    
    ::SWGSDRangel::setValue(&spectrum_rate, pJson["spectrumRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&callsign, pJson["callsign"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&to, pJson["to"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&via, pJson["via"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&data, pJson["data"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&bpf, pJson["bpf"], "qint32", "");
    
    ::SWGSDRangel::setValue(&bpf_low_cutoff, pJson["bpfLowCutoff"], "float", "");
    
    ::SWGSDRangel::setValue(&bpf_high_cutoff, pJson["bpfHighCutoff"], "float", "");
    
    ::SWGSDRangel::setValue(&bpf_taps, pJson["bpfTaps"], "qint32", "");
    
    ::SWGSDRangel::setValue(&scramble, pJson["scramble"], "qint32", "");
    
    ::SWGSDRangel::setValue(&polynomial, pJson["polynomial"], "qint32", "");
    
    ::SWGSDRangel::setValue(&pulse_shaping, pJson["pulseShaping"], "qint32", "");
    
    ::SWGSDRangel::setValue(&beta, pJson["beta"], "float", "");
    
    ::SWGSDRangel::setValue(&symbol_span, pJson["symbolSpan"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&stream_index, pJson["streamIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_channel_index, pJson["reverseAPIChannelIndex"], "qint32", "");
    
}

QString
SWGPacketModSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGPacketModSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(mode != nullptr && *mode != QString("")){
        toJsonValue(QString("mode"), mode, obj, QString("QString"));
    }
    if(m_rf_bandwidth_isSet){
        obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));
    }
    if(m_fm_deviation_isSet){
        obj->insert("fmDeviation", QJsonValue(fm_deviation));
    }
    if(m_gain_isSet){
        obj->insert("gain", QJsonValue(gain));
    }
    if(m_channel_mute_isSet){
        obj->insert("channelMute", QJsonValue(channel_mute));
    }
    if(m_repeat_isSet){
        obj->insert("repeat", QJsonValue(repeat));
    }
    if(m_repeat_delay_isSet){
        obj->insert("repeatDelay", QJsonValue(repeat_delay));
    }
    if(m_repeat_count_isSet){
        obj->insert("repeatCount", QJsonValue(repeat_count));
    }
    if(m_ramp_up_bits_isSet){
        obj->insert("rampUpBits", QJsonValue(ramp_up_bits));
    }
    if(m_ramp_down_bits_isSet){
        obj->insert("rampDownBits", QJsonValue(ramp_down_bits));
    }
    if(m_ramp_range_isSet){
        obj->insert("rampRange", QJsonValue(ramp_range));
    }
    if(m_modulate_while_ramping_isSet){
        obj->insert("modulateWhileRamping", QJsonValue(modulate_while_ramping));
    }
    if(m_mark_frequency_isSet){
        obj->insert("markFrequency", QJsonValue(mark_frequency));
    }
    if(m_space_frequency_isSet){
        obj->insert("spaceFrequency", QJsonValue(space_frequency));
    }
    if(m_ax25_pre_flags_isSet){
        obj->insert("ax25PreFlags", QJsonValue(ax25_pre_flags));
    }
    if(m_ax25_post_flags_isSet){
        obj->insert("ax25PostFlags", QJsonValue(ax25_post_flags));
    }
    if(m_ax25_control_isSet){
        obj->insert("ax25Control", QJsonValue(ax25_control));
    }
    if(m_ax25_pid_isSet){
        obj->insert("ax25PID", QJsonValue(ax25_pid));
    }
    if(m_pre_emphasis_isSet){
        obj->insert("preEmphasis", QJsonValue(pre_emphasis));
    }
    if(m_pre_emphasis_tau_isSet){
        obj->insert("preEmphasisTau", QJsonValue(pre_emphasis_tau));
    }
    if(m_pre_emphasis_high_freq_isSet){
        obj->insert("preEmphasisHighFreq", QJsonValue(pre_emphasis_high_freq));
    }
    if(m_lpf_taps_isSet){
        obj->insert("lpfTaps", QJsonValue(lpf_taps));
    }
    if(m_bb_noise_isSet){
        obj->insert("bbNoise", QJsonValue(bb_noise));
    }
    if(m_rf_noise_isSet){
        obj->insert("rfNoise", QJsonValue(rf_noise));
    }
    if(m_write_to_file_isSet){
        obj->insert("writeToFile", QJsonValue(write_to_file));
    }
    if(m_spectrum_rate_isSet){
        obj->insert("spectrumRate", QJsonValue(spectrum_rate));
    }
    if(callsign != nullptr && *callsign != QString("")){
        toJsonValue(QString("callsign"), callsign, obj, QString("QString"));
    }
    if(to != nullptr && *to != QString("")){
        toJsonValue(QString("to"), to, obj, QString("QString"));
    }
    if(via != nullptr && *via != QString("")){
        toJsonValue(QString("via"), via, obj, QString("QString"));
    }
    if(data != nullptr && *data != QString("")){
        toJsonValue(QString("data"), data, obj, QString("QString"));
    }
    if(m_bpf_isSet){
        obj->insert("bpf", QJsonValue(bpf));
    }
    if(m_bpf_low_cutoff_isSet){
        obj->insert("bpfLowCutoff", QJsonValue(bpf_low_cutoff));
    }
    if(m_bpf_high_cutoff_isSet){
        obj->insert("bpfHighCutoff", QJsonValue(bpf_high_cutoff));
    }
    if(m_bpf_taps_isSet){
        obj->insert("bpfTaps", QJsonValue(bpf_taps));
    }
    if(m_scramble_isSet){
        obj->insert("scramble", QJsonValue(scramble));
    }
    if(m_polynomial_isSet){
        obj->insert("polynomial", QJsonValue(polynomial));
    }
    if(m_pulse_shaping_isSet){
        obj->insert("pulseShaping", QJsonValue(pulse_shaping));
    }
    if(m_beta_isSet){
        obj->insert("beta", QJsonValue(beta));
    }
    if(m_symbol_span_isSet){
        obj->insert("symbolSpan", QJsonValue(symbol_span));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
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

qint64
SWGPacketModSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGPacketModSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

QString*
SWGPacketModSettings::getMode() {
    return mode;
}
void
SWGPacketModSettings::setMode(QString* mode) {
    this->mode = mode;
    this->m_mode_isSet = true;
}

float
SWGPacketModSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGPacketModSettings::setRfBandwidth(float rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
    this->m_rf_bandwidth_isSet = true;
}

float
SWGPacketModSettings::getFmDeviation() {
    return fm_deviation;
}
void
SWGPacketModSettings::setFmDeviation(float fm_deviation) {
    this->fm_deviation = fm_deviation;
    this->m_fm_deviation_isSet = true;
}

float
SWGPacketModSettings::getGain() {
    return gain;
}
void
SWGPacketModSettings::setGain(float gain) {
    this->gain = gain;
    this->m_gain_isSet = true;
}

qint32
SWGPacketModSettings::getChannelMute() {
    return channel_mute;
}
void
SWGPacketModSettings::setChannelMute(qint32 channel_mute) {
    this->channel_mute = channel_mute;
    this->m_channel_mute_isSet = true;
}

qint32
SWGPacketModSettings::getRepeat() {
    return repeat;
}
void
SWGPacketModSettings::setRepeat(qint32 repeat) {
    this->repeat = repeat;
    this->m_repeat_isSet = true;
}

float
SWGPacketModSettings::getRepeatDelay() {
    return repeat_delay;
}
void
SWGPacketModSettings::setRepeatDelay(float repeat_delay) {
    this->repeat_delay = repeat_delay;
    this->m_repeat_delay_isSet = true;
}

qint32
SWGPacketModSettings::getRepeatCount() {
    return repeat_count;
}
void
SWGPacketModSettings::setRepeatCount(qint32 repeat_count) {
    this->repeat_count = repeat_count;
    this->m_repeat_count_isSet = true;
}

qint32
SWGPacketModSettings::getRampUpBits() {
    return ramp_up_bits;
}
void
SWGPacketModSettings::setRampUpBits(qint32 ramp_up_bits) {
    this->ramp_up_bits = ramp_up_bits;
    this->m_ramp_up_bits_isSet = true;
}

qint32
SWGPacketModSettings::getRampDownBits() {
    return ramp_down_bits;
}
void
SWGPacketModSettings::setRampDownBits(qint32 ramp_down_bits) {
    this->ramp_down_bits = ramp_down_bits;
    this->m_ramp_down_bits_isSet = true;
}

qint32
SWGPacketModSettings::getRampRange() {
    return ramp_range;
}
void
SWGPacketModSettings::setRampRange(qint32 ramp_range) {
    this->ramp_range = ramp_range;
    this->m_ramp_range_isSet = true;
}

qint32
SWGPacketModSettings::getModulateWhileRamping() {
    return modulate_while_ramping;
}
void
SWGPacketModSettings::setModulateWhileRamping(qint32 modulate_while_ramping) {
    this->modulate_while_ramping = modulate_while_ramping;
    this->m_modulate_while_ramping_isSet = true;
}

qint32
SWGPacketModSettings::getMarkFrequency() {
    return mark_frequency;
}
void
SWGPacketModSettings::setMarkFrequency(qint32 mark_frequency) {
    this->mark_frequency = mark_frequency;
    this->m_mark_frequency_isSet = true;
}

qint32
SWGPacketModSettings::getSpaceFrequency() {
    return space_frequency;
}
void
SWGPacketModSettings::setSpaceFrequency(qint32 space_frequency) {
    this->space_frequency = space_frequency;
    this->m_space_frequency_isSet = true;
}

qint32
SWGPacketModSettings::getAx25PreFlags() {
    return ax25_pre_flags;
}
void
SWGPacketModSettings::setAx25PreFlags(qint32 ax25_pre_flags) {
    this->ax25_pre_flags = ax25_pre_flags;
    this->m_ax25_pre_flags_isSet = true;
}

qint32
SWGPacketModSettings::getAx25PostFlags() {
    return ax25_post_flags;
}
void
SWGPacketModSettings::setAx25PostFlags(qint32 ax25_post_flags) {
    this->ax25_post_flags = ax25_post_flags;
    this->m_ax25_post_flags_isSet = true;
}

qint32
SWGPacketModSettings::getAx25Control() {
    return ax25_control;
}
void
SWGPacketModSettings::setAx25Control(qint32 ax25_control) {
    this->ax25_control = ax25_control;
    this->m_ax25_control_isSet = true;
}

qint32
SWGPacketModSettings::getAx25Pid() {
    return ax25_pid;
}
void
SWGPacketModSettings::setAx25Pid(qint32 ax25_pid) {
    this->ax25_pid = ax25_pid;
    this->m_ax25_pid_isSet = true;
}

qint32
SWGPacketModSettings::getPreEmphasis() {
    return pre_emphasis;
}
void
SWGPacketModSettings::setPreEmphasis(qint32 pre_emphasis) {
    this->pre_emphasis = pre_emphasis;
    this->m_pre_emphasis_isSet = true;
}

float
SWGPacketModSettings::getPreEmphasisTau() {
    return pre_emphasis_tau;
}
void
SWGPacketModSettings::setPreEmphasisTau(float pre_emphasis_tau) {
    this->pre_emphasis_tau = pre_emphasis_tau;
    this->m_pre_emphasis_tau_isSet = true;
}

float
SWGPacketModSettings::getPreEmphasisHighFreq() {
    return pre_emphasis_high_freq;
}
void
SWGPacketModSettings::setPreEmphasisHighFreq(float pre_emphasis_high_freq) {
    this->pre_emphasis_high_freq = pre_emphasis_high_freq;
    this->m_pre_emphasis_high_freq_isSet = true;
}

qint32
SWGPacketModSettings::getLpfTaps() {
    return lpf_taps;
}
void
SWGPacketModSettings::setLpfTaps(qint32 lpf_taps) {
    this->lpf_taps = lpf_taps;
    this->m_lpf_taps_isSet = true;
}

qint32
SWGPacketModSettings::getBbNoise() {
    return bb_noise;
}
void
SWGPacketModSettings::setBbNoise(qint32 bb_noise) {
    this->bb_noise = bb_noise;
    this->m_bb_noise_isSet = true;
}

qint32
SWGPacketModSettings::getRfNoise() {
    return rf_noise;
}
void
SWGPacketModSettings::setRfNoise(qint32 rf_noise) {
    this->rf_noise = rf_noise;
    this->m_rf_noise_isSet = true;
}

qint32
SWGPacketModSettings::getWriteToFile() {
    return write_to_file;
}
void
SWGPacketModSettings::setWriteToFile(qint32 write_to_file) {
    this->write_to_file = write_to_file;
    this->m_write_to_file_isSet = true;
}

qint32
SWGPacketModSettings::getSpectrumRate() {
    return spectrum_rate;
}
void
SWGPacketModSettings::setSpectrumRate(qint32 spectrum_rate) {
    this->spectrum_rate = spectrum_rate;
    this->m_spectrum_rate_isSet = true;
}

QString*
SWGPacketModSettings::getCallsign() {
    return callsign;
}
void
SWGPacketModSettings::setCallsign(QString* callsign) {
    this->callsign = callsign;
    this->m_callsign_isSet = true;
}

QString*
SWGPacketModSettings::getTo() {
    return to;
}
void
SWGPacketModSettings::setTo(QString* to) {
    this->to = to;
    this->m_to_isSet = true;
}

QString*
SWGPacketModSettings::getVia() {
    return via;
}
void
SWGPacketModSettings::setVia(QString* via) {
    this->via = via;
    this->m_via_isSet = true;
}

QString*
SWGPacketModSettings::getData() {
    return data;
}
void
SWGPacketModSettings::setData(QString* data) {
    this->data = data;
    this->m_data_isSet = true;
}

qint32
SWGPacketModSettings::getBpf() {
    return bpf;
}
void
SWGPacketModSettings::setBpf(qint32 bpf) {
    this->bpf = bpf;
    this->m_bpf_isSet = true;
}

float
SWGPacketModSettings::getBpfLowCutoff() {
    return bpf_low_cutoff;
}
void
SWGPacketModSettings::setBpfLowCutoff(float bpf_low_cutoff) {
    this->bpf_low_cutoff = bpf_low_cutoff;
    this->m_bpf_low_cutoff_isSet = true;
}

float
SWGPacketModSettings::getBpfHighCutoff() {
    return bpf_high_cutoff;
}
void
SWGPacketModSettings::setBpfHighCutoff(float bpf_high_cutoff) {
    this->bpf_high_cutoff = bpf_high_cutoff;
    this->m_bpf_high_cutoff_isSet = true;
}

qint32
SWGPacketModSettings::getBpfTaps() {
    return bpf_taps;
}
void
SWGPacketModSettings::setBpfTaps(qint32 bpf_taps) {
    this->bpf_taps = bpf_taps;
    this->m_bpf_taps_isSet = true;
}

qint32
SWGPacketModSettings::getScramble() {
    return scramble;
}
void
SWGPacketModSettings::setScramble(qint32 scramble) {
    this->scramble = scramble;
    this->m_scramble_isSet = true;
}

qint32
SWGPacketModSettings::getPolynomial() {
    return polynomial;
}
void
SWGPacketModSettings::setPolynomial(qint32 polynomial) {
    this->polynomial = polynomial;
    this->m_polynomial_isSet = true;
}

qint32
SWGPacketModSettings::getPulseShaping() {
    return pulse_shaping;
}
void
SWGPacketModSettings::setPulseShaping(qint32 pulse_shaping) {
    this->pulse_shaping = pulse_shaping;
    this->m_pulse_shaping_isSet = true;
}

float
SWGPacketModSettings::getBeta() {
    return beta;
}
void
SWGPacketModSettings::setBeta(float beta) {
    this->beta = beta;
    this->m_beta_isSet = true;
}

qint32
SWGPacketModSettings::getSymbolSpan() {
    return symbol_span;
}
void
SWGPacketModSettings::setSymbolSpan(qint32 symbol_span) {
    this->symbol_span = symbol_span;
    this->m_symbol_span_isSet = true;
}

qint32
SWGPacketModSettings::getRgbColor() {
    return rgb_color;
}
void
SWGPacketModSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGPacketModSettings::getTitle() {
    return title;
}
void
SWGPacketModSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

qint32
SWGPacketModSettings::getStreamIndex() {
    return stream_index;
}
void
SWGPacketModSettings::setStreamIndex(qint32 stream_index) {
    this->stream_index = stream_index;
    this->m_stream_index_isSet = true;
}

qint32
SWGPacketModSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGPacketModSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGPacketModSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGPacketModSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGPacketModSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGPacketModSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGPacketModSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGPacketModSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGPacketModSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGPacketModSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}


bool
SWGPacketModSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(mode && *mode != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_rf_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fm_deviation_isSet){
            isObjectUpdated = true; break;
        }
        if(m_gain_isSet){
            isObjectUpdated = true; break;
        }
        if(m_channel_mute_isSet){
            isObjectUpdated = true; break;
        }
        if(m_repeat_isSet){
            isObjectUpdated = true; break;
        }
        if(m_repeat_delay_isSet){
            isObjectUpdated = true; break;
        }
        if(m_repeat_count_isSet){
            isObjectUpdated = true; break;
        }
        if(m_ramp_up_bits_isSet){
            isObjectUpdated = true; break;
        }
        if(m_ramp_down_bits_isSet){
            isObjectUpdated = true; break;
        }
        if(m_ramp_range_isSet){
            isObjectUpdated = true; break;
        }
        if(m_modulate_while_ramping_isSet){
            isObjectUpdated = true; break;
        }
        if(m_mark_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_space_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_ax25_pre_flags_isSet){
            isObjectUpdated = true; break;
        }
        if(m_ax25_post_flags_isSet){
            isObjectUpdated = true; break;
        }
        if(m_ax25_control_isSet){
            isObjectUpdated = true; break;
        }
        if(m_ax25_pid_isSet){
            isObjectUpdated = true; break;
        }
        if(m_pre_emphasis_isSet){
            isObjectUpdated = true; break;
        }
        if(m_pre_emphasis_tau_isSet){
            isObjectUpdated = true; break;
        }
        if(m_pre_emphasis_high_freq_isSet){
            isObjectUpdated = true; break;
        }
        if(m_lpf_taps_isSet){
            isObjectUpdated = true; break;
        }
        if(m_bb_noise_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rf_noise_isSet){
            isObjectUpdated = true; break;
        }
        if(m_write_to_file_isSet){
            isObjectUpdated = true; break;
        }
        if(m_spectrum_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(callsign && *callsign != QString("")){
            isObjectUpdated = true; break;
        }
        if(to && *to != QString("")){
            isObjectUpdated = true; break;
        }
        if(via && *via != QString("")){
            isObjectUpdated = true; break;
        }
        if(data && *data != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_bpf_isSet){
            isObjectUpdated = true; break;
        }
        if(m_bpf_low_cutoff_isSet){
            isObjectUpdated = true; break;
        }
        if(m_bpf_high_cutoff_isSet){
            isObjectUpdated = true; break;
        }
        if(m_bpf_taps_isSet){
            isObjectUpdated = true; break;
        }
        if(m_scramble_isSet){
            isObjectUpdated = true; break;
        }
        if(m_polynomial_isSet){
            isObjectUpdated = true; break;
        }
        if(m_pulse_shaping_isSet){
            isObjectUpdated = true; break;
        }
        if(m_beta_isSet){
            isObjectUpdated = true; break;
        }
        if(m_symbol_span_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
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


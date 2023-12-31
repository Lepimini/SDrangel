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


#include "SWGNavtexDemodSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGNavtexDemodSettings::SWGNavtexDemodSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNavtexDemodSettings::SWGNavtexDemodSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    nav_area = 0;
    m_nav_area_isSet = false;
    filter_station = nullptr;
    m_filter_station_isSet = false;
    filter_type = nullptr;
    m_filter_type_isSet = false;
    udp_enabled = 0;
    m_udp_enabled_isSet = false;
    udp_address = nullptr;
    m_udp_address_isSet = false;
    udp_port = 0;
    m_udp_port_isSet = false;
    log_filename = nullptr;
    m_log_filename_isSet = false;
    log_enabled = 0;
    m_log_enabled_isSet = false;
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
    scope_config = nullptr;
    m_scope_config_isSet = false;
    channel_marker = nullptr;
    m_channel_marker_isSet = false;
    rollup_state = nullptr;
    m_rollup_state_isSet = false;
}

SWGNavtexDemodSettings::~SWGNavtexDemodSettings() {
    this->cleanup();
}

void
SWGNavtexDemodSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    nav_area = 0;
    m_nav_area_isSet = false;
    filter_station = new QString("");
    m_filter_station_isSet = false;
    filter_type = new QString("");
    m_filter_type_isSet = false;
    udp_enabled = 0;
    m_udp_enabled_isSet = false;
    udp_address = new QString("");
    m_udp_address_isSet = false;
    udp_port = 0;
    m_udp_port_isSet = false;
    log_filename = new QString("");
    m_log_filename_isSet = false;
    log_enabled = 0;
    m_log_enabled_isSet = false;
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
    scope_config = new SWGGLScope();
    m_scope_config_isSet = false;
    channel_marker = new SWGChannelMarker();
    m_channel_marker_isSet = false;
    rollup_state = new SWGRollupState();
    m_rollup_state_isSet = false;
}

void
SWGNavtexDemodSettings::cleanup() {



    if(filter_station != nullptr) { 
        delete filter_station;
    }
    if(filter_type != nullptr) { 
        delete filter_type;
    }

    if(udp_address != nullptr) { 
        delete udp_address;
    }

    if(log_filename != nullptr) { 
        delete log_filename;
    }


    if(title != nullptr) { 
        delete title;
    }


    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



    if(scope_config != nullptr) { 
        delete scope_config;
    }
    if(channel_marker != nullptr) { 
        delete channel_marker;
    }
    if(rollup_state != nullptr) { 
        delete rollup_state;
    }
}

SWGNavtexDemodSettings*
SWGNavtexDemodSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNavtexDemodSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&nav_area, pJson["navArea"], "qint32", "");
    
    ::SWGSDRangel::setValue(&filter_station, pJson["filterStation"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&filter_type, pJson["filterType"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&udp_enabled, pJson["udpEnabled"], "qint32", "");
    
    ::SWGSDRangel::setValue(&udp_address, pJson["udpAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&udp_port, pJson["udpPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log_filename, pJson["logFilename"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&log_enabled, pJson["logEnabled"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&stream_index, pJson["streamIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_channel_index, pJson["reverseAPIChannelIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&scope_config, pJson["scopeConfig"], "SWGGLScope", "SWGGLScope");
    
    ::SWGSDRangel::setValue(&channel_marker, pJson["channelMarker"], "SWGChannelMarker", "SWGChannelMarker");
    
    ::SWGSDRangel::setValue(&rollup_state, pJson["rollupState"], "SWGRollupState", "SWGRollupState");
    
}

QString
SWGNavtexDemodSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGNavtexDemodSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_rf_bandwidth_isSet){
        obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));
    }
    if(m_nav_area_isSet){
        obj->insert("navArea", QJsonValue(nav_area));
    }
    if(filter_station != nullptr && *filter_station != QString("")){
        toJsonValue(QString("filterStation"), filter_station, obj, QString("QString"));
    }
    if(filter_type != nullptr && *filter_type != QString("")){
        toJsonValue(QString("filterType"), filter_type, obj, QString("QString"));
    }
    if(m_udp_enabled_isSet){
        obj->insert("udpEnabled", QJsonValue(udp_enabled));
    }
    if(udp_address != nullptr && *udp_address != QString("")){
        toJsonValue(QString("udpAddress"), udp_address, obj, QString("QString"));
    }
    if(m_udp_port_isSet){
        obj->insert("udpPort", QJsonValue(udp_port));
    }
    if(log_filename != nullptr && *log_filename != QString("")){
        toJsonValue(QString("logFilename"), log_filename, obj, QString("QString"));
    }
    if(m_log_enabled_isSet){
        obj->insert("logEnabled", QJsonValue(log_enabled));
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
    if((scope_config != nullptr) && (scope_config->isSet())){
        toJsonValue(QString("scopeConfig"), scope_config, obj, QString("SWGGLScope"));
    }
    if((channel_marker != nullptr) && (channel_marker->isSet())){
        toJsonValue(QString("channelMarker"), channel_marker, obj, QString("SWGChannelMarker"));
    }
    if((rollup_state != nullptr) && (rollup_state->isSet())){
        toJsonValue(QString("rollupState"), rollup_state, obj, QString("SWGRollupState"));
    }

    return obj;
}

qint64
SWGNavtexDemodSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGNavtexDemodSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

float
SWGNavtexDemodSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGNavtexDemodSettings::setRfBandwidth(float rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
    this->m_rf_bandwidth_isSet = true;
}

qint32
SWGNavtexDemodSettings::getNavArea() {
    return nav_area;
}
void
SWGNavtexDemodSettings::setNavArea(qint32 nav_area) {
    this->nav_area = nav_area;
    this->m_nav_area_isSet = true;
}

QString*
SWGNavtexDemodSettings::getFilterStation() {
    return filter_station;
}
void
SWGNavtexDemodSettings::setFilterStation(QString* filter_station) {
    this->filter_station = filter_station;
    this->m_filter_station_isSet = true;
}

QString*
SWGNavtexDemodSettings::getFilterType() {
    return filter_type;
}
void
SWGNavtexDemodSettings::setFilterType(QString* filter_type) {
    this->filter_type = filter_type;
    this->m_filter_type_isSet = true;
}

qint32
SWGNavtexDemodSettings::getUdpEnabled() {
    return udp_enabled;
}
void
SWGNavtexDemodSettings::setUdpEnabled(qint32 udp_enabled) {
    this->udp_enabled = udp_enabled;
    this->m_udp_enabled_isSet = true;
}

QString*
SWGNavtexDemodSettings::getUdpAddress() {
    return udp_address;
}
void
SWGNavtexDemodSettings::setUdpAddress(QString* udp_address) {
    this->udp_address = udp_address;
    this->m_udp_address_isSet = true;
}

qint32
SWGNavtexDemodSettings::getUdpPort() {
    return udp_port;
}
void
SWGNavtexDemodSettings::setUdpPort(qint32 udp_port) {
    this->udp_port = udp_port;
    this->m_udp_port_isSet = true;
}

QString*
SWGNavtexDemodSettings::getLogFilename() {
    return log_filename;
}
void
SWGNavtexDemodSettings::setLogFilename(QString* log_filename) {
    this->log_filename = log_filename;
    this->m_log_filename_isSet = true;
}

qint32
SWGNavtexDemodSettings::getLogEnabled() {
    return log_enabled;
}
void
SWGNavtexDemodSettings::setLogEnabled(qint32 log_enabled) {
    this->log_enabled = log_enabled;
    this->m_log_enabled_isSet = true;
}

qint32
SWGNavtexDemodSettings::getRgbColor() {
    return rgb_color;
}
void
SWGNavtexDemodSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGNavtexDemodSettings::getTitle() {
    return title;
}
void
SWGNavtexDemodSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

qint32
SWGNavtexDemodSettings::getStreamIndex() {
    return stream_index;
}
void
SWGNavtexDemodSettings::setStreamIndex(qint32 stream_index) {
    this->stream_index = stream_index;
    this->m_stream_index_isSet = true;
}

qint32
SWGNavtexDemodSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGNavtexDemodSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGNavtexDemodSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGNavtexDemodSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGNavtexDemodSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGNavtexDemodSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGNavtexDemodSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGNavtexDemodSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGNavtexDemodSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGNavtexDemodSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}

SWGGLScope*
SWGNavtexDemodSettings::getScopeConfig() {
    return scope_config;
}
void
SWGNavtexDemodSettings::setScopeConfig(SWGGLScope* scope_config) {
    this->scope_config = scope_config;
    this->m_scope_config_isSet = true;
}

SWGChannelMarker*
SWGNavtexDemodSettings::getChannelMarker() {
    return channel_marker;
}
void
SWGNavtexDemodSettings::setChannelMarker(SWGChannelMarker* channel_marker) {
    this->channel_marker = channel_marker;
    this->m_channel_marker_isSet = true;
}

SWGRollupState*
SWGNavtexDemodSettings::getRollupState() {
    return rollup_state;
}
void
SWGNavtexDemodSettings::setRollupState(SWGRollupState* rollup_state) {
    this->rollup_state = rollup_state;
    this->m_rollup_state_isSet = true;
}


bool
SWGNavtexDemodSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rf_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_nav_area_isSet){
            isObjectUpdated = true; break;
        }
        if(filter_station && *filter_station != QString("")){
            isObjectUpdated = true; break;
        }
        if(filter_type && *filter_type != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_udp_enabled_isSet){
            isObjectUpdated = true; break;
        }
        if(udp_address && *udp_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_udp_port_isSet){
            isObjectUpdated = true; break;
        }
        if(log_filename && *log_filename != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_log_enabled_isSet){
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
        if(scope_config && scope_config->isSet()){
            isObjectUpdated = true; break;
        }
        if(channel_marker && channel_marker->isSet()){
            isObjectUpdated = true; break;
        }
        if(rollup_state && rollup_state->isSet()){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}


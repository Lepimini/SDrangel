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


#include "SWGATVModSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGATVModSettings::SWGATVModSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGATVModSettings::SWGATVModSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    rf_opp_bandwidth = 0.0f;
    m_rf_opp_bandwidth_isSet = false;
    atv_std = 0;
    m_atv_std_isSet = false;
    nb_lines = 0;
    m_nb_lines_isSet = false;
    fps = 0;
    m_fps_isSet = false;
    atv_mod_input = 0;
    m_atv_mod_input_isSet = false;
    uniform_level = 0.0f;
    m_uniform_level_isSet = false;
    atv_modulation = 0;
    m_atv_modulation_isSet = false;
    video_play_loop = 0;
    m_video_play_loop_isSet = false;
    video_play = 0;
    m_video_play_isSet = false;
    camera_play = 0;
    m_camera_play_isSet = false;
    channel_mute = 0;
    m_channel_mute_isSet = false;
    inverted_video = 0;
    m_inverted_video_isSet = false;
    rf_scaling_factor = 0.0f;
    m_rf_scaling_factor_isSet = false;
    fm_excursion = 0.0f;
    m_fm_excursion_isSet = false;
    force_decimator = 0;
    m_force_decimator_isSet = false;
    show_overlay_text = 0;
    m_show_overlay_text_isSet = false;
    overlay_text = nullptr;
    m_overlay_text_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    image_file_name = nullptr;
    m_image_file_name_isSet = false;
    video_file_name = nullptr;
    m_video_file_name_isSet = false;
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

SWGATVModSettings::~SWGATVModSettings() {
    this->cleanup();
}

void
SWGATVModSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    rf_opp_bandwidth = 0.0f;
    m_rf_opp_bandwidth_isSet = false;
    atv_std = 0;
    m_atv_std_isSet = false;
    nb_lines = 0;
    m_nb_lines_isSet = false;
    fps = 0;
    m_fps_isSet = false;
    atv_mod_input = 0;
    m_atv_mod_input_isSet = false;
    uniform_level = 0.0f;
    m_uniform_level_isSet = false;
    atv_modulation = 0;
    m_atv_modulation_isSet = false;
    video_play_loop = 0;
    m_video_play_loop_isSet = false;
    video_play = 0;
    m_video_play_isSet = false;
    camera_play = 0;
    m_camera_play_isSet = false;
    channel_mute = 0;
    m_channel_mute_isSet = false;
    inverted_video = 0;
    m_inverted_video_isSet = false;
    rf_scaling_factor = 0.0f;
    m_rf_scaling_factor_isSet = false;
    fm_excursion = 0.0f;
    m_fm_excursion_isSet = false;
    force_decimator = 0;
    m_force_decimator_isSet = false;
    show_overlay_text = 0;
    m_show_overlay_text_isSet = false;
    overlay_text = new QString("");
    m_overlay_text_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    image_file_name = new QString("");
    m_image_file_name_isSet = false;
    video_file_name = new QString("");
    m_video_file_name_isSet = false;
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
SWGATVModSettings::cleanup() {


















    if(overlay_text != nullptr) { 
        delete overlay_text;
    }

    if(title != nullptr) { 
        delete title;
    }
    if(image_file_name != nullptr) { 
        delete image_file_name;
    }
    if(video_file_name != nullptr) { 
        delete video_file_name;
    }


    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



}

SWGATVModSettings*
SWGATVModSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGATVModSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&rf_opp_bandwidth, pJson["rfOppBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&atv_std, pJson["atvStd"], "qint32", "");
    
    ::SWGSDRangel::setValue(&nb_lines, pJson["nbLines"], "qint32", "");
    
    ::SWGSDRangel::setValue(&fps, pJson["fps"], "qint32", "");
    
    ::SWGSDRangel::setValue(&atv_mod_input, pJson["atvModInput"], "qint32", "");
    
    ::SWGSDRangel::setValue(&uniform_level, pJson["uniformLevel"], "float", "");
    
    ::SWGSDRangel::setValue(&atv_modulation, pJson["atvModulation"], "qint32", "");
    
    ::SWGSDRangel::setValue(&video_play_loop, pJson["videoPlayLoop"], "qint32", "");
    
    ::SWGSDRangel::setValue(&video_play, pJson["videoPlay"], "qint32", "");
    
    ::SWGSDRangel::setValue(&camera_play, pJson["cameraPlay"], "qint32", "");
    
    ::SWGSDRangel::setValue(&channel_mute, pJson["channelMute"], "qint32", "");
    
    ::SWGSDRangel::setValue(&inverted_video, pJson["invertedVideo"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rf_scaling_factor, pJson["rfScalingFactor"], "float", "");
    
    ::SWGSDRangel::setValue(&fm_excursion, pJson["fmExcursion"], "float", "");
    
    ::SWGSDRangel::setValue(&force_decimator, pJson["forceDecimator"], "qint32", "");
    
    ::SWGSDRangel::setValue(&show_overlay_text, pJson["showOverlayText"], "qint32", "");
    
    ::SWGSDRangel::setValue(&overlay_text, pJson["overlayText"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&image_file_name, pJson["imageFileName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&video_file_name, pJson["videoFileName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&stream_index, pJson["streamIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_channel_index, pJson["reverseAPIChannelIndex"], "qint32", "");
    
}

QString
SWGATVModSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGATVModSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_rf_bandwidth_isSet){
        obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));
    }
    if(m_rf_opp_bandwidth_isSet){
        obj->insert("rfOppBandwidth", QJsonValue(rf_opp_bandwidth));
    }
    if(m_atv_std_isSet){
        obj->insert("atvStd", QJsonValue(atv_std));
    }
    if(m_nb_lines_isSet){
        obj->insert("nbLines", QJsonValue(nb_lines));
    }
    if(m_fps_isSet){
        obj->insert("fps", QJsonValue(fps));
    }
    if(m_atv_mod_input_isSet){
        obj->insert("atvModInput", QJsonValue(atv_mod_input));
    }
    if(m_uniform_level_isSet){
        obj->insert("uniformLevel", QJsonValue(uniform_level));
    }
    if(m_atv_modulation_isSet){
        obj->insert("atvModulation", QJsonValue(atv_modulation));
    }
    if(m_video_play_loop_isSet){
        obj->insert("videoPlayLoop", QJsonValue(video_play_loop));
    }
    if(m_video_play_isSet){
        obj->insert("videoPlay", QJsonValue(video_play));
    }
    if(m_camera_play_isSet){
        obj->insert("cameraPlay", QJsonValue(camera_play));
    }
    if(m_channel_mute_isSet){
        obj->insert("channelMute", QJsonValue(channel_mute));
    }
    if(m_inverted_video_isSet){
        obj->insert("invertedVideo", QJsonValue(inverted_video));
    }
    if(m_rf_scaling_factor_isSet){
        obj->insert("rfScalingFactor", QJsonValue(rf_scaling_factor));
    }
    if(m_fm_excursion_isSet){
        obj->insert("fmExcursion", QJsonValue(fm_excursion));
    }
    if(m_force_decimator_isSet){
        obj->insert("forceDecimator", QJsonValue(force_decimator));
    }
    if(m_show_overlay_text_isSet){
        obj->insert("showOverlayText", QJsonValue(show_overlay_text));
    }
    if(overlay_text != nullptr && *overlay_text != QString("")){
        toJsonValue(QString("overlayText"), overlay_text, obj, QString("QString"));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(image_file_name != nullptr && *image_file_name != QString("")){
        toJsonValue(QString("imageFileName"), image_file_name, obj, QString("QString"));
    }
    if(video_file_name != nullptr && *video_file_name != QString("")){
        toJsonValue(QString("videoFileName"), video_file_name, obj, QString("QString"));
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
SWGATVModSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGATVModSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

float
SWGATVModSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGATVModSettings::setRfBandwidth(float rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
    this->m_rf_bandwidth_isSet = true;
}

float
SWGATVModSettings::getRfOppBandwidth() {
    return rf_opp_bandwidth;
}
void
SWGATVModSettings::setRfOppBandwidth(float rf_opp_bandwidth) {
    this->rf_opp_bandwidth = rf_opp_bandwidth;
    this->m_rf_opp_bandwidth_isSet = true;
}

qint32
SWGATVModSettings::getAtvStd() {
    return atv_std;
}
void
SWGATVModSettings::setAtvStd(qint32 atv_std) {
    this->atv_std = atv_std;
    this->m_atv_std_isSet = true;
}

qint32
SWGATVModSettings::getNbLines() {
    return nb_lines;
}
void
SWGATVModSettings::setNbLines(qint32 nb_lines) {
    this->nb_lines = nb_lines;
    this->m_nb_lines_isSet = true;
}

qint32
SWGATVModSettings::getFps() {
    return fps;
}
void
SWGATVModSettings::setFps(qint32 fps) {
    this->fps = fps;
    this->m_fps_isSet = true;
}

qint32
SWGATVModSettings::getAtvModInput() {
    return atv_mod_input;
}
void
SWGATVModSettings::setAtvModInput(qint32 atv_mod_input) {
    this->atv_mod_input = atv_mod_input;
    this->m_atv_mod_input_isSet = true;
}

float
SWGATVModSettings::getUniformLevel() {
    return uniform_level;
}
void
SWGATVModSettings::setUniformLevel(float uniform_level) {
    this->uniform_level = uniform_level;
    this->m_uniform_level_isSet = true;
}

qint32
SWGATVModSettings::getAtvModulation() {
    return atv_modulation;
}
void
SWGATVModSettings::setAtvModulation(qint32 atv_modulation) {
    this->atv_modulation = atv_modulation;
    this->m_atv_modulation_isSet = true;
}

qint32
SWGATVModSettings::getVideoPlayLoop() {
    return video_play_loop;
}
void
SWGATVModSettings::setVideoPlayLoop(qint32 video_play_loop) {
    this->video_play_loop = video_play_loop;
    this->m_video_play_loop_isSet = true;
}

qint32
SWGATVModSettings::getVideoPlay() {
    return video_play;
}
void
SWGATVModSettings::setVideoPlay(qint32 video_play) {
    this->video_play = video_play;
    this->m_video_play_isSet = true;
}

qint32
SWGATVModSettings::getCameraPlay() {
    return camera_play;
}
void
SWGATVModSettings::setCameraPlay(qint32 camera_play) {
    this->camera_play = camera_play;
    this->m_camera_play_isSet = true;
}

qint32
SWGATVModSettings::getChannelMute() {
    return channel_mute;
}
void
SWGATVModSettings::setChannelMute(qint32 channel_mute) {
    this->channel_mute = channel_mute;
    this->m_channel_mute_isSet = true;
}

qint32
SWGATVModSettings::getInvertedVideo() {
    return inverted_video;
}
void
SWGATVModSettings::setInvertedVideo(qint32 inverted_video) {
    this->inverted_video = inverted_video;
    this->m_inverted_video_isSet = true;
}

float
SWGATVModSettings::getRfScalingFactor() {
    return rf_scaling_factor;
}
void
SWGATVModSettings::setRfScalingFactor(float rf_scaling_factor) {
    this->rf_scaling_factor = rf_scaling_factor;
    this->m_rf_scaling_factor_isSet = true;
}

float
SWGATVModSettings::getFmExcursion() {
    return fm_excursion;
}
void
SWGATVModSettings::setFmExcursion(float fm_excursion) {
    this->fm_excursion = fm_excursion;
    this->m_fm_excursion_isSet = true;
}

qint32
SWGATVModSettings::getForceDecimator() {
    return force_decimator;
}
void
SWGATVModSettings::setForceDecimator(qint32 force_decimator) {
    this->force_decimator = force_decimator;
    this->m_force_decimator_isSet = true;
}

qint32
SWGATVModSettings::getShowOverlayText() {
    return show_overlay_text;
}
void
SWGATVModSettings::setShowOverlayText(qint32 show_overlay_text) {
    this->show_overlay_text = show_overlay_text;
    this->m_show_overlay_text_isSet = true;
}

QString*
SWGATVModSettings::getOverlayText() {
    return overlay_text;
}
void
SWGATVModSettings::setOverlayText(QString* overlay_text) {
    this->overlay_text = overlay_text;
    this->m_overlay_text_isSet = true;
}

qint32
SWGATVModSettings::getRgbColor() {
    return rgb_color;
}
void
SWGATVModSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGATVModSettings::getTitle() {
    return title;
}
void
SWGATVModSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
SWGATVModSettings::getImageFileName() {
    return image_file_name;
}
void
SWGATVModSettings::setImageFileName(QString* image_file_name) {
    this->image_file_name = image_file_name;
    this->m_image_file_name_isSet = true;
}

QString*
SWGATVModSettings::getVideoFileName() {
    return video_file_name;
}
void
SWGATVModSettings::setVideoFileName(QString* video_file_name) {
    this->video_file_name = video_file_name;
    this->m_video_file_name_isSet = true;
}

qint32
SWGATVModSettings::getStreamIndex() {
    return stream_index;
}
void
SWGATVModSettings::setStreamIndex(qint32 stream_index) {
    this->stream_index = stream_index;
    this->m_stream_index_isSet = true;
}

qint32
SWGATVModSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGATVModSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGATVModSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGATVModSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGATVModSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGATVModSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGATVModSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGATVModSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGATVModSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGATVModSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}


bool
SWGATVModSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rf_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rf_opp_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_atv_std_isSet){
            isObjectUpdated = true; break;
        }
        if(m_nb_lines_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fps_isSet){
            isObjectUpdated = true; break;
        }
        if(m_atv_mod_input_isSet){
            isObjectUpdated = true; break;
        }
        if(m_uniform_level_isSet){
            isObjectUpdated = true; break;
        }
        if(m_atv_modulation_isSet){
            isObjectUpdated = true; break;
        }
        if(m_video_play_loop_isSet){
            isObjectUpdated = true; break;
        }
        if(m_video_play_isSet){
            isObjectUpdated = true; break;
        }
        if(m_camera_play_isSet){
            isObjectUpdated = true; break;
        }
        if(m_channel_mute_isSet){
            isObjectUpdated = true; break;
        }
        if(m_inverted_video_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rf_scaling_factor_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fm_excursion_isSet){
            isObjectUpdated = true; break;
        }
        if(m_force_decimator_isSet){
            isObjectUpdated = true; break;
        }
        if(m_show_overlay_text_isSet){
            isObjectUpdated = true; break;
        }
        if(overlay_text && *overlay_text != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
            isObjectUpdated = true; break;
        }
        if(image_file_name && *image_file_name != QString("")){
            isObjectUpdated = true; break;
        }
        if(video_file_name && *video_file_name != QString("")){
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


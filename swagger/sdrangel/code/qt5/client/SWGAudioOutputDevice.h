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

/*
 * SWGAudioOutputDevice.h
 *
 * Audio output device
 */

#ifndef SWGAudioOutputDevice_H_
#define SWGAudioOutputDevice_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGAudioOutputDevice: public SWGObject {
public:
    SWGAudioOutputDevice();
    SWGAudioOutputDevice(QString* json);
    virtual ~SWGAudioOutputDevice();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGAudioOutputDevice* fromJson(QString &jsonString) override;

    QString* getName();
    void setName(QString* name);

    qint32 getIndex();
    void setIndex(qint32 index);

    qint32 getSampleRate();
    void setSampleRate(qint32 sample_rate);

    qint32 getIsSystemDefault();
    void setIsSystemDefault(qint32 is_system_default);

    qint32 getDefaultUnregistered();
    void setDefaultUnregistered(qint32 default_unregistered);

    qint32 getCopyToUdp();
    void setCopyToUdp(qint32 copy_to_udp);

    qint32 getUdpUsesRtp();
    void setUdpUsesRtp(qint32 udp_uses_rtp);

    qint32 getUdpChannelMode();
    void setUdpChannelMode(qint32 udp_channel_mode);

    qint32 getUdpChannelCodec();
    void setUdpChannelCodec(qint32 udp_channel_codec);

    qint32 getUdpDecimationFactor();
    void setUdpDecimationFactor(qint32 udp_decimation_factor);

    QString* getUdpAddress();
    void setUdpAddress(QString* udp_address);

    qint32 getUdpPort();
    void setUdpPort(qint32 udp_port);


    virtual bool isSet() override;

private:
    QString* name;
    bool m_name_isSet;

    qint32 index;
    bool m_index_isSet;

    qint32 sample_rate;
    bool m_sample_rate_isSet;

    qint32 is_system_default;
    bool m_is_system_default_isSet;

    qint32 default_unregistered;
    bool m_default_unregistered_isSet;

    qint32 copy_to_udp;
    bool m_copy_to_udp_isSet;

    qint32 udp_uses_rtp;
    bool m_udp_uses_rtp_isSet;

    qint32 udp_channel_mode;
    bool m_udp_channel_mode_isSet;

    qint32 udp_channel_codec;
    bool m_udp_channel_codec_isSet;

    qint32 udp_decimation_factor;
    bool m_udp_decimation_factor_isSet;

    QString* udp_address;
    bool m_udp_address_isSet;

    qint32 udp_port;
    bool m_udp_port_isSet;

};

}

#endif /* SWGAudioOutputDevice_H_ */

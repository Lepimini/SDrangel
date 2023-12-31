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

/*
 * SWGSDRPlaySettings.h
 *
 * SDRplay1
 */

#ifndef SWGSDRPlaySettings_H_
#define SWGSDRPlaySettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGSDRPlaySettings: public SWGObject {
public:
    SWGSDRPlaySettings();
    SWGSDRPlaySettings(QString* json);
    virtual ~SWGSDRPlaySettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGSDRPlaySettings* fromJson(QString &jsonString) override;

    qint64 getCenterFrequency();
    void setCenterFrequency(qint64 center_frequency);

    qint32 getTunerGain();
    void setTunerGain(qint32 tuner_gain);

    qint32 getLOppmTenths();
    void setLOppmTenths(qint32 l_oppm_tenths);

    qint32 getFrequencyBandIndex();
    void setFrequencyBandIndex(qint32 frequency_band_index);

    qint32 getIfFrequencyIndex();
    void setIfFrequencyIndex(qint32 if_frequency_index);

    qint32 getBandwidthIndex();
    void setBandwidthIndex(qint32 bandwidth_index);

    qint32 getDevSampleRateIndex();
    void setDevSampleRateIndex(qint32 dev_sample_rate_index);

    qint32 getLog2Decim();
    void setLog2Decim(qint32 log2_decim);

    qint32 getFcPos();
    void setFcPos(qint32 fc_pos);

    qint32 getDcBlock();
    void setDcBlock(qint32 dc_block);

    qint32 getIqCorrection();
    void setIqCorrection(qint32 iq_correction);

    qint32 getTunerGainMode();
    void setTunerGainMode(qint32 tuner_gain_mode);

    qint32 getLnaOn();
    void setLnaOn(qint32 lna_on);

    qint32 getMixerAmpOn();
    void setMixerAmpOn(qint32 mixer_amp_on);

    qint32 getBasebandGain();
    void setBasebandGain(qint32 baseband_gain);

    qint32 getIqOrder();
    void setIqOrder(qint32 iq_order);

    qint32 getUseReverseApi();
    void setUseReverseApi(qint32 use_reverse_api);

    QString* getReverseApiAddress();
    void setReverseApiAddress(QString* reverse_api_address);

    qint32 getReverseApiPort();
    void setReverseApiPort(qint32 reverse_api_port);

    qint32 getReverseApiDeviceIndex();
    void setReverseApiDeviceIndex(qint32 reverse_api_device_index);


    virtual bool isSet() override;

private:
    qint64 center_frequency;
    bool m_center_frequency_isSet;

    qint32 tuner_gain;
    bool m_tuner_gain_isSet;

    qint32 l_oppm_tenths;
    bool m_l_oppm_tenths_isSet;

    qint32 frequency_band_index;
    bool m_frequency_band_index_isSet;

    qint32 if_frequency_index;
    bool m_if_frequency_index_isSet;

    qint32 bandwidth_index;
    bool m_bandwidth_index_isSet;

    qint32 dev_sample_rate_index;
    bool m_dev_sample_rate_index_isSet;

    qint32 log2_decim;
    bool m_log2_decim_isSet;

    qint32 fc_pos;
    bool m_fc_pos_isSet;

    qint32 dc_block;
    bool m_dc_block_isSet;

    qint32 iq_correction;
    bool m_iq_correction_isSet;

    qint32 tuner_gain_mode;
    bool m_tuner_gain_mode_isSet;

    qint32 lna_on;
    bool m_lna_on_isSet;

    qint32 mixer_amp_on;
    bool m_mixer_amp_on_isSet;

    qint32 baseband_gain;
    bool m_baseband_gain_isSet;

    qint32 iq_order;
    bool m_iq_order_isSet;

    qint32 use_reverse_api;
    bool m_use_reverse_api_isSet;

    QString* reverse_api_address;
    bool m_reverse_api_address_isSet;

    qint32 reverse_api_port;
    bool m_reverse_api_port_isSet;

    qint32 reverse_api_device_index;
    bool m_reverse_api_device_index_isSet;

};

}

#endif /* SWGSDRPlaySettings_H_ */

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
 * SWGBladeRF2InputReport.h
 *
 * BladeRF2
 */

#ifndef SWGBladeRF2InputReport_H_
#define SWGBladeRF2InputReport_H_

#include <QJsonObject>


#include "SWGFrequencyRange.h"
#include "SWGNamedEnum.h"
#include "SWGRange.h"
#include <QList>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGBladeRF2InputReport: public SWGObject {
public:
    SWGBladeRF2InputReport();
    SWGBladeRF2InputReport(QString* json);
    virtual ~SWGBladeRF2InputReport();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGBladeRF2InputReport* fromJson(QString &jsonString) override;

    SWGFrequencyRange* getFrequencyRange();
    void setFrequencyRange(SWGFrequencyRange* frequency_range);

    SWGRange* getSampleRateRange();
    void setSampleRateRange(SWGRange* sample_rate_range);

    SWGRange* getBandwidthRange();
    void setBandwidthRange(SWGRange* bandwidth_range);

    SWGRange* getGlobalGainRange();
    void setGlobalGainRange(SWGRange* global_gain_range);

    QList<SWGNamedEnum*>* getGainModes();
    void setGainModes(QList<SWGNamedEnum*>* gain_modes);


    virtual bool isSet() override;

private:
    SWGFrequencyRange* frequency_range;
    bool m_frequency_range_isSet;

    SWGRange* sample_rate_range;
    bool m_sample_rate_range_isSet;

    SWGRange* bandwidth_range;
    bool m_bandwidth_range_isSet;

    SWGRange* global_gain_range;
    bool m_global_gain_range_isSet;

    QList<SWGNamedEnum*>* gain_modes;
    bool m_gain_modes_isSet;

};

}

#endif /* SWGBladeRF2InputReport_H_ */

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
 * SWGInstanceConfigResponse.h
 *
 * Preferences, Presets and Commands of the MainSettings saved by Qt
 */

#ifndef SWGInstanceConfigResponse_H_
#define SWGInstanceConfigResponse_H_

#include <QJsonObject>


#include "SWGCommand.h"
#include "SWGFeatureSetPreset.h"
#include "SWGPreferences.h"
#include "SWGPreset.h"
#include <QList>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGInstanceConfigResponse: public SWGObject {
public:
    SWGInstanceConfigResponse();
    SWGInstanceConfigResponse(QString* json);
    virtual ~SWGInstanceConfigResponse();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGInstanceConfigResponse* fromJson(QString &jsonString) override;

    SWGPreferences* getPreferences();
    void setPreferences(SWGPreferences* preferences);

    SWGPreset* getWorkingPreset();
    void setWorkingPreset(SWGPreset* working_preset);

    SWGFeatureSetPreset* getWorkingFeatureSetPreset();
    void setWorkingFeatureSetPreset(SWGFeatureSetPreset* working_feature_set_preset);

    QList<SWGPreset*>* getPresets();
    void setPresets(QList<SWGPreset*>* presets);

    QList<SWGCommand*>* getCommands();
    void setCommands(QList<SWGCommand*>* commands);

    QList<SWGFeatureSetPreset*>* getFeaturesetpresets();
    void setFeaturesetpresets(QList<SWGFeatureSetPreset*>* featuresetpresets);


    virtual bool isSet() override;

private:
    SWGPreferences* preferences;
    bool m_preferences_isSet;

    SWGPreset* working_preset;
    bool m_working_preset_isSet;

    SWGFeatureSetPreset* working_feature_set_preset;
    bool m_working_feature_set_preset_isSet;

    QList<SWGPreset*>* presets;
    bool m_presets_isSet;

    QList<SWGCommand*>* commands;
    bool m_commands_isSet;

    QList<SWGFeatureSetPreset*>* featuresetpresets;
    bool m_featuresetpresets_isSet;

};

}

#endif /* SWGInstanceConfigResponse_H_ */

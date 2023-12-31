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
 * SWGSatelliteState.h
 *
 * 
 */

#ifndef SWGSatelliteState_H_
#define SWGSatelliteState_H_

#include <QJsonObject>


#include "SWGSatellitePass.h"
#include <QList>
#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGSatelliteState: public SWGObject {
public:
    SWGSatelliteState();
    SWGSatelliteState(QString* json);
    virtual ~SWGSatelliteState();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGSatelliteState* fromJson(QString &jsonString) override;

    QString* getName();
    void setName(QString* name);

    float getLatitude();
    void setLatitude(float latitude);

    float getLongitude();
    void setLongitude(float longitude);

    float getAltitude();
    void setAltitude(float altitude);

    float getAzimuth();
    void setAzimuth(float azimuth);

    float getElevation();
    void setElevation(float elevation);

    float getRange();
    void setRange(float range);

    float getRangeRate();
    void setRangeRate(float range_rate);

    float getSpeed();
    void setSpeed(float speed);

    float getPeriod();
    void setPeriod(float period);

    QList<SWGSatellitePass*>* getPasses();
    void setPasses(QList<SWGSatellitePass*>* passes);


    virtual bool isSet() override;

private:
    QString* name;
    bool m_name_isSet;

    float latitude;
    bool m_latitude_isSet;

    float longitude;
    bool m_longitude_isSet;

    float altitude;
    bool m_altitude_isSet;

    float azimuth;
    bool m_azimuth_isSet;

    float elevation;
    bool m_elevation_isSet;

    float range;
    bool m_range_isSet;

    float range_rate;
    bool m_range_rate_isSet;

    float speed;
    bool m_speed_isSet;

    float period;
    bool m_period_isSet;

    QList<SWGSatellitePass*>* passes;
    bool m_passes_isSet;

};

}

#endif /* SWGSatelliteState_H_ */

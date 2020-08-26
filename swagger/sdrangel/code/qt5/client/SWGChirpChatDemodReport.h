/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 5.9.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGChirpChatDemodReport.h
 *
 * ChirpChatDemod
 */

#ifndef SWGChirpChatDemodReport_H_
#define SWGChirpChatDemodReport_H_

#include <QJsonObject>


#include <QList>
#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGChirpChatDemodReport: public SWGObject {
public:
    SWGChirpChatDemodReport();
    SWGChirpChatDemodReport(QString* json);
    virtual ~SWGChirpChatDemodReport();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGChirpChatDemodReport* fromJson(QString &jsonString) override;

    float getChannelPowerDb();
    void setChannelPowerDb(float channel_power_db);

    float getNoisePowerDb();
    void setNoisePowerDb(float noise_power_db);

    float getSignalPowerDb();
    void setSignalPowerDb(float signal_power_db);

    float getSnrPowerDb();
    void setSnrPowerDb(float snr_power_db);

    qint32 getChannelSampleRate();
    void setChannelSampleRate(qint32 channel_sample_rate);

    qint32 getSyncWord();
    void setSyncWord(qint32 sync_word);

    qint32 getHasCrc();
    void setHasCrc(qint32 has_crc);

    qint32 getNbParityBits();
    void setNbParityBits(qint32 nb_parity_bits);

    qint32 getPacketLength();
    void setPacketLength(qint32 packet_length);

    qint32 getNbSymbols();
    void setNbSymbols(qint32 nb_symbols);

    qint32 getNbCodewords();
    void setNbCodewords(qint32 nb_codewords);

    qint32 getHeaderParityStatus();
    void setHeaderParityStatus(qint32 header_parity_status);

    qint32 getHeaderCrcStatus();
    void setHeaderCrcStatus(qint32 header_crc_status);

    qint32 getPayloadParityStatus();
    void setPayloadParityStatus(qint32 payload_parity_status);

    qint32 getPayloadCrcStatus();
    void setPayloadCrcStatus(qint32 payload_crc_status);

    QString* getMessageTimestamp();
    void setMessageTimestamp(QString* message_timestamp);

    QString* getMessageString();
    void setMessageString(QString* message_string);

    QList<QString*>* getMessageBytes();
    void setMessageBytes(QList<QString*>* message_bytes);


    virtual bool isSet() override;

private:
    float channel_power_db;
    bool m_channel_power_db_isSet;

    float noise_power_db;
    bool m_noise_power_db_isSet;

    float signal_power_db;
    bool m_signal_power_db_isSet;

    float snr_power_db;
    bool m_snr_power_db_isSet;

    qint32 channel_sample_rate;
    bool m_channel_sample_rate_isSet;

    qint32 sync_word;
    bool m_sync_word_isSet;

    qint32 has_crc;
    bool m_has_crc_isSet;

    qint32 nb_parity_bits;
    bool m_nb_parity_bits_isSet;

    qint32 packet_length;
    bool m_packet_length_isSet;

    qint32 nb_symbols;
    bool m_nb_symbols_isSet;

    qint32 nb_codewords;
    bool m_nb_codewords_isSet;

    qint32 header_parity_status;
    bool m_header_parity_status_isSet;

    qint32 header_crc_status;
    bool m_header_crc_status_isSet;

    qint32 payload_parity_status;
    bool m_payload_parity_status_isSet;

    qint32 payload_crc_status;
    bool m_payload_crc_status_isSet;

    QString* message_timestamp;
    bool m_message_timestamp_isSet;

    QString* message_string;
    bool m_message_string_isSet;

    QList<QString*>* message_bytes;
    bool m_message_bytes_isSet;

};

}

#endif /* SWGChirpChatDemodReport_H_ */
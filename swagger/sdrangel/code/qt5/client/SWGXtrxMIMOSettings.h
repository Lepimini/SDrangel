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
 * SWGXtrxMIMOSettings.h
 *
 * XTRX
 */

#ifndef SWGXtrxMIMOSettings_H_
#define SWGXtrxMIMOSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGXtrxMIMOSettings: public SWGObject {
public:
    SWGXtrxMIMOSettings();
    SWGXtrxMIMOSettings(QString* json);
    virtual ~SWGXtrxMIMOSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGXtrxMIMOSettings* fromJson(QString &jsonString) override;

    qint32 getExtClock();
    void setExtClock(qint32 ext_clock);

    qint32 getExtClockFreq();
    void setExtClockFreq(qint32 ext_clock_freq);

    qint32 getGpioDir();
    void setGpioDir(qint32 gpio_dir);

    qint32 getGpioPins();
    void setGpioPins(qint32 gpio_pins);

    qint32 getUseReverseApi();
    void setUseReverseApi(qint32 use_reverse_api);

    QString* getReverseApiAddress();
    void setReverseApiAddress(QString* reverse_api_address);

    qint32 getReverseApiPort();
    void setReverseApiPort(qint32 reverse_api_port);

    qint32 getReverseApiDeviceIndex();
    void setReverseApiDeviceIndex(qint32 reverse_api_device_index);

    qint32 getRxDevSampleRate();
    void setRxDevSampleRate(qint32 rx_dev_sample_rate);

    qint32 getLog2HardDecim();
    void setLog2HardDecim(qint32 log2_hard_decim);

    qint32 getLog2SoftDecim();
    void setLog2SoftDecim(qint32 log2_soft_decim);

    qint64 getRxCenterFrequency();
    void setRxCenterFrequency(qint64 rx_center_frequency);

    qint32 getDcBlock();
    void setDcBlock(qint32 dc_block);

    qint32 getIqCorrection();
    void setIqCorrection(qint32 iq_correction);

    qint32 getNcoEnableRx();
    void setNcoEnableRx(qint32 nco_enable_rx);

    qint32 getNcoFrequencyRx();
    void setNcoFrequencyRx(qint32 nco_frequency_rx);

    qint32 getAntennaPathRx();
    void setAntennaPathRx(qint32 antenna_path_rx);

    qint32 getIqOrder();
    void setIqOrder(qint32 iq_order);

    qint32 getLpfBwRx0();
    void setLpfBwRx0(qint32 lpf_bw_rx0);

    qint32 getGainRx0();
    void setGainRx0(qint32 gain_rx0);

    qint32 getGainModeRx0();
    void setGainModeRx0(qint32 gain_mode_rx0);

    qint32 getLnaGainRx0();
    void setLnaGainRx0(qint32 lna_gain_rx0);

    qint32 getTiaGainRx0();
    void setTiaGainRx0(qint32 tia_gain_rx0);

    qint32 getPgaGainRx0();
    void setPgaGainRx0(qint32 pga_gain_rx0);

    qint32 getPwrmodeRx0();
    void setPwrmodeRx0(qint32 pwrmode_rx0);

    qint32 getLpfBwRx1();
    void setLpfBwRx1(qint32 lpf_bw_rx1);

    qint32 getGainRx1();
    void setGainRx1(qint32 gain_rx1);

    qint32 getGainModeRx1();
    void setGainModeRx1(qint32 gain_mode_rx1);

    qint32 getLnaGainRx1();
    void setLnaGainRx1(qint32 lna_gain_rx1);

    qint32 getTiaGainRx1();
    void setTiaGainRx1(qint32 tia_gain_rx1);

    qint32 getPgaGainRx1();
    void setPgaGainRx1(qint32 pga_gain_rx1);

    qint32 getPwrmodeRx1();
    void setPwrmodeRx1(qint32 pwrmode_rx1);

    qint32 getTxDevSampleRate();
    void setTxDevSampleRate(qint32 tx_dev_sample_rate);

    qint32 getLog2HardInterp();
    void setLog2HardInterp(qint32 log2_hard_interp);

    qint32 getLog2SoftInterp();
    void setLog2SoftInterp(qint32 log2_soft_interp);

    qint64 getTxCenterFrequency();
    void setTxCenterFrequency(qint64 tx_center_frequency);

    qint32 getNcoEnableTx();
    void setNcoEnableTx(qint32 nco_enable_tx);

    qint32 getNcoFrequencyTx();
    void setNcoFrequencyTx(qint32 nco_frequency_tx);

    qint32 getAntennaPathTx();
    void setAntennaPathTx(qint32 antenna_path_tx);

    qint32 getLpfBwTx0();
    void setLpfBwTx0(qint32 lpf_bw_tx0);

    qint32 getGainTx0();
    void setGainTx0(qint32 gain_tx0);

    qint32 getPwrmodeTx0();
    void setPwrmodeTx0(qint32 pwrmode_tx0);

    qint32 getLpfBwTx1();
    void setLpfBwTx1(qint32 lpf_bw_tx1);

    qint32 getGainTx1();
    void setGainTx1(qint32 gain_tx1);

    qint32 getPwrmodeTx1();
    void setPwrmodeTx1(qint32 pwrmode_tx1);


    virtual bool isSet() override;

private:
    qint32 ext_clock;
    bool m_ext_clock_isSet;

    qint32 ext_clock_freq;
    bool m_ext_clock_freq_isSet;

    qint32 gpio_dir;
    bool m_gpio_dir_isSet;

    qint32 gpio_pins;
    bool m_gpio_pins_isSet;

    qint32 use_reverse_api;
    bool m_use_reverse_api_isSet;

    QString* reverse_api_address;
    bool m_reverse_api_address_isSet;

    qint32 reverse_api_port;
    bool m_reverse_api_port_isSet;

    qint32 reverse_api_device_index;
    bool m_reverse_api_device_index_isSet;

    qint32 rx_dev_sample_rate;
    bool m_rx_dev_sample_rate_isSet;

    qint32 log2_hard_decim;
    bool m_log2_hard_decim_isSet;

    qint32 log2_soft_decim;
    bool m_log2_soft_decim_isSet;

    qint64 rx_center_frequency;
    bool m_rx_center_frequency_isSet;

    qint32 dc_block;
    bool m_dc_block_isSet;

    qint32 iq_correction;
    bool m_iq_correction_isSet;

    qint32 nco_enable_rx;
    bool m_nco_enable_rx_isSet;

    qint32 nco_frequency_rx;
    bool m_nco_frequency_rx_isSet;

    qint32 antenna_path_rx;
    bool m_antenna_path_rx_isSet;

    qint32 iq_order;
    bool m_iq_order_isSet;

    qint32 lpf_bw_rx0;
    bool m_lpf_bw_rx0_isSet;

    qint32 gain_rx0;
    bool m_gain_rx0_isSet;

    qint32 gain_mode_rx0;
    bool m_gain_mode_rx0_isSet;

    qint32 lna_gain_rx0;
    bool m_lna_gain_rx0_isSet;

    qint32 tia_gain_rx0;
    bool m_tia_gain_rx0_isSet;

    qint32 pga_gain_rx0;
    bool m_pga_gain_rx0_isSet;

    qint32 pwrmode_rx0;
    bool m_pwrmode_rx0_isSet;

    qint32 lpf_bw_rx1;
    bool m_lpf_bw_rx1_isSet;

    qint32 gain_rx1;
    bool m_gain_rx1_isSet;

    qint32 gain_mode_rx1;
    bool m_gain_mode_rx1_isSet;

    qint32 lna_gain_rx1;
    bool m_lna_gain_rx1_isSet;

    qint32 tia_gain_rx1;
    bool m_tia_gain_rx1_isSet;

    qint32 pga_gain_rx1;
    bool m_pga_gain_rx1_isSet;

    qint32 pwrmode_rx1;
    bool m_pwrmode_rx1_isSet;

    qint32 tx_dev_sample_rate;
    bool m_tx_dev_sample_rate_isSet;

    qint32 log2_hard_interp;
    bool m_log2_hard_interp_isSet;

    qint32 log2_soft_interp;
    bool m_log2_soft_interp_isSet;

    qint64 tx_center_frequency;
    bool m_tx_center_frequency_isSet;

    qint32 nco_enable_tx;
    bool m_nco_enable_tx_isSet;

    qint32 nco_frequency_tx;
    bool m_nco_frequency_tx_isSet;

    qint32 antenna_path_tx;
    bool m_antenna_path_tx_isSet;

    qint32 lpf_bw_tx0;
    bool m_lpf_bw_tx0_isSet;

    qint32 gain_tx0;
    bool m_gain_tx0_isSet;

    qint32 pwrmode_tx0;
    bool m_pwrmode_tx0_isSet;

    qint32 lpf_bw_tx1;
    bool m_lpf_bw_tx1_isSet;

    qint32 gain_tx1;
    bool m_gain_tx1_isSet;

    qint32 pwrmode_tx1;
    bool m_pwrmode_tx1_isSet;

};

}

#endif /* SWGXtrxMIMOSettings_H_ */

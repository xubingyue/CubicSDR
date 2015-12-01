#pragma once
#include "Modem.h"
#include "ModemAnalog.h"

class ModemFM : public ModemAnalog {
public:
    ModemFM();
    ~ModemFM();
    
    std::string getName();
    
    Modem *factory();

    int getDefaultSampleRate();

    void demodulate(ModemKit *kit, ModemIQData *input, AudioThreadInput *audioOut);

private:
    freqdem demodFM;
};
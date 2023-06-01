using namespace std;
#include <iostream>
class RF
{
private:
    double noise_figure, Signal_Power,power_floor;
    double bandwidth, SNR_IN, SNR_OUT;
    double sensitvety,temperature;


public:
    double Sensitvety(double noise_figure, double Signal_Power, double bandwidth, double SNR_IN);
    double get_sensitvety() const { return sensitvety; };
    // setters & getters
    double get_bandwidth() const { return bandwidth; };
    int set_bandwidth();
    int test(double b);
    int set_noise_figure();
    double get_noise_figure() const { return noise_figure; };
    int set_SNR_IN();
    double get_snr_in() const { return SNR_IN; };
    int set_SNR_OUT();
    double get_snr_out() const { return SNR_OUT; };
    int set_Power();
    double get_power() const { return Signal_Power; };
    int set_temperature();
    int  get_temperature()const{return temperature;};
    int noise_floor_caluc(double bandwidth,double temp);
    double get_noise_floor() const{return power_floor;};

};

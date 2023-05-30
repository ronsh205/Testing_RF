using namespace std;
#include <iostream>
class RF
{
private:
    double noise_figure, Signal_Power;
    double bandwidth, SNR_IN, SNR_OUT;
    double sensitvety;
public: 
    double Sensitvety(double noise_figure, double Signal_Power, double bandwidth, double SNR_IN);

    // setters & getters
    double RF ::get_bandwidth() const { return bandwidth; };
    int set_bandwidth(double b);
  

};

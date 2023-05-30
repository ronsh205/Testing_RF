#include "/home/ron/Documents/c++/caulclter_RF/Testing_RF/Sensitvety.hpp"
#include <bits/stdc++.h>

double RF::Sensitvety(double noise_figure, double Signal_Power, double Bandwidth, double SNR_IN)
{
    sensitvety = Signal_Power + noise_figure + (10 * log10(Bandwidth)) + SNR_IN;
    return sensitvety;
}

int RF ::set_bandwidth(double b)
{
    // ERROR
    if (b < numeric_limits<double>::max())
    {
        std::cout << "The entered value is less than the maximum double value." << std::endl;
        return 1;
    }
    bandwidth = b;
    return 0;
}

int main()
{
    RF user_test;
    double noise_figure, Signal_Power;
    double Bandwidth, SNR_IN, SNR_OUT;
    double user_sensitvety;
    cout << "enter noise figure at dB " << endl;
    cin >> noise_figure;
    cout << "enter Signal_Power at dBm " << endl;
    cin >> Signal_Power;
    cout << "enter SNR_IN at dB " << endl;
    cin >> SNR_IN;
    cout << "enter Bandwidth at Hz " << endl;
    cin >> Bandwidth;
    user_sensitvety = user_test.Sensitvety(noise_figure, Signal_Power, Bandwidth, SNR_IN);
    cout << "the sensitvety of systems is " << user_sensitvety << " dBm " << endl;
    return 0;
}

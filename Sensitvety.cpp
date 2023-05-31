#include "Sensitvety.hpp"
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <cmath>
const double Boltzmann_Constant = 1.380649e-23;

double RF::Sensitvety(double noise_figure, double Signal_Power, double Bandwidth, double SNR_IN)
{
    sensitvety = Signal_Power + noise_figure + (10 * log10(Bandwidth)) + SNR_IN;
    return sensitvety;
}

int RF ::set_bandwidth()
{
    double b;
    cout << "enter Bandwidth at Hz " << endl;
    cin >> b;
    // ERROR
    if (b > numeric_limits<double>::max())
    {
        std::cout << "The entered value bandwith is less than the maximum double value." << std::endl;
        return 1;
    }
    else
    {
        bandwidth = b;
        return 0;
    }
}
int RF ::set_noise_figure()
{
    double noise;
    cout << "enter noise dB " << endl;
    cin >> noise;
    // ERROR
    if (noise > numeric_limits<double>::max())
    {
        std::cout << "The entered value noise is less than the maximum double value." << std::endl;
        return 1;
    }
    else
    {
        bandwidth = noise;
        return 0;
    }
}
int RF ::set_SNR_IN()
{
    double SNR_IN_user;
    cout << "enter SNR in dB " << endl;
    cin >> SNR_IN_user;
    if (SNR_IN_user > numeric_limits<double>::max())
    {
        std::cout << "The entered value SNR in is less than the maximum double value." << std::endl;
        return 1;
    }
    else
    {
        SNR_IN = SNR_IN_user;
        return 0;
    }
}
int RF ::set_SNR_OUT()
{
    double SNR_OUT_user;
    cout << "enter SNR out at dB " << endl;
    cin >> SNR_OUT_user;
    if (SNR_OUT_user > numeric_limits<double>::max())
    {
        std::cout << "The entered value SNR out is less than the maximum double value." << std::endl;
        return 1;
    }
    else
    {
        SNR_IN = SNR_OUT_user;
        return 0;
    }
}
int RF ::set_Power()
{
    double power;
    cout << "enter power in dBm  " << endl;
    cin >> power;
    if (power > numeric_limits<double>::max())
    {
        std::cout << "The entered value is less than the maximum double value." << std::endl;
        return 1;
    }
    else
    {
        SNR_IN = power;
        return 0;
    }
}

int RF::test(double b)
{
    return 0;
}

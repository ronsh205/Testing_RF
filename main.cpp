#include "./Sensitvety.cpp"
int main()
{
    RF user_test;
    user_test.set_bandwidth();
    user_test.set_noise_figure();
    user_test.set_Power();
    user_test.set_SNR_IN();
    user_test.set_temperature();
    user_test.Sensitvety(user_test.get_noise_figure(), user_test.get_power(), user_test.get_bandwidth(), user_test.get_snr_in());
    cout << "the sensitvety of systems is " << user_test.get_sensitvety() << " dBm " << endl;
    cout << "Boltzmann constant vaule is " << Boltzmann_Constant << endl;
    cout << "temperature it Kalvin is  " << user_test.get_temperature() << endl;
    user_test.noise_floor_caluc(user_test.get_bandwidth(), user_test.get_temperature());
    cout << "the noise floor is " << user_test.get_noise_floor() <<" dBm" <<endl;
   
    return 0;
}
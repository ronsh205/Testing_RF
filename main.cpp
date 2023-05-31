#include "./Sensitvety.cpp"
int main()
{
    RF user_test;
    user_test.set_bandwidth();
    user_test.set_noise_figure();
    user_test.set_Power();
    user_test.set_SNR_IN();
    user_test.Sensitvety(user_test.get_noise_figure(), user_test.get_power(),user_test.get_bandwidth(),user_test.get_snr_in());
    cout << "the sensitvety of systems is " << user_test.get_sensitvety() << " dBm " << endl;
    return 0;
}

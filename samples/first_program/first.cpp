#include <iostream>
#include <pigpiod_if2.h>
//#include <pigpio.h>

using namespace std;

const int LED = 6;

int PigpioSetup(){
    // handshake with the daemon and get a handle
    char *addrStr = NULL;
    char *portStr = NULL;

    // returns an integer handle that will be used to identify this program to the daemon
    // every time it makes a function call.
    int pi = pigpio_start(addrStr, portStr);

    // set pin mode and desired state (initialize to low)
    set_mode(pi, LED, PI_OUTPUT);
    gpio_write(pi, LED, 0);

    return pi;
}

int main(){

    // initialize the pipiod interface with handshake
    cout << "Initializing GPIO." << endl;
    int pi = PigpioSetup();

    // check that the handshake went ok
    if (pi >= 0){
        cout << "Daemon interface started ok at: " << pi << endl;
    } else {
        cout << "Failed to connect to PIGPIO Daemon - try running sudo pigpiod and try again" << endl;
        return -1;
    }


    // normal program execution begins
    // turn led on
    cout << "Turning led on." << endl;
    gpio_write(pi, LED, 1);
    
    // sleep for 3.2 seconds
    time_sleep(3.2);

    // turn led off
    cout << "Turning led off." << endl;
    gpio_write(pi,LED, 0);

    // discionnect from pigpio daemon
    cout << "Disconnect from pigpio daemon." << endl;
    pigpio_stop(pi);

    return 0;
}
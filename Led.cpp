#include <iostream>
#include <stdio.h>
#include "pico/stdlib.h"
#include <string>


using namespace std;
class ledpin {
    
    public: 
    ledpin(uint lednumber_i){
        lednumber=lednumber_i;
    }
    const uint get_lednumber(){
        return lednumber;
    }
    private:
    uint lednumber;
  
};


const uint led_pin = 25;
int main(){
    int x = 0;
    ledpin test(25);
    gpio_init(test.get_lednumber());
    gpio_set_dir(test.get_lednumber(), GPIO_OUT);


   
    while(true){
    gpio_put(test.get_lednumber(),true);
    sleep_ms(1000);
    gpio_put(test.get_lednumber(),0);
    sleep_ms(1000);
    x =+ 5;
    }}

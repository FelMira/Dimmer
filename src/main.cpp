#include <mbed.h>

int main() {
PwmOut led(LED1);
Serial tela(USBTX, USBRX);
char c;
while(true){
  c= tela.getc();
  if(c = '+'){
    led = led+0.1;
  }
  if(c = '-'){
    led = led-0.1;
  }
}
}
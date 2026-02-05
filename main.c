#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

void pisca(int tempo){
  gpio_set_level(2,1);
    vTaskDelay(tempo / portTICK_PERIOD_MS);
    gpio_set_level(2,0);
    vTaskDelay(250 / portTICK_PERIOD_MS);
}
void S(){
  pisca(200);
    pisca(200);
    pisca(200);
    printf("S\n"); //Primeiro carácter
}
void O(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    pisca(800);
    pisca(800);
    pisca(800);
    printf("O\n"); //Segundo carácter
}
void app_main() {
  gpio_set_direction(2,GPIO_MODE_OUTPUT);
  gpio_set_level(2,0);
  while (true) {
  S();
  O();
  S();
   vTaskDelay(250 / portTICK_PERIOD_MS);
    printf("  \n"); //Primeiro carácter
  }
    
}

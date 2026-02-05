#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define ponto 200
#define linha 800

void pisca(int tempo){
  gpio_set_level(2,1);
    vTaskDelay(tempo / portTICK_PERIOD_MS);
    gpio_set_level(2,0);
    vTaskDelay(250 / portTICK_PERIOD_MS);
}
void S(){
  pisca(ponto);
    pisca(ponto);
    pisca(ponto);
    printf("S\n"); //Primeiro carácter
}
void O(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    pisca(linha);
    pisca(linha);
    pisca(linha);
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

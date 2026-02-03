#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

void app_main() {
  gpio_set_direction(2,GPIO_MODE_OUTPUT);
  gpio_set_level(2,0);
  while (true) {
    vTaskDelay(250 / portTICK_PERIOD_MS);
    gpio_set_level(2,0);
     vTaskDelay(250 / portTICK_PERIOD_MS);
    gpio_set_level(2,1);
    vTaskDelay(250 / portTICK_PERIOD_MS);
    gpio_set_level(2,0);
    vTaskDelay(250 / portTICK_PERIOD_MS);
      gpio_set_level(2,1);
      vTaskDelay(250 / portTICK_PERIOD_MS);
      gpio_set_level(2,0);
      vTaskDelay(250 / portTICK_PERIOD_MS);
      gpio_set_level(2,1);
      vTaskDelay(250 / portTICK_PERIOD_MS);
       gpio_set_level(2,0);
       printf("S\n"); //Primeiro carácter
       vTaskDelay(500 / portTICK_PERIOD_MS);
       gpio_set_level(2,1);
        vTaskDelay(500 / portTICK_PERIOD_MS);
         gpio_set_level(2,0);
         vTaskDelay(500 / portTICK_PERIOD_MS);
         gpio_set_level(2,1);
         vTaskDelay(500 / portTICK_PERIOD_MS);
         gpio_set_level(2,0);
         vTaskDelay(500 / portTICK_PERIOD_MS);
         gpio_set_level(2,1);
         vTaskDelay(500 / portTICK_PERIOD_MS);
         gpio_set_level(2,0);
         printf("O\n"); //Segundo carácter
         vTaskDelay(250 / portTICK_PERIOD_MS);
         gpio_set_level(2,1);
          vTaskDelay(250 / portTICK_PERIOD_MS);
           gpio_set_level(2,0);
            vTaskDelay(250 / portTICK_PERIOD_MS);
            gpio_set_level(2,1);
             vTaskDelay(250 / portTICK_PERIOD_MS);
             gpio_set_level(2,0);
              vTaskDelay(250 / portTICK_PERIOD_MS);
              gpio_set_level(2,1);
              vTaskDelay(250 / portTICK_PERIOD_MS);
              gpio_set_level(2,0);
              printf("S\n"); //Terceiro carácter
              vTaskDelay(1000 / portTICK_PERIOD_MS);
              printf(" \n"); //Espaço para repetir o programa
    
  }
    
}
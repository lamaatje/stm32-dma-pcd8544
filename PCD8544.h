/*
 * PDC8544.h
 *
 *  Created on: Dec 26, 2024
 *      Author: Stefan
 */

#ifndef PCD8544_H_
#define PCD8544_H_

#define LCD_RESET_PIN PCD_RST_Pin // LCD reset pin.
#define LCD_RESET_PORT PCD_RST_GPIO_Port

#define LCD_CE_PIN PCD_CE_Pin // Chip select pin
#define LCD_CE_PORT PCD_CE_GPIO_Port

#define LCD_DC_PIN PCD_DC_Pin // Data_Command select pin.
#define LCD_DC_PORT PCD_DC_GPIO_Port

#define LCD_SPI_INTERFACE hspi2 // LCD SPI interface.
extern SPI_HandleTypeDef LCD_SPI_INTERFACE;

#define LCD_FB_SIZE 504

#define LCD_MAX_TIMEOUT_TICKS 1000

void LCD_Init(void);
int32_t LCD_Write_Commands(uint8_t *data, uint16_t num);
int32_t LCD_Write_FB();
int32_t LCD_Busy();
uint8_t *LCD_GetFB();
void LCD_Write_Line(uint8_t PosX, uint8_t PosY, char * str);

#endif /* PCD8544_H_ */
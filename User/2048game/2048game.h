#ifndef STM32_2048
#define STM32_2048

#include "stm32f10x.h"
#include "./2048game/2048game.h"

void Init_2048(uint16_t g[4][4], uint16_t v[4][4], uint16_t *maxNum, uint16_t *score);

void DisplayGame(uint16_t g[4][4], uint16_t maxNum, uint16_t score);

void ClearAndShow(uint8_t num);

void DisplayaLine(uint16_t g[4][4], uint8_t i);

uint8_t Test(uint16_t g[4][4], uint8_t i, uint8_t j, uint8_t k);

uint8_t Duplicate(uint16_t g[4][4]);

uint8_t GameOver(uint16_t g[4][4], uint16_t v[4][4]);

uint8_t WinGame(uint16_t g[4][4]);

uint8_t RandomGenerator(void);

void AddBlock(uint16_t g[4][4], uint16_t v[4][4], uint8_t num, uint16_t* maxNum, uint16_t score);

void BeginGame(uint16_t g[4][4], uint16_t v[4][4], uint16_t* maxNum, uint16_t* score);

void MoveStep(uint16_t g[4][4], uint16_t v[4][4], uint16_t* maxNum, uint16_t* score, uint8_t direction, uint8_t* havewin, uint8_t* havelose);

void DisplayDirection(uint8_t direction);

void DisplayNumPic(uint8_t i, uint8_t j, uint16_t number);

uint8_t EnsureDirection(float pitch, float roll);

uint8_t MaxAmong4(float up, float down, float left, float right);

#endif

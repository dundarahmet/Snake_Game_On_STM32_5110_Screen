/*
 * snake_game.h
 *
 *  Created on: Jun 2, 2021
 *      Author: ad
 */

#ifndef INC_SNAKE_GAME_H_
#define INC_SNAKE_GAME_H_

#include "pcd8544_stm32f407xx.h"

volatile uint8_t head_row ;
volatile uint8_t head_column ;

volatile uint8_t food_row ;
volatile uint8_t food_column ;

volatile uint8_t game_status ;
volatile uint8_t snake_length ;
volatile uint8_t move_status ;
volatile uint8_t base[12][21] ;

uint8_t game_over_layout[504] ;
uint8_t start_game_layour[504] ;
uint8_t win_layout[504] ;


#define EMPTLY_BLOCK											(uint8_t) 0x0
#define DIRECTION_RIGHT											(uint8_t) 0x4
#define DIRECTION_LEFT											(uint8_t) 0x5
#define DIRECTION_UP											(uint8_t) 0x6
#define DIRECTION_DOWN											(uint8_t) 0x7
#define FOOD_BLOCK												(uint8_t) 0x8

// 0: 0000 = No direction. No snake.
// 4: 0100	= Direction: right, Snake: Yes
// 5: 0101	= Direction: left,  Snake: Yes
// 6: 0110	= Direction: up,    Snake: Yes
// 7: 0111	= Direction: down,  Snake: Yes
// 8: 1000 = Food


// Game status value
#define STOP													(uint8_t) 0x0
#define START													(uint8_t) 0x1
#define GAME_OVER												(uint8_t) 0xFF
#define WIN														(uint8_t) 0xF

#define WILL_MOVE												(uint8_t) 0x1
#define MOVE_DIRECTION_RIGHT									(uint8_t) 0x2
#define MOVE_DIRECTION_LEFT										(uint8_t) 0x3
#define MOVE_DIRECTION_UP										(uint8_t) 0x4
#define MOVE_DIRECTION_DOWN										(uint8_t) 0x5


void update (void) ;

void move (void) ;
void move_snake_one_block_without_head (void) ;
void move_right (void) ;
void move_left (void) ;
void move_up (void) ;
void move_down (void) ;


void game_init (void) ;
void game_start (void)  ;
void set_new_food_position (void) ;


void start_game_graph (void) ;
void game_over_graph (void) ;
void win_graph (void) ;


void print_screen (void) ;
void Buttons_Init (void) ;


#endif /* INC_SNAKE_GAME_H_ */

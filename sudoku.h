/*
 * sudoku.h
 * 
 * Header file containing the definitions and constants needed for Sudoku
 *
 */

/* Include Other Header Files */

/* The number of rows in a Sudoku Board. */
#define NUM_ROWS 9
/* The number of columns in a Sudoku Board. */
#define NUM_COLS 9
/* Set Size */
#define SET_SIZE 9
/* Number of Sets */
#define NUM_SETS 9 + 9 + 9

/* Define a Sudoku Board */
typedef struct {
    unsigned char board[NUM_ROWS][NUM_COLS];
} t_sudoku_board;

/* Function Prototypes */
t_sudoku_board *construct_new_sudoku_board();
void construct_sets_from_board(t_sudoku_board *board, t_set sets[]);
int score_board(t_sudoku_board *board, t_sudoku_board *correct_board);

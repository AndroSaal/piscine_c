#include <stdio.h>

void ft_fill_dead_cells(int chessboard[8][8], int i, int j);
void ft_ten_queens_puzzle(void)
{
    int i = 0;
    int j = 0;
    int chessboard[8][8];
      printf("%s", "OK_3");
    while (i < 9)
    {
        while (j < 9)
        {
            chessboard[i][j] = 0;
            j++;
        }
        i++;
    }
    i = 0;
    j = 0;
    while (i < 9)
    {
        while (j < 9)
        {
            if (chessboard[i][j] == 0)
            {
                chessboard[i][j] = 2;
                ft_fill_dead_cells(chessboard, i, j);
            }
            j++;
            
        }
        i++;
    }
    printf("%s", "OK_1");
    i = 0;
    j = 0;
    while (i <= 9)
    {
        while (j <= 9)
        {
            printf("%d", chessboard[i][j]);
            j++;
        }
        i++;
    }
}

void ft_fill_dead_cells(int chessboard[8][8], int i, int j)
{
    printf("%s", "OK_2");
    int string_coordinate = j;
    int colum_coordinate = i;
    for (int m = 0; m != 8; m++)
    {
        while (string_coordinate > 0 && colum_coordinate > 0) 
        {
            string_coordinate--;
            colum_coordinate--;
            chessboard[colum_coordinate][string_coordinate] = 1;
        }
        string_coordinate = j;
        colum_coordinate = i;
        while (string_coordinate < 9 && colum_coordinate < 9)
        {
            string_coordinate++;
            colum_coordinate++;
            chessboard[colum_coordinate][string_coordinate] = 1;
        }
        string_coordinate = j;
        colum_coordinate = i;
        while (string_coordinate > 0 && colum_coordinate > 0)
        {
            string_coordinate--;
            chessboard[colum_coordinate][string_coordinate] = 1;
        }
        while (string_coordinate < 9)
        {
            string_coordinate++;
            chessboard[colum_coordinate][string_coordinate] = 1;
        }
        while (colum_coordinate > 0)
        {
            colum_coordinate--;
            chessboard[colum_coordinate][string_coordinate] = 1;
        }
        while (colum_coordinate < 9)
        {
            colum_coordinate++;
            chessboard[colum_coordinate][string_coordinate] = 1;
        }
                while (string_coordinate > 0 && colum_coordinate < 9)
        {
            string_coordinate--;
            colum_coordinate++;
            chessboard[colum_coordinate][string_coordinate] = 1;
        }
                while (string_coordinate < 9 && colum_coordinate > 0)
        {
            string_coordinate++;
            colum_coordinate--;
            chessboard[colum_coordinate][string_coordinate] = 1;
        }
    }
}
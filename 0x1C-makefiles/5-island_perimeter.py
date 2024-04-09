#!/usr/bin/python3
"""This module has a function, island_perimeter"""


def island_perimeter(grid):
    """ This function returns the perimeter of
    the island described in grid """

    perimeter = 0
    ends = 0

    for x in range(len(grid)):
        for y in range(len(grid[0])):
            if grid[x][y] == 1:
                perimeter += 1
                if (x > 0 and grid[x -1][y] == 1):
                    ends += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    ends += 1
    return perimeter * 4 - (ends * 2)

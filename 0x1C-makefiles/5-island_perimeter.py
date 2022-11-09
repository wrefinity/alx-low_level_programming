#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """ return the perimeter of an island """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for col in range(height):
        for row in range(width):
            if grid[col][row] == 1:
                size += 1
                if (row > 0 and grid[col][row - 1] == 1):
                    edges += 1
                if (col > 0 and grid[col - 1][row] == 1):
                    edges += 1
    return size * 4 - edges * 2

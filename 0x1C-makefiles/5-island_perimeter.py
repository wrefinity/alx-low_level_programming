#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """ return the perimeter of an island """
    perim = 0
    gd = []
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            gd.append(grid[i][j])
    for i in range(len(gd)):
        if i < len(gd) - 1 and i > 0:
            if gd[i] == 0 and gd[i + 1] == 1 or gd[i] == 0 and gd[i - 1] == 1:
                perim += 1
    if perim % 2 == 0:
        perim *= 2
    else:
        perim = (perim * 2) - 1
    return perim

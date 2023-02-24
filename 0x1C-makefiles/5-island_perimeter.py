#!/usr/bin/python3
"""Function to calculate perimeter"""


def island_perimeter(grid):
    """calculate width and heigh"""
    height = 0
    width = 0
    width_list = []
    for i in range(0, len(grid[0])):
        width_list.append(0)

    rest = 0
    for n in grid[0]:
        width += n

    for i in range(1, len(grid)):
        for n in grid[i]:
            width += n
        rest = 0
        for j in range(len(grid[i])):
            if grid[i][j] == 1 and grid[i-1][j] == 1:
                rest += 1
        width = width - rest
    inv_grid = list(zip(*grid))

    # Calculates heigh
    rest = 0

    for n in inv_grid[0]:
        height += n

    for i in range(1, len(inv_grid)):
        for n in inv_grid[i]:
            height += n
        rest = 0
        for j in range(len(inv_grid[i])):
            if inv_grid[i][j] == 1 and inv_grid[i-1][j] == 1:
                rest += 1
        height = height - rest

    perimeter = width * 2 + height * 2
    return perimeter

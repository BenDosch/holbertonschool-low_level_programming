#!/usr/bin/python3
""" Module containing a function
that finds the perimiter of and island"""


def island_perimeter(grid):
    """Calculates the perimeter of an island"""
    perimiter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i != 0:
                    if not grid[i - 1][j]:
                        perimiter += 1
                else:
                    perimiter += 1
                if i != len(grid) - 1:
                    if not grid[i + 1][j]:
                        perimiter += 1
                else:
                    perimiter += 1
                if j != 0:
                    if not grid[i][j - 1]:
                        perimiter += 1
                else:
                    perimiter += 1
                if j != len(grid[i]) - 1:
                    if not grid[i][j + 1]:
                        perimiter += 1
                else:
                    perimiter += 1
    return perimiter

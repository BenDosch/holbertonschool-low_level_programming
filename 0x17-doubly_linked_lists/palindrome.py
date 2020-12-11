#!/usr/bin/python3
max_p = 0
for i in range(111, 1000):
    for j in range(111, 1000):
        x = i * j
        x = str(x)
        if x[0] == x[-1] and x[1] == x[-2] and x[2] == x[-3]:
            max_p = x
            max_i = i
            max_j = j
print(str(max_i) + " * " + str(max_j) + " = " + max_p)

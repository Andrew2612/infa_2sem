import matplotlib.pyplot as plt
import numpy as np

x = [100, 500, 1000, 2000, 5000, 10000, 25000, 50000, 80000]
y = [9, 223, 869, 4204, 19968, 73971, 548958, 1836166, 4553977]

plt.xticks(np.arange(0, 600000, step = 100000))
plt.yticks(np.arange(0, 15000000, step = 1000000))

plt.scatter(x, y, s=20, c='b')
plt.plot(x,y)

plt.xlabel('Array size')
plt.ylabel('Time, microseconds')
plt.show()

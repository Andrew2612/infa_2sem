import matplotlib.pyplot as plt
import numpy as np

x = [100, 500, 1000, 2000, 5000, 20000, 50000, 100000, 200000, 500000]
y = [58, 83, 101, 118, 125, 132, 143, 154, 157, 179]

plt.xticks(np.arange(0, 600000, step = 100000))
plt.yticks(np.arange(0, 200, step = 25))

plt.scatter(x, y, s=20, c='b')
plt.plot(x,y)

plt.xlabel('Array size')
plt.ylabel('Time, microseconds')
plt.show()

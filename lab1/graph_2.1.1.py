import matplotlib.pyplot as plt
import numpy as np

x = [100, 500, 1000, 2000, 5000, 20000, 50000, 100000]
y = [18, 440, 1800, 7050, 54235, 761728, 4163556, 13619831]

plt.xticks(np.arange(0, 600000, step = 100000))
plt.yticks(np.arange(0, 15000000, step = 1000000))

plt.scatter(x, y, s=20, c='b')
plt.plot(x,y)

plt.xlabel('Array size')
plt.ylabel('Time, microseconds')
plt.show()

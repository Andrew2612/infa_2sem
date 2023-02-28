import matplotlib.pyplot as plt
import numpy as np

x = [100, 500, 1000, 2000, 5000, 10000, 25000, 50000, 80000]
y = [19, 688, 1728, 6167, 24273, 188903, 823739, 2174242, 6076729]

plt.xticks(np.arange(0, 100000, step = 20000))
plt.yticks(np.arange(0, 15000000, step = 1000000))

plt.scatter(x, y, s=20, c='b')
plt.plot(x,y)

plt.xlabel('Array size')
plt.ylabel('Time, microseconds')
plt.show()
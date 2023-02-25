import matplotlib.pyplot as plt
import numpy as np

x = [100, 500, 1000, 2000, 5000, 20000, 50000, 100000, 200000, 500000]
y = [202, 1048, 1960, 3913, 10065, 39413, 102020, 199750, 407099, 1030386]

plt.xticks(np.arange(0, 600000, step = 100000))
plt.yticks(np.arange(0, 1500000, step = 100000))

plt.scatter(x, y, s=20, c='b')
plt.plot(x,y)

plt.xlabel('Array size')
plt.ylabel('Time, microseconds')
plt.show()

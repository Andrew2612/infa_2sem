import matplotlib.pyplot as plt
import numpy as np

x = [100, 500, 1000, 2000, 5000, 20000, 50000, 100000]
y = [20, 543, 2229, 13314, 33596, 617501, 3581732, 13699657]

plt.xticks(np.arange(0, 600000, step = 100000))
plt.yticks(np.arange(0, 15000000, step = 1000000))

plt.scatter(x, y, s=20, c='b')
plt.plot(x,y)

plt.xlabel('Array size')
plt.ylabel('Time, microseconds')
plt.show()

import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

df1 = pd.read_csv("combsort.csv")
df2 = pd.read_csv("hibbardsort.csv")
df3 = pd.read_csv("fibsort.csv")

N1 = np.array(df1["N"])
time1 = np.array(df1["number of swaps"])

N2 = np.array(df2["N"])
time2 = np.array(df2["number of swaps"])

N3 = np.array(df3["N"])
time3 = np.array(df3["number of swaps"])

fig, ax = plt.subplots(figsize=(6, 7))

ax.scatter(N1, time1, s=25)
ax.scatter(N2, time2, s=25)
ax.scatter(N3, time3, s=25)

ax.set(xlabel='$N$', ylabel='Number of swaps')

line1, = ax.plot(N1, time1, color='blue')
line2, = ax.plot(N2, time2, color='red')
line3, = ax.plot(N3, time3, color='black')

ax.legend([line1, line2, line3], ['combSort', 'hibbardSort', 'fibSort'])

plt.show()

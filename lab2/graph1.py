import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

df = pd.read_csv("combsort.csv")

N = np.array(df["N"])
time = np.array(df["time"])
fig, ax = plt.subplots(figsize=(6, 7))

ax.scatter(N, time, s=25)

ax.set(xlabel='$N$', ylabel='Time, microseconds')

ax.plot(N, time, color='blue')

plt.show()
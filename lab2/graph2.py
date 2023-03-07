import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

df = pd.read_csv("rassort.csv")

N = np.array(df["N"])
time = np.array(df["number of swaps"])
fig, ax = plt.subplots(figsize=(6, 7))

ax.scatter(N, time, s=25)

ax.set(xlabel='$N$', ylabel='number of swaps')

ax.plot(N, time, color='blue')

plt.show()
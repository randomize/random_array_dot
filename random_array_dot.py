import numpy as np
import time


a = np.random.rand(10_000_000)
b = np.random.rand(10_000_000)

tic = time.time()
c = np.dot(a, b)
toc = time.time()

print("Value = " + str(c))
print("Time = " + str(1000 * (toc - tic)) + "ms")

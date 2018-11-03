import numpy as np
import time


a = np.random.rand(160_000_000)
b = np.random.rand(160_000_000)

tic = time.time()
c = np.dot(a, b)
toc = time.time()

print(f"Value = {c}")
print(f"Time = { 1000 * (toc - tic) :.2f} ms")

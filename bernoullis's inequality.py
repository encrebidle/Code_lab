%matplotlib inline

import matplotlib.pyplot as plt
import numpy as np

# You can play with the range of values for n and with the base 1.02, see what changes
sample = 200
x = np.arange(sample)
# This is used to plot the graph of 1.02^n, it is blue on the picture below
y = 1.02 ** x
plt.plot(x, y)
plt.xlabel('n')
plt.ylabel('Money($)')
# This is used to plot the graph of 1 + 0.02 * n, it is green on the picture below
z = 1 + 0.02 * x
plt.plot(x, z)
plt.show()

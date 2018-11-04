import tensorflow as tf
import time

# a = tf.random_uniform([160_000_000, 1])
# b = tf.random_uniform([160_000_000, 1])
var_a = tf.Variable(tf.random_uniform([160_000_000, 1]), name="var_a")
var_b = tf.Variable(tf.random_uniform([160_000_000, 1]), name="var_b")
init = tf.global_variables_initializer()

c = tf.matmul(var_a, var_b, transpose_a=True, transpose_b=False)

sess = tf.Session();
sess.run(init)

tic = time.time()
cc = sess.run(c)
toc = time.time()

sess.close()

print(f"Value = {cc}")
print(f"Time = { 1000 * (toc - tic) :.2f} ms")

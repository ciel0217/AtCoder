import numpy as np

x = np.random.rand(10,3)
x[:,0] +=  abs(np.random.randn((x.shape[0])) )* 300
x[:,1] +=  abs(np.random.randn((x.shape[0]))) * 300
y = [0]*2
y= 3*x[0,0:2]
p=np.zeros((2,2))
print(p)
#print(p*np.random.normal(0,np.eye(2)))



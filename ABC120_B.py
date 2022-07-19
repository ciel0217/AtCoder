T = list(map(int,input().split()))
A = T[0]
B = T[1]
K = T[2]
j = 0
num = []
for i in range(1,10000):
	if (A%i == 0) and (B%i == 0):
		num.insert(j,i)
		j= j+1
print (num[j-K])
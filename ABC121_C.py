T=list(map(int,input().split()))
N = T[0]
M = T[1]
A = []
B = []
count = 0
num = 0
for i in range(N):
	P=list(map(int,input().split()))
	A.insert(i,P[0])
	B.insert(i,P[1])

d=zip(A,B)
d1 = sorted(d)

for a,b in d1:
	for j in range(b):
		if(count == M):
			break
		count = count + 1
		num = num + a
	else:
		continue
	break
print(num)  
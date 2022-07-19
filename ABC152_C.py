n = int(input())
p = list(map(int,input().split()))
min1= 10**6
count = 0
for i in range(1,n):
	if min1 > p[i-1]:
		min1 = p[i-1]
	if min1 >= p[i]:
		#print("max=",min1,"p[i]=",p[i])
		count+=1

print(count+1)
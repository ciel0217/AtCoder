n = int(input())
a = list(map(int,input().split()))
b = sorted(a)
for i in range(n-1):
	if b[i] == b[i+1]:
		print("NO")
		exit()
print("YES")

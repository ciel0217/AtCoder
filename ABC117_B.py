N = int(input())
L = sorted(list(map(int,input().split())),reverse=True)
gou = 0
for i in range(1,N):
	gou += L[i]
if L[0] < gou:
	print ("Yes")
else:
	print ("No")
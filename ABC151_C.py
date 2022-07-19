n,m = list(map(int , input().split()))
wa = 0
ac = 0
ch = []
for i in range(m):
	p,s = map(str,input().split())
	if int(p) not in ch:
		if s == 'WA':
			wa+=1
		elif s == 'AC':
			ch.append(int(p))
			ac+=1
print(ac,wa)

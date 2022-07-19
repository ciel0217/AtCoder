T=input()
ans=[]

for i in range(len(T)):
	for j in range(i,len(T)):
		ans = ans+T[j]
		print(ans)
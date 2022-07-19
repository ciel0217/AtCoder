n = int(input())
ma = 0
str1 = {}
ans=[]
for i in range(n):
	s = str(input())
	try:
		str1[s]+=1
	except:
		str1[s]=1
	if ma < str1[s]:
		ma=str1[s]
sorted(str1.items(),key=lambda x: x[1],reverse=True)
for item,val in str1.items():
	if ma==val:
		ans.append(item)
for i in sorted(ans):
	print(i)

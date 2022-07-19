def yi(n):
	yield n 
	n = n+1

print("開始値と終了値を指定してください")
st,fi = list(map(int,input().split()))
for i in range(st,fi):
	a = yi(i)
	print(next(a))
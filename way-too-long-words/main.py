c = int(input())
for _ in range(c):
	s = input()
	n = len(s)
	if n > 10:
		s = s[0] + str(n-2) + s[n - 1]
	print(s)

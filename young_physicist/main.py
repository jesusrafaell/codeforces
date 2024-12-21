def main():
	q = int(input())  
	sum_x = 0
	sum_y = 0
	sum_z = 0

	for _ in range(q):
		x, y, z = map(int, input().split())
		sum_x += x
		sum_y += y
		sum_z += z

	print("YES" if (sum_x == 0 and sum_y == 0 and sum_z == 0) else "NO")

if __name__ == "__main__":
	main()

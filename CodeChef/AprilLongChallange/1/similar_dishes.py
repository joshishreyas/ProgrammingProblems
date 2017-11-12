
t = int(raw_input())

while t > 0:
	first = raw_input().split()
	second = raw_input().split()
	counter = 0 
	found = 1
	for i in first:
		if i in second:
			counter+=1
		if 2*counter == len(first):
			print "similar"
			found = 1
			break
	if not found:
		print "dissimilar"

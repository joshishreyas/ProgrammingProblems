

#coded by asprazz


t = int(raw_input())

while t>0:

	numbers = raw_input().split()

	n = int(numbers[0])
	p = int(numbers[1])

	cakeDifficulty = p//2
	difficulty = p//10
	cake = 0
	diff = 0
	solved = raw_input().split()

	for x in xrange(0,len(solved)):
		if(int(solved[x]) >= cakeDifficulty):
			cake+=1
		if (int(solved[x]) <= difficulty ):
			diff+=1

	if((cake == 1) and (diff == 2)):
		print "yes"
	else:
		print "no"		
	t-=1